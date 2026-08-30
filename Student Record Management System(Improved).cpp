#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100 // max students allowed to be added
#define MAX_STRING_LENGTH 100 // max string lenth bla bla bla

struct Student 
{
    char studentNumber[MAX_STRING_LENGTH];
    char name[MAX_STRING_LENGTH];
    int age;
    char birthday[MAX_STRING_LENGTH];
    char birthPlace[MAX_STRING_LENGTH];
    char address[MAX_STRING_LENGTH];
    char religion[MAX_STRING_LENGTH];
    char civilStatus[MAX_STRING_LENGTH];
    char phoneNumber[MAX_STRING_LENGTH];
    char fatherName[MAX_STRING_LENGTH];
    char motherName[MAX_STRING_LENGTH];
    char guardian[MAX_STRING_LENGTH];
    char lastSchoolLevel[MAX_STRING_LENGTH];
    char lastSchoolName[MAX_STRING_LENGTH];
};

void addRecord(struct Student students[], int *count) 
{
    if (*count >= MAX_STUDENTS) 
    {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct Student newStudent;
    printf("Enter student number: ");
    fgets(newStudent.studentNumber, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.studentNumber, "\n");

    printf("Enter student name: ");
    fgets(newStudent.name, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.name, "\n");

    printf("Enter student age: ");
    while (scanf("%d", &newStudent.age) != 1) 
    {
        while (getchar() != '\n');
        printf("Invalid input. Enter student age: ");
    }
    while (getchar() != '\n');

    printf("Enter student birthday (YYYY-MM-DD): ");
    fgets(newStudent.birthday, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.birthday, "\n");

    printf("Enter student birth place: ");
    fgets(newStudent.birthPlace, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.birthPlace, "\n");

    printf("Enter student address: ");
    fgets(newStudent.address, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.address, "\n");

    printf("Enter student religion: ");
    fgets(newStudent.religion, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.religion, "\n");

    printf("Enter student civil status: ");
    fgets(newStudent.civilStatus, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.civilStatus, "\n");

    printf("Enter student phone number: ");
    fgets(newStudent.phoneNumber, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.phoneNumber, "\n");

    printf("Enter father's name: ");
    fgets(newStudent.fatherName, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.fatherName, "\n");

    printf("Enter mother's name: ");
    fgets(newStudent.motherName, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.motherName, "\n");

    printf("Enter guardian's name: ");
    fgets(newStudent.guardian, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.guardian, "\n");

    printf("Enter last school level finished: ");
    fgets(newStudent.lastSchoolLevel, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.lastSchoolLevel, "\n");

    printf("Enter name of last school attended: ");
    fgets(newStudent.lastSchoolName, MAX_STRING_LENGTH, stdin);
    strtok(newStudent.lastSchoolName, "\n");

    students[*count] = newStudent;
    (*count)++;
}

void saveRecordsToFile(struct Student students[], int count) 
{
    FILE *file = fopen("student_records.txt", "w");
    if (file == NULL) 
    {
        perror("Unable to open file");
        return;
    }

    for (int i = 0; i < count; i++) 
    {
        fprintf(file, "%s,%s,%d,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",
                students[i].studentNumber, students[i].name, students[i].age,
                students[i].birthday, students[i].birthPlace, students[i].address,
                students[i].religion, students[i].civilStatus, students[i].phoneNumber,
                students[i].fatherName, students[i].motherName, students[i].guardian,
                students[i].lastSchoolLevel, students[i].lastSchoolName);
    }

    fclose(file);
    printf("Records saved successfully.\n");
}

void readRecordsFromFile(struct Student students[], int *count) 
{
    FILE *file = fopen("student_records.txt", "r");
    if (file == NULL) 
    {
        perror("Unable to open file");
        return;
    }

    while ((*count < MAX_STUDENTS) && 
           (fscanf(file, "%[^,],%[^,],%d,%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
                   students[*count].studentNumber, students[*count].name, &students[*count].age,
                   students[*count].birthday, students[*count].birthPlace, students[*count].address,
                   students[*count].religion, students[*count].civilStatus, students[*count].phoneNumber,
                   students[*count].fatherName, students[*count].motherName, students[*count].guardian,
                   students[*count].lastSchoolLevel, students[*count].lastSchoolName) == 14)) 
                   {
        (*count)++;
    }

    fclose(file);
}

void searchRecord(struct Student students[], int count) 
{
    char searchKey[MAX_STRING_LENGTH];
    printf("Enter student number or name to search: ");
    fgets(searchKey, MAX_STRING_LENGTH, stdin);
    strtok(searchKey, "\n");
	printf("***********************************************************************************\n");
    printf("Search Results:\n");
    printf("\n");
    for (int i = 0; i < count; i++) 
    {
        if (strstr(students[i].studentNumber, searchKey) || strstr(students[i].name, searchKey)) 
        {
            printf("Student Number: %s\n", students[i].studentNumber);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Birthday: %s\n", students[i].birthday);
            printf("Birth Place: %s\n", students[i].birthPlace);
            printf("Address: %s\n", students[i].address);
            printf("Religion: %s\n", students[i].religion);
            printf("Civil Status: %s\n", students[i].civilStatus);
            printf("Phone Number: %s\n", students[i].phoneNumber);
            printf("Father's Name: %s\n", students[i].fatherName);
            printf("Mother's Name: %s\n", students[i].motherName);
            printf("Guardian: %s\n", students[i].guardian);
            printf("Last School Level Finished: %s\n", students[i].lastSchoolLevel);
            printf("Last School Attended: %s\n", students[i].lastSchoolName);
            printf("\n");
        }
    }
}

void editRecord(struct Student students[], int count) 
{
    char searchKey[MAX_STRING_LENGTH];
    printf("Enter student number to edit: ");
    fgets(searchKey, MAX_STRING_LENGTH, stdin);
    strtok(searchKey, "\n");

    for (int i = 0; i < count; i++) 
    {
        if (strcmp(students[i].studentNumber, searchKey) == 0) 
        {
            int choice;
            do 
            {
                printf("Choose the field to edit:\n");
                printf("1. Name\n");
                printf("2. Age\n");
                printf("3. Birthday\n");
                printf("4. Birth Place\n");
                printf("5. Address\n");
                printf("6. Religion\n");
                printf("7. Civil Status\n");
                printf("8. Phone Number\n");
                printf("9. Father's Name\n");
                printf("10. Mother's Name\n");
                printf("11. Guardian\n");
                printf("12. Last School Level Finished\n");
                printf("13. Last School Attended\n");
                printf("14. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);
                while (getchar() != '\n');

                switch (choice) 
                {
                    case 1:
                        printf("Enter new name: ");
                        fgets(students[i].name, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].name, "\n");
                        break;
                    case 2:
                        printf("Enter new age: ");
                        while (scanf("%d", &students[i].age) != 1) 
                        {
                            while (getchar() != '\n');
                            printf("Invalid input. Enter new age: ");
                        }
                        while (getchar() != '\n');
                        break;
                    case 3:
                        printf("Enter new birthday (YYYY-MM-DD): ");
                        fgets(students[i].birthday, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].birthday, "\n");
                        break;
                    case 4:
                        printf("Enter new birth place: ");
                        fgets(students[i].birthPlace, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].birthPlace, "\n");
                        break;
                    case 5:
                        printf("Enter new address: ");
                        fgets(students[i].address, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].address, "\n");
                        break;
                    case 6:
                        printf("Enter new religion: ");
                        fgets(students[i].religion, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].religion, "\n");
                        break;
                    case 7:
                        printf("Enter new civil status: ");
                        fgets(students[i].civilStatus, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].civilStatus, "\n");
                        break;
                    case 8:
                        printf("Enter new phone number: ");
                        fgets(students[i].phoneNumber, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].phoneNumber, "\n");
                        break;
                    case 9:
                        printf("Enter new father's name: ");
                        fgets(students[i].fatherName, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].fatherName, "\n");
                        break;
                    case 10:
                        printf("Enter new mother's name: ");
                        fgets(students[i].motherName, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].motherName, "\n");
                        break;
                    case 11:
                        printf("Enter new guardian's name: ");
                        fgets(students[i].guardian, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].guardian, "\n");
                        break;
                    case 12:
                        printf("Enter new last school level finished: ");
                        fgets(students[i].lastSchoolLevel, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].lastSchoolLevel, "\n");
                        break;
                    case 13:
                        printf("Enter new name of last school attended: ");
                        fgets(students[i].lastSchoolName, MAX_STRING_LENGTH, stdin);
                        strtok(students[i].lastSchoolName, "\n");
                        break;
                    case 14:
                        printf("Exiting edit menu...\n");
                        break;
                    default:
                        printf("Invalid choice. Please enter a number from 1 to 14.\n");
                        break;
                }
            } while (choice != 14);
            saveRecordsToFile(students, count);
            return;
        }
    }

    printf("Student not found.\n");
}

void displayAllRecords(struct Student students[], int count) 
{
    printf("ALL STUDENT RECORD:\n");
        printf("*********************************************\n");
    for (int i = 0; i < count; i++) 
    {
        printf("Student Number: %s\n", students[i].studentNumber);
        printf("Name: %s\n", students[i].name);
        printf("*********************************************\n");
    }
}

void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() 
{
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    readRecordsFromFile(students, &count);

    do 
    {
        clearScreen();
        printf("Student Record Management System\n");
        printf("1. Add Student Record\n");
        printf("2. Search Student Record\n");
        printf("3. Edit Student Record\n");
        printf("4. Display All Records\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n');

        switch (choice) 
        {
            case 1:
                addRecord(students, &count);
                saveRecordsToFile(students, count);
                break;
            case 2:
                searchRecord(students, count);
                break;
            case 3:
                editRecord(students, count);
                break;
            case 4:
                displayAllRecords(students, count);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number from 1 to 5.\n");
                break;
        }

        if (choice != 5) 
        {
            printf("Press Enter to continue...");
            while (getchar() != '\n');
        }
    } while (choice != 5);

    return 0;
}
