Programming Projects
1. Write a program that uses printf to display the following picture on the screen:
       *
      *
     *
*   *
 * *
  *
2. Write a program that computes the volume of a sphere with a 10-meter radius, using the for￾mula v = 4/3πr
3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap￾pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself
twice to compute r
3
.
3. Modify the program of Programming Project 2 so that it prompts the user to enter the radius
of the sphere.
4. Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:
Enter an amount: 100.00
With tax added: $105.00
5. Write a program that asks the user to enter a value for x and then displays the value of the
following polynomial:
3x5 + 2x4 – 5x3 – x2
 + 7x – 6
Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself
repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)
6. Modify the program of Programming Project 5 so that the polynomial is evaluated using the
following formula:
((((3x + 2)x – 5)x – 1)x + 7)x – 6
Note that the modified program performs fewer multiplications. This technique for evaluat￾ing polynomials is known as Horner’s Rule.
7. Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3
Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
integer values throughout, not floating-point numbers.
8. Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
Display each balance with two digits after the decimal point. Hint: Each month, the balance
is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
a percentage and divide it by 12.

