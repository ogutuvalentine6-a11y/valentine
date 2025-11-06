
/*
Name:VALENTINE OTIENO OGUTU
Reg no:PA106/G/28813/25
Description :
Date:Week 
*/
#include <stdio.h>
#include <stdlib.h>

// structure to hold student information
struct Student {
    char name[20];
    char regNo[10];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;
    int choice, n, i;

    while (1) {
        printf("\n STUDENT RESULTS \n");
        printf("1. Add new student records\n");
        printf("2. Display all student records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            // WRITE student records
            
            case 1:
                file = fopen("results.dat", "ab");
                if (file == NULL) {
                    perror("Error opening results.dat for writing");
                    exit(EXIT_FAILURE);
                }

                printf("How many student records do you want to enter? ");
                scanf("%d", &n);
                getchar(); 

                for (i = 0; i < n; i++) {
                    printf("\nEnter details for student %d:\n", i + 1);

                    printf("Name: ");
                    fgets(s.name, sizeof(s.name), stdin);

                    printf("Registration Number: ");
                    fgets(s.regNo, sizeof(s.regNo), stdin);

                    printf("Total Marks: ");
                    scanf("%f", &s.totalMarks);
                    getchar(); 

                    fwrite(&s, sizeof(struct Student), 1, file);
                }

                fclose(file);
                printf("\n? %d student records successfully saved to results.dat\n", n);
                break;

            
            // OPTION 2: READ and display records
            case 2:
                file = fopen("results.dat", "rb");
                if (file == NULL) {
                    perror("Error opening results.dat for reading");
                    exit(EXIT_FAILURE);
                }

                printf("\n===== STUDENT RESULTS =====\n");

                while (fread(&s, sizeof(struct Student), 1, file) == 1) {
                    printf("Name: %s", s.name);
                    printf("Registration No: %s", s.regNo);
                    printf("Total Marks: %.2f\n", s.totalMarks);
                    printf("-----------------------------\n");
                }

                fclose(file);
                break;

            
            case 3:
                printf("Exiting program... Ciao!\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
