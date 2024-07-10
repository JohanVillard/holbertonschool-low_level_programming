More memory allocation

P1T0 : Allocating memory with malloc
P1T1 : Concatenate 2 strings
P1T2 : Allocate memory to an array of nmemb on size bytes each and set set it to 0
P1T3 : Create an array containing values from min to max included and by order to min to max
P1T4 : Recreate realloc

for (i = 0; i < new_size; i++)
	printf("ptr: %p,  new_ptr: %p\n", (char *)ptr + i, (char *)new_ptr + i);