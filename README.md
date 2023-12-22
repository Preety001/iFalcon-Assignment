# iFalcon-Assignment
Java/C++ code 

**Algorithm:**
1. Initialize an empty stack.
2. Iterate through each character in the string.
3. If it's an opening bracket, push onto the stack.
4. If it's a closing bracket:
    - If the stack is empty, return `false`.
    - If the top of the stack matches the current closing bracket, pop from the stack.
    - Otherwise, return `false`.
5. After processing all characters, the expression is valid if and only if the stack is empty.

**Time Complexity:** O(n), where n is the length of the input string. The algorithm iterates through each character in the string once.

**Space Complexity:** O(n), where n is the length of the input string. In the worst case, the stack may contain all opening brackets if there are no matching closing brackets until the end of the string.

**How to test the code**
1. There are two ways to check this code: 
    a) We can run this code on https://www.programiz.com/java-programming/online-compiler/  and it will run.
    b) Make a File: ParenthesesValidation.java and then paste the java code and run it. 
2. After running the code ```Enter the number of test cases you want to test:``` this line will be shown and we can enter the number of testcases we want to test.
3. After taking that input, another line will be printed asking for the string we want to check whether its valid or not. i.e, ```Enter the input string:```
4. Enter the string we want to test and output will be shown whether it is valid or not.

**Testcases** 
1.  Input: s = "(]"
    Output: false
2.  Input: s = "()[]{}"
    Output: true
3.  Input: s = "()"
    Output: true

    ![image](https://github.com/Preety001/iFalcon-Assignment/assets/89682311/09028fac-83dd-4a5e-b26d-ac05988e3f57)


