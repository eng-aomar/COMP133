#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students{  // stundets tag
    int id;
    char name[20]; // elements
    float age;
} s4={5,"Ghazal",20}, s5, s6;

int main()
{
    // Structures
    struct students s1; // varaible
    s1.id= 1;
    strcpy(s1.name ,"ahmad");
    s1.age=18.5; // compile time inti
    struct students s2 ={2, "Alaa", 24};
    struct students s3 ={2};
    strcpy(s3.name,"Khaled");
    s3.age=45;
    // s3={3, "Ali", 30}; wrong


    // print values
    printf("Student s1 id is: %d\n", s1.id);
    printf("Student s1 name is: %s\n", s1.name);

    printf("Student s1 age is: %f\n", s1.age);
    printf("Please enter students' five information\n");
   // scanf("%d %s %lf", &s5.id, s5.name, &s5.age);
    printf("------------------------\n");
    printf("Student s1 info is: %d\t%s\t%f\n", s1.id,s1.name,s1.age );
    printf("------------------------\n");
    printf("Student s2 info is: %d\t%s\t%f\n", s2.id,s2.name,s2.age );
    printf("------------------------\n");
    printf("Student s3 info is: %d\t%s\t%f\n", s3.id,s3.name,s3.age );
    printf("------------------------\n");
    printf("Student s4 info is: %d\t%s\t%f\n", s4.id,s4.name,s4.age );
    printf("------------------------\n");
  //  printf("Student s5 info is: %d\t%s\t%f\n", s5.id,s5.name,s5.age );

    s6 = s5; // identical information id=id, name-name, age =age
    if (s5.id > s2.id) // invalid
    {
        printf("s5 is greater thatn s2\n");
    }
    else
    {
        printf("s5 is less thatn s2\n");
    }
    printf("------------------------\n");
    printf("Student s6 info is: %d\t%s\t%f\n", s6.id,s6.name,s6.age );

    //struct students s2, s3,s4,s5,,,,,,,,s45;
    // Arrays of strctures // arrays of integers // array of floats ,\// array os strings
    // parrall arrays // project

    struct students s[3]; // declare array of studetns structers

    for(int i=0; i<3; i++){

        printf("Please enter the informtion of student %d\n", i+1);
        scanf("%d%s%f",&s[i].id, s[i].name, &s[i].age);
    }
    printf("------------------------\n");

    for(int i=0; i<3; i++){

        //printf("Please enter the informtion of student %d\n", i+1);
       // scanf("%d%s%lf",&s[i].id, s[i].name, &s[i].age);
       printf("Student s[%d] info is: %d\t%s\t%f\n",i+1 ,s[i].id,s[i].name,s[i].age );
    }



    return 0;
}
