#include <stdio.h>
void main()
{ FILE *f;
    char Name[20], Section[2];
    int Class;
    f=fopen("stud.rec", "w");
    if(f==NULL)
    { printf("File does not exists \n");
        return;}
    printf("Enter the name \n");
    scanf("%s",&Name);
    int getc(FILE* f);
    fprintf(f, "The name of student is %s\n", Name);
    printf("Enter the class\n");
    scanf("%d",&Class);
    fprintf(f, "The class of student is %d\n", Class);
    printf("Enter the section\n");
    scanf("%s",&Section);
    fprintf(f,"The section of student is %c\n",Section);
    fclose(f);}

