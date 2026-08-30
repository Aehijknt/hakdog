#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{    
    char userInput[10];
    
    printf("\n***************************************************\n\n");
    printf("Good day! We are from the BSCS 1-B and this is our final project for CMPSC 111.\n\n");
    printf("\nTITLE:\tUsing C language for Student ID Registration\n");
    printf("\nMEMBERS:   Einstein Kien R. Salonga\n\t   Jan Keith Marley Dela Rosa\n\t   Jamaica Puyaoan\n");
    printf("\n***************************************************\n");
    
    printf("\n\t    Type \"Register\" to proceed.\n\n");
    scanf("%s", userInput);
    
	printf("\n---------------------------------------------------\n");
   
      if (strcmp(userInput, "register") == 0 || strcmp(userInput, "Register") == 0 || strcmp(userInput, "REGISTER") == 0) {
         printf("\n   Please fill up the required information below.\n"); }
         //strcmp is use to compare two strings.
		
	     else{
            printf("\n\tWrong key\n");
            exit(0); }
	
    printf("\n---------------------------------------------------\n");
  
    char name [50];
    
    printf("\t\t    (First name/MI/Last name)");
    printf("\n\nEnter your full name: ");  
    scanf(" %[^\n]%*c", name);
	//%[^\n]%*c tells scanf to read characters until \n is found or in other words, it allows the input to include spaces.
    
    printf("\n---------------------------------------------------\n\n");
    
    int studentId;
    
    printf("\tEnter your Student number: ");
    scanf("%i", &studentId);
    
    printf("\n---------------------------------------------------\n");
    
    char college [50];
    
    printf("\n\tEnter your College: ");
    scanf(" %[^\n]%*c", college);
    
    printf("\n---------------------------------------------------\n");
    
    char course [30];
    
    printf("\n\tEnter your course: ");
    scanf("%[^\n]%*c", course);
     
	printf("\n---------------------------------------------------\n");
   
    int year;
   
    printf("\tCHOOSE YOUR YEAR LEVEL\n\n");
    printf("\t1 - Freshman\n\t2 - Sophomore\n\t3 - Junior\n\t4 - Senior\n\n");
    printf("Enter your year level: ");
    scanf("%i", &year);
    
    switch (year) 
    {
        case 1:
            printf("\n\tYou chose 1st Year.\n");
            break;
       
        case 2:
            printf("\n\tYou chose 2nd Year.\n");
            break;
        
        case 3:
            printf("\n\tYou chose 3rd Year.\n"); 
            break;
        
        case 4:
            printf("\n\tYou chose 4th Year.\n");
            break;
       
        default:
            printf("\n\tInvalid.\n");
             exit(0);   
    }   
    
    printf("\n---------------------------------------------------\n");

    char section;
 
    printf("\tCHOOSE YOUR SECTION\n");
    printf("\n\t\tA\n\t\tB\n\t\tC\n");
    printf("\nEnter your section: ");
    scanf(" %c", &section); 
    
      if (section == 'A' || section == 'a') {
         printf("\n\tYou chose Section A\n"); } 
        
		 else if (section == 'B' || section == 'b') {
           printf("\n\tYou chose Section B\n"); }
        
         else if (section == 'C' || section == 'c'){
		   printf("\n\tYou chose Section C\n");}
		
		 else {
           printf("\n\tUnknown Section.\n");
           exit(0); }
           
    printf("\n---------------------------------------------------\n");
    
    char contactNum [15];
    
    printf("\n\tEnter your Contact number: ");
    scanf(" %[^\n]%*c", contactNum); 
	//%[^\n]%*c tells scanf to read characters until \n is found or in other words, it allows the input to include spaces.

    printf("\n---------------------------------------------------\n");
    
    char email [30];
    
    printf("\n\tEnter your email:  ");
    scanf("%[^\n]%*c", email);
    
    printf("\n---------------------------------------------------\n");
    
    
	printf("\n\tCHECK IF THE ENTERED INFORMATION IS CORRECT.\n");
    printf("\n________________________________________________________________________________________________________________\n");
    printf("\n\tName:     \tStudent number:      \tCollege:      \tCourse/ Year/ Section:       \tContact number:");    
    printf("\n  %s       %i             %s                       %s %i - %c                %s", name, studentId, college, course, year, section, contactNum);
    printf("\n________________________________________________________________________________________________________________\n\n");
    
    char details;
    
    printf("\n\tIf the entered information above is correct, enter Y to save details and N to cancel.");
	printf("\n\n\tIs it correct? (Y or N): ");
	scanf(" %c", &details);
   
    switch (details) 
    {
        case 'y':
        case 'Y':
            printf("\n\tYou are now registered!.\n");
            break;
       
        case 'n':
        case 'N':	
            printf("\n\tRegistration cancelled.\n");
            break;
       
        default:
            printf("\n\tInvalid.\n");
             exit(0);   
    }   
    
    return 0; 
}
    
    
