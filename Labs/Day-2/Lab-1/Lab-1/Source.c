#include <stdio.h>
#include <stddef.h>

struct Student
{
	int id;
	char name[50];
	int Age;
	float marks;
};

void getStudent(struct Student *s)
{
	printf("Enter Id: ");
	scanf_s("%d", &s->id);
	printf("Enter Name: ");
	//clear 
	while (getchar() != '\n');
	fgets(s->name,sizeof(s->name),stdin);
	printf("Enter Age: ");
	scanf_s("%d", &s->Age);
	printf("Enter Marks: ");
	scanf_s("%f", &s->marks);

	size_t len = strlen(s->name);
	if (len > 0 && s->name[len - 1] == '\n') {
		s->name[len - 1] = '\0';
	}
}
void printStudents(struct Student s) {
	printf("\nStudent Details \n");
	printf("Name %s\n", s.name);
	printf("Age: %d\n",s.Age);
	printf("Marks: %.2f\n",s.marks);
}
int main1() {
	struct Student s1;
	struct Student s2 = { 101,"Vikash verma",89.5 }; //C89
	s1 = (struct Student) //C99
	{
		102,"Rakesh",90.0
	};

	/*printf("Please enter student details");
	scanf_s("%d",s1.id);
	printf("Student Id is: %d"+s1.id);*/

	struct  Student student1;
	getStudent(&student1);
	printStudents(student1);
	return 0;
}