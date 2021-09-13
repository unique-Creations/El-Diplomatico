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
    dumpGradList(struct Student *s, int command)
    Prints list of students meeting graduate criteria.
    Command 1: dump list of students graduating.
    Else list is dumped depending on head.

*/
void dumpList(studentStruct *s, int command);

/*
 *  studentStruct *getHead(void)
 *  get the head node of linked list
 */
studentStruct *getHead(void);
/*
 * studentStruct *getAscHead(void)
 * Get the head for subject A sorted list.
 */
studentStruct *getAscHead(void);

/*
 *  studentStruct *deepCopy(studentStruct *student)
 *  Allocates and returns a pointer to a deep copy of studentStruct.
 *  @param: student pointer to deep copy
 *  @return: pointer to deep copy of param.
 */
studentStruct *deepCopy(studentStruct *student);

#endif
