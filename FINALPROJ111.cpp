#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
void ccipher (char *word, int shift);


void lines (void){
    	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*********************************************************\n");
    } 
void lines2 (void){
    	printf("\n\n\t\t\t\t\t*********************************************************\n");
    } 
    
void lines3 (void){
    	printf("\n\n\t\t\t\t\t*********************************************************\n");
    } 
    
    
int main (){
	system("cls");
	char word[100];
	int shift;
		
	lines();
	printf("\n\n\t\t\t\t\t\tEnter a word/sentence(nospaces): ");
    scanf("%s", word);
    if (!isalpha(word[0])){
    	printf("\n\n\t\t\t\t\t\tError! Input should be characters.\n\n");
    	system("pause");
    	return main();
	}
	
	do {
        printf("\n\n\t\t\t\t\t\tEnter an shift: ");
        
        if (scanf("%d", &shift) == 1) {
            break;
        } else {
            printf("\n\n\t\t\t\t\t\tError!! Enter a whole number.\n\n");
            while (getchar() != '\n');
        }
    } while (1);
    
    lines2();
    
    ccipher (word, shift);

    printf("\n\n\t\t\t\t\t\tTranslated word: %s\n", word);
    
    lines3();

    return 0;
}

void ccipher (char *word, int shift) {
    int i = 0;


    while (word[i] != '\0') { 
        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z')) {
            switch (word[i]) {
                case 'A':
                	word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'B':
                	word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'C':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'D':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'E':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'F':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'G':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'H':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'I':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'J':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'K':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'L':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'M':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
            	case 'N':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'O':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'P':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'Q':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'R':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'S':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'T':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'U':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'V':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'W':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'X':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
            	case 'Y':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'Z':
                    word[i] = ((word[i] - 'A') + shift) % 26 + 'A';
                    break;
                case 'a':
                	word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'b':
                	word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'c':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'd':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'e':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'f':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'g':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'h':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'i':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'j':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'k':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'l':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'm':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'n':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'o':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'p':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'q':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'r':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 's':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 't':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'u':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'v':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'w':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'x':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
                case 'y':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;    
                case 'z':
                    word[i] = ((word[i] - 'a') + shift) % 26 + 'a';
                    break;
              	 }
        }
        i++;
        
    }
    
    
}

