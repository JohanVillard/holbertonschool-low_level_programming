#!/usr/bin/python3
"""largest_palinfrome providing a function printing the largest palindrome of a product"""

array_prod = []  # Store digit of product
highest_pal = 0
curr_pal = 0
temp_num = 0

for x in range(1, 1000):
    for y in range(1, 1000):
        curr_prod = x * y
        temp_num = curr_prod

        array_prod = list(map(int, str(temp_num)))

        if (len(array_prod) == 2 or len(array_prod) == 3):
            if array_prod[0] == array_prod[-1]:
                curr_pal = curr_prod
        if (len(array_prod) == 4 or len(array_prod) == 5):
            if ((array_prod[0] == array_prod[-1]) and
                    (array_prod[1] == array_prod[-2])):
                curr_pal = curr_prod
        if len(array_prod) == 6:
            if ((array_prod[0] == array_prod[-1]) and
                    (array_prod[1] == array_prod[-2]) and
                    (array_prod[2] == array_prod[-3])):
                curr_pal = curr_prod

        array_prod.clear()

        if curr_pal > highest_pal:
            highest_pal = curr_pal

print(highest_pal)
