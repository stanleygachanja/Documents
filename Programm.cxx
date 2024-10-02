
//preprocesser Directive scanf(), printf()
#include <stdio.h>
int main()
{
    char a = 'k';
    char name[] = {"john"};
    int age = 18;
    float salary = 2000; //%f
    double area = 20;    //%lf
    printf("enter a character:");
    scanf("%c", &a);
    printf("enter name: ");
    scanf("%s", &name);
    printf("enter age: ");
    scanf("%d,&age");
    printf("enter salary:");
    scanf("%.2f,&2000");
    printf("enter area:");
    scanf("%f,&area");
    /*
    printf(" the character is %c",a );

    printf("the name is %s , john");
    printf("the age is%d , 18");
    printf("the salary is %.2f, 2000");
    printf("the area is %f, area");
    */
    return 0;
}