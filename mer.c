struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* curr1 = list1;
    struct ListNode* curr2 = list2;
    struct ListNode* curr = NULL;
    struct ListNode* head = NULL;
    while (curr1 != NULL && curr2 != NULL) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        
        if (curr1->val < curr2->val) {
            newNode->val = curr1->val;
            curr1 = curr1->next;
        }
        else{
            newNode->val = curr2->val;
            curr2=curr2->next;
        }
        
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            curr = newNode;
        }
        else {
            curr->next = newNode;
            curr = newNode;
        }
    }

    while (curr1 != NULL) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = curr1->val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            curr = newNode;
        }
        else {
            curr->next = newNode;
            curr = newNode;
        }

        curr1 = curr1->next;
    }   
    
    while (curr2 != NULL) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = curr2->val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            curr = newNode;
        }
        else {
            curr->next = newNode;
            curr = newNode;
        }

        curr2 = curr2->next;
    }

    return head;
}