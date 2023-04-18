# Code Description
This is a C program that prompts the user to enter the size of an array, creates an array of the given size, initializes the first element to 1, and then fills the rest of the array with elements that are twice the previous element. Finally, it prints the array elements one by one.

# How to Run the Code
To run the code, you need to have the CS50 library installed on your system. If you don't have it installed, you can follow the installation instructions provided on the CS50 library GitHub page.

Once you have installed the CS50 library, you can compile the code using the following command:
gcc -o program program.c -lcs50

After compiling the code, you can run the program using the following command:
./program

When you run the program, it will prompt you to enter the size of the array. After entering the size, it will create the array, fill it with elements that are twice the previous element, and then print the elements one by one.

# Example Input/Output
Enter size off array: 6
1 2 4 8 16 32

# Note
- The program does not perform any error checking on the user input. If the user enters an invalid size for the array (e.g., a negative number or a non-integer), the - program will still create an array of the specified size, which may cause unexpected behavior.
- The program may also produce unexpected behavior if the size of the array is very large and causes the program to run out of memory.

