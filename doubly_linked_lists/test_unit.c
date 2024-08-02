#include <CUnit/Basic.h>
#include <stdlib.h>
#include "lists.h"

/* Helper function to create a sample list */
dlistint_t* create_sample_list(void) {
    dlistint_t *head = NULL;
    add_dnodeint(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    return head;
}

/* Helper function to convert list to array for easy verification */
int* list_to_array(dlistint_t *head, int *size) {
    dlistint_t *current = head;
    int *arr = NULL;
    int i = 0;

    while (current != NULL) {
        arr = realloc(arr, (i + 1) * sizeof(int));
        arr[i++] = current->n;
        current = current->next;
    }

    *size = i;
    return arr;
}

/* Test insertion at the beginning */
void test_insert_at_beginning(void) {
    dlistint_t *head = NULL;
    insert_dnodeint_at_index(&head, 0, 10);

    int size;
    int *arr = list_to_array(head, &size);

    CU_ASSERT(size == 1);
    CU_ASSERT(arr[0] == 10);

    free(arr);
    free_dlist(head);  // Ensure to implement this function to free the list
}

/* Test insertion in the middle */
void test_insert_in_middle(void) {
    dlistint_t *head = create_sample_list();
    insert_dnodeint_at_index(&head, 1, 99);  // Insert between 1 and 2

    int size;
    int *arr = list_to_array(head, &size);

    CU_ASSERT(size == 4);
    CU_ASSERT(arr[0] == 1);
    CU_ASSERT(arr[1] == 99);
    CU_ASSERT(arr[2] == 2);
    CU_ASSERT(arr[3] == 3);

    free(arr);
    free_dlist(head);
}

/* Test insertion at the end */
void test_insert_at_end(void) {
    dlistint_t *head = create_sample_list();
    insert_dnodeint_at_index(&head, 3, 99);  // Insert at the end (after 3)

    int size;
    int *arr = list_to_array(head, &size);

    CU_ASSERT(size == 4);
    CU_ASSERT(arr[0] == 1);
    CU_ASSERT(arr[1] == 2);
    CU_ASSERT(arr[2] == 3);
    CU_ASSERT(arr[3] == 99);

    free(arr);
    free_dlist(head);
}

/* Test insertion out of bounds */
void test_insert_out_of_bounds(void) {
    dlistint_t *head = create_sample_list();
    dlistint_t *result = insert_dnodeint_at_index(&head, 10, 99);  // Out of bounds

    CU_ASSERT(result == NULL);

    free_dlist(head);
}

int main(void) {
    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Doubly Linked List Tests", NULL, NULL);
    CU_add_test(suite, "Insert at Beginning", test_insert_at_beginning);
    CU_add_test(suite, "Insert in Middle", test_insert_in_middle);
    CU_add_test(suite, "Insert at End", test_insert_at_end);
    CU_add_test(suite, "Insert Out of Bounds", test_insert_out_of_bounds);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}
