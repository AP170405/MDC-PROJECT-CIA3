#include <stdio.h>

int main() {
    int score = 0;

    printf("Welcome to the Multiple Choice Quiz!\n\n");

    // Question 1
    printf("Question 1: What is the capital of France?\n");
    printf("a) Berlin\nb) Madrid\nc) Paris\nd) Rome\nYour answer: ");
    char answer1;
    scanf(" %c", &answer1);
    if (answer1 == 'c' || answer1 == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'c) Paris'.\n");
    }

    // Question 2
    printf("\nQuestion 2: How many planets are in our solar system?\n");
    printf("a) 7\nb) 9\nc) 8\nd) 6\nYour answer: ");
    char answer2;
    scanf(" %c", &answer2);
    if (answer2 == 'c' || answer2 == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'c) 8'.\n");
    }

    // Question 3
    printf("\nQuestion 3: What is the largest planet in our solar system?\n");
    printf("a) Earth\nb) Jupiter\nc) Mars\nd) Saturn\nYour answer: ");
    char answer3;
    scanf(" %c", &answer3);
    if (answer3 == 'b' || answer3 == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'b) Jupiter'.\n");
    }

    // Question 4
    printf("\nQuestion 4: Which gas do plants absorb from the atmosphere?\n");
    printf("a) Oxygen\nb) Carbon dioxide\nc) Nitrogen\nd) Hydrogen\nYour answer: ");
    char answer4;
    scanf(" %c", &answer4);
    if (answer4 == 'b' || answer4 == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'b) Carbon dioxide'.\n");
    }

    // Question 5
    printf("\nQuestion 5: Who wrote the play 'Romeo and Juliet'?\n");
    printf("a) William Shakespeare\nb) Charles Dickens\nc) Jane Austen\nd) F. Scott Fitzgerald\nYour answer: ");
    char answer5;
    scanf(" %c", &answer5);
    if (answer5 == 'a' || answer5 == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'a) William Shakespeare'.\n");
    }
    
    
    // Question 6
    printf("\nQuestion 6: What is the chemical symbol for gold?\n");
    printf("a) Au\nb) Ag\nc) Fe\nd) Hg\nYour answer: ");
    char answer6;
    scanf(" %c", &answer6);
    if (answer6 == 'a' || answer6 == 'A') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'a) Au'.\n");
    }

    // Question 7
    printf("\nQuestion 7: Which gas makes up the majority of the Earth's atmosphere?\n");
    printf("a) Oxygen\nb) Carbon dioxide\nc) Nitrogen\nd) Hydrogen\nYour answer: ");
    char answer7;
    scanf(" %c", &answer7);
    if (answer7 == 'c' || answer7 == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'c) Nitrogen'.\n");
    }

    // Question 8
    printf("\nQuestion 8: What is the largest mammal on Earth?\n");
    printf("a) Elephant\nb) Giraffe\nc) Blue whale\nd) Lion\nYour answer: ");
    char answer8;
    scanf(" %c", &answer8);
    if (answer8 == 'c' || answer8 == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'c) Blue whale'.\n");
    }

    // Question 9
    printf("\nQuestion 9: Which planet is known as the 'Red Planet'?\n");
    printf("a) Earth\nb) Venus\nc) Mars\nd) Jupiter\nYour answer: ");
    char answer9;
    scanf(" %c", &answer9);
    if (answer9 == 'c' || answer9 == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'c) Mars'.\n");
    }

    // Question 10
    printf("\nQuestion 10: Who is the author of the Harry Potter Series ?\n");
    printf("a) Mark Twain\nb) F. Scott Fitzgerald\nc) J.K Rowling\nd) J.D. Salinger\nYour answer: ");
    char answer10;
    scanf(" %c", &answer10);
    if (answer10 == 'c' || answer10 == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is 'c) J.K. Rowling'.\n");
    }

    printf("\nYou scored %d out of 10 questions.\n", score);

    return 0;
}
