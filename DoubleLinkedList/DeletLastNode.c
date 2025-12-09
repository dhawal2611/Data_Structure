
#include "DoubleLinkList.h"

Student *SDeletLastNode (Student *Head) {
    Student *DeletLastNode = NULL, *SCurrentNode = Head;

    if(Head == NULL) {
        printf("No node avaiable to delet\n");
        return NULL;
    } else {
        if(Head->next == NULL) {
            SCurrentNode = NULL;
        }
        while(Head->next) {
            DeletLastNode = Head;
            Head = Head->next;
        }
	if(DeletLastNode) {
		DeletLastNode->next = NULL;
	}
        printf("Last Node data is : %d\n", Head->RollNo);
        printf("Delete node\n");
        Head->RollNo = 0;
        Head->next = NULL;
        Head->prev = NULL;
        free(Head);
        Head = NULL;
	
	//DeletLastNode->next = NULL;
    }

    return SCurrentNode;
}
