## Conditional Statements
### Reading
if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:
1. if: This executes the body of bracketed code starting with **_statement1_** if **_condition_**  evaluates to true.

      if (condition) {
      statement1;
      ...
2. if - else: This executes the body of bracketed code starting with **_statement2_** if **_condition_** evaluates to true, or it executes the body of code starting with **_statement2_** if **_condition_** evaluates to false. Note that only one of the bracketed code sections will ever be executed.

      if (condition) {
      statement1;
      ...
      }
      else {
      statement2;
      ...
      }
      }
3. if - else if - else: In this structure, dependent statements are chained together and the **_condition_** for each statement is only checked if all prior conditions in the chain evaluated to false. Once a **_condition_** evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each **_condition_** in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

      if(first condition) {
    ...
      }
      else if(second condition) {
      ...
      }
      .
      .
      .
      else if((n-1)'th condition) {
      ....
      }
      else {
      ...
- - - - 
Given a positive integer **_n_**, do the following:

If **_1<=n<=9_**, print the lowercase English word corresponding to the number (e.g.,**1** one for **2**, two for , etc.).
If **_n>9_**, print Greater than 9.


#### Input Format
A single integer,**n**.

#### Constraints
- **_1<=n<=10^9_**

#### Output Format
If **_1<=n<=10^9_**, then print the lowercase English word corresponding to the number (e.g., one for **1**, two for **2**, etc.); otherwise, print Greater than 9.

**Sample Input0**

      5

**Sample Output0**

      five

#### Explanation0
five is the English word for the number **5**.

**Sample Input1**

      8

**Sample Output1**

      eight

#### Explanation1
eight is the English word for the number **8**.

**Sample Input2**

      44

**Sample Output2**

      Greater than 9

#### Explanation2
**_n_ = 44** is greater than **9**, so we print Greater than 9.
