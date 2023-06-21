#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch, cha;
    int count = 0;
    
    printf("Please enter the file name: ");
    scanf("%s", filename);
    printf("the address of the file you have asked for is %x\n", &filename);
    
    file = fopen(filename, "r+");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    
    printf("Please enter the character you want to search ");
    scanf(" %c", &cha);
    printf("%x\n", &cha);
    
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
        count = count + 1;
        if (ch == cha) {
            printf("<-------found match here (%d)", count);
        }
    }
    
    fclose(file);
    
    return 0;
}
