#!/usr/bin/python3

largest_palindrome = 0

# Nested loops to iterate over all combinations of two 3-digit numbers
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j

    # check if the product if a palindrome
    if str(product) == str(product)[::-1]:

        # Update the largest palindrome if the current product is larger
        if product > largest_palindrome:
            largest_palindrome = product
# Save the result in the file "102-result"
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
