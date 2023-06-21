#include <stdio.h>

int main() {
    FILE *file; 
    char filename[100];        
    char ch,cha;
    int count =0;
    printf("please enter the file name\n");
    scanf("%s", filename);
    printf("%x\n",&filename);
    file = fopen(filename, "r+");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    
    printf("please enter the character you want to search\n");
    scanf("%c", &cha);
    printf("%x\n",&cha);
    
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);  
        count=count+1;
        if(ch==cha)
        {
          printf("<-------found match here (%d)",count);
        }
    }
    
    fclose(file);
    
    return 0;
}
