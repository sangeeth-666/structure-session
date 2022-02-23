/*#include<stdio.h>
struct student func1(struct student ); // function declaration
struct student
{
    char name[30];    
	int roll;
};
int main()
{
    struct student s1={"sangeeth",411};
    func1(s1); // function call
    return 0;
}
//...........function definition.........
struct student func1(struct student s)
{
    printf("Name: %s\nRoll no: %d\n",s.name,s.roll);
}*/

/*--------call by reference------*/
#include<stdio.h>
struct student func1(struct student *s); // function declaration
struct student
{
    char name[30];    
	int roll;
};
int main()
{
    struct student s1={"sangeeth",411};    
	func1(&s1); // function call    
	return 0;
}
/*...........function definition.........*/
struct student func1(struct student *s)
{
    printf("Name: %s\nRoll no: %d\n",s->name,s->roll);
}

