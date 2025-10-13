#include "DoubleLinkList.h"

void vPrintDoubleLinkList(Student *Head) {
    Student *ItrPtr = Head;
    if(Head == NULL) {
        printf("No data available in linked list.\n");
        return;
    }

    while(ItrPtr) {
        printf("Roll No.: %d\n", ItrPtr->RollNo);
        ItrPtr = ItrPtr->next;
    }
    printf("\n");
    return;
}
