#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    int id;
    char name[20];
    float age;

} ;

int main()
{
   struct student s1;
   s1.id=10;
   s1.age=19;
   strcpy(s1.name,"Ahmad");
   struct student s2={11,"Ali",23};
   struct student s3={2};

   printf("Student s1 information: id:%d\tname:%s\tage:%f\n", s1.id, s1.name, s1.age);

   if (s1.age>s2.age){
    printf("%s is older\n", s1.name);
   }
   else
   {
        printf("%s is older", s2.name);
   }


    return 0;
}
