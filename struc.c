#include<stdio.h>
#include<string.h>
struct student
{
    char department[100];
    char university[100];
    char hometown[100];
    int id;
    int nid;
    int yearofbirth;
/*Md khairul Islam
ID: 22231203041*/
};
int main(){
struct student meena;

printf("Enter the student information\n\n");

printf("Enter the Department Name:");
gets(meena.department);
printf("Enter the University Name:");
gets(meena.university);
printf("Enter the Home Town Name:");
gets(meena.hometown);
printf("Enter The ID Number:");
scanf("%d",&meena.id);
printf("Enter The NID Number :");
scanf("%d",&meena.nid);
printf("Enter the year of Birth:");
scanf("%d",&meena.yearofbirth);

printf("\n\nStudent Details\n\n");

printf("Department : %s\n",meena.department);
printf("university  :%s\n",meena.university);
printf("Home Town :%s\n",meena.hometown);
printf("ID :%d\n",meena.id);
printf("NID :%d\n",meena.nid);
printf("Year Of Birth:%d\n",meena.yearofbirth);


return 0;
}

