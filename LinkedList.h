#ifndef LinkedList_H
#define LinkedList_H
#include <stdbool.h>
/*
    Student structure:
        char name[32]
        int number
        float subA
        float subB
        bool graduate
        struct Student *next
*/
typedef struct Student {
    char name[32];
    int studentNum;
    float subA;
    float subB;
    bool graduate;
    struct Student *next;
}studentStruct;

/*
    *allocate(void) 
    Allocate pointer memory of size struct Student.
    return: pointer memory
*/
studentStruct *allocate(void);

/*
    appendStudent(studentStruct *student)
    Add Student to the end of the list.
    verifies if student meets graduate criteria.
*/
void appendStudent(studentStruct *student);

/*
    dumpGradList(struct Student *s)
    Prints list of students meeting graduate criteria.
*/
void dumpGradList(studentStruct *s);

/*
 *
 */
studentStruct *getHead(void);
/*
 *
 */
studentStruct *getAscHead(void);

#endif
