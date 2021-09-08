#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "LinkedList.h"
//GLOBAL VARIABLE
const float PASSING_GRADE = 50;


studentStruct *head, *current;

void isGraduate(studentStruct *s) {
    if (s->subA > (PASSING_GRADE - 1) && s->subB > PASSING_GRADE - 1) {
        s->graduate = true;
    } else {
        s->graduate = false;
    }
}

studentStruct *allocate(void) {
    studentStruct *p = (studentStruct *) malloc(sizeof(studentStruct) * 1);

    if (p == NULL) {
        printf((const char *) stderr, "\nUnable to allocate Memory");
        exit(1);
    }
    return (p);
}

void appendStudent(studentStruct *student) {
    // Check if student has been allocated.
    if (student == NULL) {
        fprintf(stderr, "No student to append.");
        exit(1);
    }
    // Verify if student meets graduation criteria.
    isGraduate(student);
    //TODO: FIX BUG: can't use memmove
    if (head == NULL) {
        memmove(head,student,sizeof(studentStruct));
        //head = student;
        //current now points at head.
        current = head;
        //set head's next pointer to NULL.
        current->next = NULL;
        return;
    }
    // Iterate till just before the NULL pointer.
    while (current->next != NULL) {
        current = current->next;
    }
    // Add allocated student struct to the end of the list.
    memmove(current->next,student,sizeof(studentStruct));
    current = current->next;
    current->next = NULL;
}

void dumpGradList(studentStruct *s) {
    printf("\nAll students recieving diploma:\n");
    printf("STUDENT NAME  SUBJECT A   SUBJECT B\n");
    while (s != NULL) {
        if (s->graduate) {
            printf("%s\t\t%.2f  \t%.2f\n",
                   s->name,
                   s->subA,
                   s->subB
            );

        }
        s = s->next;
    }
}

studentStruct *getHead(void) {
    return (head);
}
