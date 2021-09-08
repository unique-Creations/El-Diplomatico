#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//GLOBAL VARIABLE
const int PASSING_GRADE = 50;

struct Student
{
    char name[32];
    int studentNum;
    float subA;
    float subB;
    bool graduate;
    struct Student *next;
};

struct Student *head, *current;

void isGraduate(struct Student *s)
{
    if(s->subA > (PASSING_GRADE - 1) &&  s->subB > PASSING_GRADE  - 1)
    {
        s->graduate = true;
    }else{
        s->graduate = false;
    }
}

struct Student *allocate(void)
{
    struct Student *p = (struct Student *)malloc(sizeof(struct Student) * 1);

    if (p == NULL)
    {
        printf(stderr, "\nUnable to allocate Memory");
        exit(1);
    }
    return(p);
}

void appendStudent(struct Student *student){
    // Check if student has been allocated.
    if (student == NULL)
    {
        fprintf(stderr, "No student to append.");
        exit(1);
    }
    // Verify if student meets graduation criteria.
    isGraduate(student);

    if (head == NULL)
    {
        head = student;
        //current now points at head.
        current = head;
        //set head's next pointer to NULL.
        current->next = NULL;
        return;
    }
    // Iterate till just before the NULL pointer.
    while (current->next != NULL)
    {
        current = current->next;
    }
    // Add allocated student struct to the end of the list.
    current->next = student;
    current = current->next;
    current->next = NULL;
    return;
}

void dumpGradList(struct Student *s)
{
    printf("\nAll students recieving diploma:\n");
    printf("STUDENT NAME  SUBJECT A   SUBJECT B\n");
	while( s!=NULL )
	{
        if (s->graduate)
        {
		printf("%s\t\t%.2f  \t%.2f\n",
				s->name,
				s->subA,
                s->subB
			  );
		
	    } 
        s = s->next;          
    }
        
}
// int main( ){
//     //Linked List tests
// 	int x;
//     struct Student *temp, *temp2;
//     temp = allocate();
//     strcpy(temp->name, "Ernesto");
//     temp->studentNum = 1;
//     temp->subA = 49;
//     temp->subB = 100;
//       temp2 = allocate();
//     strcpy(temp2->name, "Tito");
//     temp2->studentNum = 2;
//     temp2->subA = 50;
//     temp2->subB = 100;
//     appendStudent(temp);
//     appendStudent(temp2);
//     dumpGradList(head);
    
//     return 0;
// }
