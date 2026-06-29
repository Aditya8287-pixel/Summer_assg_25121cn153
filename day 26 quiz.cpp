#include <stdio.h>

int main() {
    char ans;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    
    printf("1. What is the capital of India?\n");
    printf("A. Mumbai\nB. Delhi\nC. Kolkata\nD. Chennai\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'B' || ans == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct Answer: B. Delhi\n\n");
    }

    
    printf("2. Which language is used to write C programs?\n");
    printf("A. Python\nB. Java\nC. C\nD. HTML\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct Answer: C. C\n\n");
    }

    
    printf("3. How many days are there in a week?\n");
    printf("A. 5\nB. 6\nC. 7\nD. 8\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct Answer: C. 7\n\n");
    }

    // Display Result
    printf("===== QUIZ COMPLETED =====\n");
    printf("Your Score: %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else if (score == 1)
        printf("Keep Practicing!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}
