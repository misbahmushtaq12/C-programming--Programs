#include<stdio.h>
struct student
{
int rollno;
char name[60];
float marks;
};

int main()
{
struct student s[60];
int i,n;

printf("Enter the Number of student:\n");
scanf("%d",&n);

for(i=0;i<n;i++)

{
printf("Enter the Name Rollno Marks of student %d\n",i+1);
scanf("%s %d %f",&s[i].name,&s[i].rollno,&s[i].marks);
}


for(i=0;i<n;i++)
{

printf("\n\n\n");
printf("NAME=%s ROLLNO=%d MARKS=%f",s[i].name,s[i].rollno,s[i].marks);


}

}
