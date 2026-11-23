/*Create a data base for 5 students in a school using array of structs, each struct contain 4 members:

1-Student name

2-Student age

3-Student degree

4-Student section */


#include <stdio.h>


struct Student
{
    char name[50];
    int age;
    int degree;
    int section;
};


void print(struct Student students[]);

int main()
{

    struct Student students[5];


    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter data for student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter degree: ");
        scanf("%d", &students[i].degree);

        printf("Enter section: ");
        scanf("%d", &students[i].section);
    }


    print(students);

    return 0;
}


void print(struct Student students[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Degree: %d\n", students[i].degree);
        printf("Section: %d\n", students[i].section);
    }
}
