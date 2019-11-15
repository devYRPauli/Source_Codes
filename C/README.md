# C
Only C related stuff.


## Kodeathon-A4
Q3. We had to find the password to unlock the gate. We were a given a number input and a function from which the new number was to be formed. The function input consisted of a 9 digit numeric function from which we had to compare the indexes and form the new number, only condition that applied was that the number to be formed should be the largest one to be formed using  this operation not more than once.

Eg:

Input Line 1 - Number of passswords to be calculated.

Input Line 2 - Number of digits in the number.

Input Line 3 - 1337

Input Line 4 - {1,2,5,4,6,6,3,1,9}

Now, f(1) = 1, f(3) = 5, f(7) = 3. So, the largest number to be formed using this operation is 1557.

Note, we did not change the value of f(7) because it would have resulted in the last digit being 3 whereas the 2nd last digit is 5 i.e last digit can not be smaller than the previous digit. So, if the original value is suitable for the number or satisfies the above condition we do not change its value.
Output Line - 1557

TestCases:

INPUT:

2

4

1337

1 2 5 4 6 6 3 1 9

5

11111

9 8 7 6 5 4 3 2 1

OUTPUT:

1557

99999
