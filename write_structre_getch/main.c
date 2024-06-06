#include <stdio.h>
#include <stdlib.h>


struct student
{
    char name[50];
    int roll;
};
main()
{
    FILE *fptr;

    int num;

    if((fptr = fopen("ip.bin","wb+"))==NULL)
    {
        printf("nError in Opening File");
        exit(0);
    }
    printf("How many Students : ");
    scanf("%d",&num);
    struct student st[num];
    for(int i=0; i<num; i++)
    {
        printf("Enter the Name and Roll Number of each student: ");
        scanf("%s %d",st[i].name,&st[i].roll);
        fwrite(&st,sizeof(st),1,fptr);
    }
//Structure is Written on File
  //  getch();
    fclose(fptr);

    fptr = fopen("ip.bin", "rb");
    if (fptr == NULL) {
        printf("\nError in Opening File");
        exit(0);
    }

    printf("\nReading student data from file:\n");
    for (int i = 0; i < num; i++) {
        fread(&st[i], sizeof(struct student), 1, fptr);
        printf("Name: %s, Roll Number: %d\n", st[i].name, st[i].roll);
    }

    fclose(fptr);

}
