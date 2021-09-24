## Conditional Statements
### Reading
A for loop is a programming language statement which allows code to be repeatedly executed.
The syntax is

      for ( <expression_1> ; <expression_2> ; <expression_3> )
            <statement>
- expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
- expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
- expression_3 is generally used to update the flags/variables.
A sample loop is

      for(int i = 0; i < 10; i++) {
      ...
      }
- - - - 
### Objective
In this challenge, you will use a for loop to increment a variable through a range.

#### Input Format
You will be given two positive integers,**_a_**  and **_b_** (**_a_<=_b_**), separated by a newline.

#### Constraints
- **_1<=n<=10^9_**

#### Output Format
For each integer **_n_** in the inclusive interval **[_a_,_b_]**:

- If **_1≤n≤9_**, then print the English representation of it in lowercase. That is "one" for **_1_**, "two" for **_2_**, and so on.
- Else if **_n>9_** and it is an even number, then print "even".
- Else if **_n>9_** and it is an odd number, then print "odd".

Note:**_[a,b]={x∈∑|a≤x≤b}={a,a+1,...,b}_**



**Sample Input**

      8
      11

**Sample Output**

      eight
      nine
      even
      odd

