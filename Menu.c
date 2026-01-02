#include <stdio.h>

// Caclulates the factorial of a given number
void factorial() {

    int n;
    unsigned long long fact = 1; //unsigned long long to handle large results

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else {
        for (int i = 1; i <= n; i++) { // Loop from 1 to n
            fact = fact * i; // Recursive multiplication
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

}


// Checks if a number is prime
void prime() {

    int n,count=0; // Counter for factors

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) { // 0 and 1 are not prime numbers
        printf("%d is not a prime number.\n", n);
    }

    else{
        for (int i = 1; i <= n; i++){ // Loop from 1 to n

            if (n % i == 0) { // Check if i is a factor of n
                count++; // Increment factor count
           }
        }

        if (count == 2){ // A prime number has exactly two factors: 1 and itself
            printf("%d is a prime number.\n", n);
        }

        else{ // More than two factors means not prime
            printf("%d is not a prime number.\n", n);
        }
    }

}


// Calculates the nth Fibonacci number
void fibonacci() {

    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {

        printf("%d, ", t1);

        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2; // Update t1 and t2 for next iteration
        t2 = nextTerm; // Update t1 and t2 for next iteration

    }
    printf("\n"); // New line after series
}


// Displays the menu and handles user input
int main() {
    int choice, cont;
    do { //do-while loop to repeat menu until user decides to exit
        printf("--------Menu--------\n\n");

        printf("1. Calculate Factorial\n");

        printf("2. Check Prime\n");

        printf("3. Generate Fibonacci Series\n");

        printf("4. No Choice\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\n\nYou chose Factorial Calculation\n\n");
                factorial();
                break; 

            case 2:
                printf("\n\nYou chose to check Prime Number\n\n");
                prime();
                break;

            case 3:
                printf("\n\nYou chose Fibonacci Series Generation\n\n");
                fibonacci();
                break;

            case 4:
                printf("\n\nNo Choice selected. Exiting the program\n\n");
                printf("\n\nThank you for using the program.\n");
                return 0; // Exit the program

            default: // Handle invalid input
                printf("Invalid choice! Please try again\n");
            }

            printf("\n\nDo you want to return to the main menu? (Y/N): ");
            scanf(" %c", &cont); // Space before %c to consume any leftover newline character

    } while (cont == 'Y' || cont == 'y'); // Continue if user inputs 'Y' or 'y'

    printf("===== Code Executed Successfully =====\n");

    return 0;

}    