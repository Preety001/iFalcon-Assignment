// Code with the main function 

// * Make a file: ParenthesesValidation.java
// * Paste the following code in it.
// * To test the code kindly read the README.md file.

import java.util.Scanner;
import java.util.Stack;

public class ParenthesesValidation {
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for (char ch : s.toCharArray()) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            } else {
                if (stack.empty())
                    return false;
                if ((stack.peek() == '(' && ch == ')') || (stack.peek() == '{' && ch == '}') || (stack.peek() == '[' && ch == ']')) {
                    stack.pop();
                } else
                    return false;
            }
        }
        return stack.empty();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of test cases you want to test: ");
        int numberOfTestcases = scanner.nextInt();

        while (numberOfTestcases-- > 0) {
            System.out.print("Enter the input string: ");
            String inputString = scanner.next();

            if (isValid(inputString)) {
                System.out.println("The input string is valid");
            } else {
                System.out.println("The input string is invalid");
            }
        }

        scanner.close();
    }
}


