/*
Name:VALENTINE OTIENO OGUTU
Reg no:PA106/G/28813/25
Description :C file qusetion 3
Date:Week 7 
*/ 
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0.0;
    int n, i;
    
    file = fopen("sales.txt", "w");
    if (file == NULL) {
        perror("Error creating sales.txt");
        exit(EXIT_FAILURE);
    }

    printf("How many transactions do you want to enter? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount);  
    }

    fclose(file);
    printf("\n? Transactions saved successfully to sales.txt\n\n");


    file = fopen("sales.txt", "r"); 
    if (file == NULL) {
        perror("Error opening sales.txt for reading");
        exit(EXIT_FAILURE);
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("?? Total sales for the day: %.2f\n", total);

    return 0;
}

