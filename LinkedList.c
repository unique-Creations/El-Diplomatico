#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "LinkedList.h"
#include <string.h>

//GLOBAL VARIABLE
const float PASSING_GRADE = 50;
studentStruct *head, *current, *ascendingHead, *ascCurrent, *temp;

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
    bool studentPlaced = false;
    // Check if student has been allocated.
    if (student == NULL) {
        fprintf(stderr, "No student to append.");
        exit(1);
    }
    // Verify if student meets graduation criteria.
    isGraduate(student);
    if (head == NULL) {
        head = student;
        // deep copy to start sorted list.
        ascendingHead = deepCopy(student);

        //current now points at head.
        current = head;
        ascCurrent = ascendingHead;
        //set head's next pointer to NULL.
        current->next = NULL;
        ascCurrent->next = NULL;
        return;
    }

    //Add student to sorted list.
    ascCurrent = ascendingHead;
    studentStruct *prev;
    while (ascCurrent != NULL) {
        if (student->subA < ascCurrent->subA || student->subA == ascCurrent->subA) {
            studentPlaced = true;
            if (ascCurrent->studentNum == ascendingHead->studentNum) {
                temp = deepCopy(ascendingHead);
                *ascCurrent = *deepCopy(student);
                ascCurrent->next = deepCopy(temp);
                free(temp);
                temp = NULL;
                break;
            } else {
                temp = deepCopy(student);
                temp->next = ascCurrent;
                prev->next = temp;
                break;
            }
        }
        if(ascCurrent->next != NULL){
            prev = ascCurrent;
            ascCurrent = ascCurrent->next;
        }else{
            break;
        }
    }
    // If student's subject A is larger than previous student, add to the end.
    if (!studentPlaced){
        ascCurrent->next = deepCopy(student);
        ascCurrent = ascCurrent->next;
        ascCurrent->next = NULL;
    }
    // Add allocated student struct to the end of the list.
    current->next = student;
    current = current->next;
    current->next = NULL;
}

void dumpList(studentStruct *s, int command) {
    if (command == 1) {
        printf("\nAll students receiving diploma:\n");
        printf("STUDENT NAME  SUBJECT A   SUBJECT B\n");
        while (s != NULL) {
            if (s->graduate) {
                printf("%s\t\t\t%.2f  \t%.2f\n",
                       s->name,
                       s->subA,
                       s->subB
                );

            }
            s = s->next;
        }
    } else {
        printf("STUDENT NAME  SUBJECT A   SUBJECT B\n");
        while (s != NULL) {
            printf("%s\t\t\t%.2f  \t%.2f\n",
                   s->name,
                   s->subA,
                   s->subB
            );

            s = s->next;
        }
    }
}

studentStruct *getHead(void) {
    return (head);
}

studentStruct *getAscHead(void) {
    return (ascendingHead);
}

studentStruct *deepCopy(studentStruct *student){
    studentStruct *t;
    t = allocate();
    strcpy(t->name, student->name);
    t->studentNum = student->studentNum;
    t->subA = student->subA;
    t->subB = student->subB;
    t->graduate = student->graduate;
    t->next = student->next;
    return(t);
}