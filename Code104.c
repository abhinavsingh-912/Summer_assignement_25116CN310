#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Simple Quiz Application =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2) {
        score++;
    }

    printf("\nQ2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3) {
        score++;
    }

    printf("\nQ3. Which language is mainly used for Android development?\n");
    printf("1. Java\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1) {
        score++;
    }

    printf("\n===== Quiz Result =====\n");
    printf("Your Score: %d/3\n", score);

    if(score == 3) {
        printf("Excellent! All answers are correct.\n");
    } else if(score == 2) {
        printf("Good Job! Keep learning.\n");
    } else {
        printf("Better luck next time.\n");
    }

    return 0;
}