# experiment to show decison making statement in c++

# Aim:

To study and implement C++ decision making statements

# Software Required:

Visual Studio

# Theory:
Decision-making is the process to make a decision about which part of the code should be executed or not based on some condition. Decision-making in C++ involves the usage of conditional statements (also called decision control statements) to execute specific blocks of code primarily based on given situations and their results.

# if Statement:

In C++, the if statement is the simplest decision-making statement. It allows the execution of a block of code if the given condition is true. The body of the if statement is executed only if the given condition is true.

# if-else Statement:

The if else is a decision-making statement allows us to make a decision based on the evaluation of a given condition. If the given condition evaluates to true then the code inside the 'if' block is executed and in case the condition is false, the code inside the 'else' block is executed.

# if else if:

Ladder The if else if Ladder statements allow us to include additional situations after the preliminary if condition. The 'else if' condition is checked only if the above condition is not true, and the else is the statement that will be executed if none of the above conditions is true. If some condition is true, then not only the associated block is executed.

# Nested if else:

The nested if else statement contains an 'if' statement inside another 'if' statement. This structure lets in more complex selection-making by way of comparing multiple conditions. In this type of statement, multiple conditions are checked, and then the body of the last if statement is executed.

# Switch Statement In C++:

The switch statement is used when multiple situations need to be evaluated primarily based on the value of a variable or an expression. switch statement acts as an alternative to multiple if statements or if-else ladder and has a cleaner structure and it is easy for handling multiple conditions.

# Implementation:

Based on the above decision making statements in C++ , Simple programs have been used to help understand how decision making statements work in c++. The programs are:

1.Odd-Even check 2.Vowel Check 3.Finding the largest number from three given numbers by the user 4.Making a Calculator using Switch Case 5.Made a basic banking system using Switch Case

# Algorihtms:

# ** Program 1:**

Objective: To determine whether a user-entered number is even or odd.

Steps:

Start

Ask the user to enter an integer (n)

Read input into variable n

Check divisibility of n by 2:

If n % 2 == 0, then:

Display "This is an even number"

Else:

Display "This is an Odd number"

End

# Program 2:

Objective: To determine whether the character entered by the user is a vowel or a consonant.

Steps:

Start

Declare a character variable str

Ask the user to enter a character

Read the input into str

Check if the character is a vowel:

If str is equal to 'a', 'e', 'i', 'o', 'u' (or their uppercase forms), then:

Display "The Character entered is a Vowel"

Else:

Display "The Character entered is a Consonant"

End

# Program 3

Objective:

To determine and display the largest number among three user-entered integers.

Steps:

Start

Declare three integer variables: a, b, c

Ask user to enter three numbers

Read input values into a, b, and c

Initialize num ← a

Compare b and c with num:

If b > num, set num ← b

If c > num, set num ← c

Display the largest number (num)

End

# Program 4:

Objective: To perform one of four basic arithmetic operations—Addition, Subtraction, Multiplication, or Division—based on user input.

Steps:

Start

Declare float variables a, b, sum, sub, mul, Div and integer num

Ask user to enter two numbers

Read inputs into a and b

Ask user to select an operation:

1 → Addition

2 → Subtraction

3 → Multiplication

4 → Division

Read input into num

Use a switch-case statement to perform the selected operation:

Case 1: sum ← a + b

Case 2: sub ← a - b

Case 3: mul ← a * b

Case 4: Div ← a / b

Default: Display invalid input message

Display the result of the selected operation

End

# Program 5:

Algorithm: Vending Machine Program

Objective:

To allow a user to select an item from a vending machine and display the item along with its price.

Steps:

Start

Display the vending machine menu with items and prices:

Tea – ₹10

Coffee – ₹15

Cold Drink – ₹20

Water Bottle – ₹8

Ask the user to enter their choice (1 to 4).

Read the user input into variable choice.

Use a switch statement to perform the following:

Case 1: Display "You selected: Tea" and "Please pay ₹10".

Case 2: Display "You selected: Coffee" and "Please pay ₹15".

Case 3: Display "You selected: Cold Drink" and "Please pay ₹20".

Case 4: Display "You selected: Water Bottle" and "Please pay ₹8".

Default: If input is not 1–4, display "Invalid choice! Please select a valid item."

End
