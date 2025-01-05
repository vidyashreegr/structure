//Array of Structure//

#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

void main()
{

    struct student s[3];

    s[0].rollno=1;
    s[0].name ="vidya";
    s[0].marks=90.56;

    s[1].rollno=2;
    s[1].name ="Pallavi";
    s[1].marks=80.56;

    s[2].rollno=3;
    s[2].name ="Dharshu";
    s[2].marks=70.56;


    int i;
    for (i=0;i<3;i++)

        printf("student rollno\n",s[i].rollno);
    printf("student name\n",s[i].name);
    printf("student marks\n",s[i].marks);

}
