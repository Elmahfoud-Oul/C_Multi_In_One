# Multi-Programs in C

Welcome to the **Multi-Programs in C** repository! This project contains a single C program with various mini-programs for different tasks. The user can choose which task to execute, and the program will continue running until the user decides to exit.

## Features

The program includes the following functionalities:

### 1. **Year Checker (Leap Year Checker)**

This program checks if a given year is a leap year.  
It repeatedly prompts the user to enter a year and checks if it's a leap year until the user decides to stop.

### 2. **Detect Total Numbers (Digit Count)**

This program detects the total number of digits in a given integer.  
The user inputs an integer, and the program calculates the number of digits in it.

### 3. **Positive & Negative Array Checker**

This program allows the user to input an array of numbers (both positive and negative integers) and classifies them into positive, negative, and zero categories.  
It then displays the positive and negative numbers separately.

### 4. **Reverse Array Elements**

This program allows the user to input an array of integers and then displays the array in reverse order.

## How to Run

To get started, follow these steps:

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/Elmahfoud-Oul/C_Multi_In_One.git
2. Compile the program using a C compiler (e.g., GCC):
      ```
   gcc -o MultiPrograms Multi-Programs.c

### Example 1: Year Checker (Leap Year Checker)

```text
------------------------ Be Welcome :) ------------------------

 1:Years Checker Leap   2:Detect Total Numbers   3:Positive & Negativ Array   4:Iverse Array Ellements
  
*Choise one of these options: 1
Enter a year: 2024
The year 2024 is leap
Do you want to repeat, Write Y:Yes or N:No? Y

Enter a year: 2023
The year 2023 isn't leap
Do you want to repeat, Write Y:Yes or N:No? N

Do you want to relaunch the program again A:Accept or R:Reject? A


------------------------ Be Welcome :) ------------------------

 1:Years Checker Leap   2:Detect Total Numbers   3:Positive & Negativ Array   4:Iverse Array Ellements
  
*Choise one of these options: 2
Enter the list of Nums: 12345
Totale num in 12345 are: 5

Do you want to relaunch the program again A:Accept or R:Reject? N


------------------------ Be Welcome :) ------------------------

 1:Years Checker Leap   2:Detect Total Numbers   3:Positive & Negativ Array   4:Iverse Array Ellements
  
*Choise one of these options: 3
Enter array size: 5
Value of Tab[1]: -3
Value of Tab[2]: 0
Value of Tab[3]: 7
Value of Tab[4]: -1
Value of Tab[5]: 5

Negative num are: -3 -1 
Positive num are: 7 5
Do you want to relaunch the program again A:Accept or R:Reject? A


------------------------ Be Welcome :) ------------------------

 1:Years Checker Leap   2:Detect Total Numbers   3:Positive & Negativ Array   4:Iverse Array Ellements
  
*Choise one of these options: 4
Enter your array size: 3
Tab[1]: 1
Tab[2]: 2
Tab[3]: 3
List of array:  1.0 2.0 3.0 
Inverse of array:  3.0 2.0 1.0 
Do you want to relaunch the program again A:Accept or R:Reject? N

