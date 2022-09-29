// Online C compiler to run C program online
#include <stdio.h>

// Display an array of integer
void displayIntArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
        if ((i+1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

// Display menu
void displayMenu() {
    printf(
        "============\n"
        "Would you like to :\n"
        "1. Print the N first even numbers\n"
        "2. Tell if the number X is even or not\n"
        "3. Display all odd numbers between A and B\n"
        "-1. End\n"
        "============\n"
    );
    // printf(BLACK);
}

// Ask user for an integer and then tell if it is even or not
void inputIsEven() {
    int inputInt;
    
    printf("Enter an integer: ");
    scanf("%d", &inputInt);
    
    int isEven = !(inputInt % 2); 
    
    if (isEven) {
        printf("%d is an even number\n", inputInt);   
    } else {
        printf("%d is an odd number\n", inputInt); 
    }
}

// Ask user for a number N and then display the N first even numbers
void nFirstEvenNumbers() {
    int n;
    printf("How many even numbers : ");
    scanf("%d", &n);
    
    int evenNum[n];
    for (int i = 0; i < n; i++) {
        evenNum[i] = 2 * i;
    }
    displayIntArray(evenNum, sizeof(evenNum) / sizeof(evenNum[0]));
}

// Ask user for two numbers A & B. Then display all odd numbers between those two
void oddNumbersRange() {
    // User inputs lower and higher boundaries
    int A, B;
    printf("Lower boundary value (included) : ");
    scanf("%d", &A);
    printf("Higher boundary value (excluded) : ");
    scanf("%d", &B);
    
    // Find all odd numbers between the two boundaries
    int oddNum[(B-A) / 2];
    int counter = 0;
    for (int i = A; i <= B; i++) {
        int isOdd = i % 2;
        if (isOdd) {
            int arrayCurrentLength = sizeof(oddNum) / sizeof(oddNum[0]);
            oddNum[counter] = i;
            counter++;
        }
    }
    displayIntArray(oddNum, sizeof(oddNum) / sizeof(oddNum[0]));
}

int main() {
    int methodChoice;
    
    while (methodChoice != -1) {
        // User chooses which method should be executed
        displayMenu();
        
        printf("Your choice : ");
        scanf("%d", &methodChoice);
        
        // Call the correct function
        switch (methodChoice) {
            case 1:
                printf("Method chosen - N first even numbers :\n");
                printf("--------------\n");
                nFirstEvenNumbers();
                break;
            case 2:
                printf("Method chosen - Tell if the number X is even or not :\n");
                printf("--------------\n");
                inputIsEven();
                break;
            case 3:
                printf("Display all odd numbers between A and B :\n");
                printf("--------------\n");
                oddNumbersRange();
                break;
        }
    }
    
    printf("=== End ===");
    return 0;
}
