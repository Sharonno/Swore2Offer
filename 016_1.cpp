ListNode* ReverseList(ListNode* pHead) {
        
        ListNode* pReversedHead = NULL;
        ListNode* pNode = pHead;
        ListNode* pPre = NULL;
        while(pNode != NULL){
            ListNode* pNext = pNode->next;
            if(pNext == NULL)
                pReversedHead = pNode;
            
            pNode->next = pPre;
            pPre = pNode;
            pNode = pNext;
        }
        return pReversedHead;
        
        
              
    }