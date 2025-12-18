#include "DoubleLinkList.h"

Student *SSortList (Student *Head) {
    if (Head == NULL) {
        printf("No node availble in the list\n");
        return NULL;
    }

    int iTempSwap = 0;

    Student* SCurrent = Head;
    if(SCurrent->next == NULL) {
	    printf("No Node to sort\n");
	    return Head;
    }

    while (SCurrent != NULL) {
	Student* STraverse = SCurrent->next;
	while(STraverse) {
		if (STraverse->RollNo < SCurrent->RollNo) {
			iTempSwap = STraverse->RollNo;
			STraverse->RollNo = SCurrent->RollNo;
			SCurrent->RollNo = iTempSwap;
	        }
		STraverse = STraverse->next;
	}

        SCurrent = SCurrent->next;
    }
    return Head;

}
