#include<iostream>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};
class Solution {
public:
    ListNode* FindMid(ListNode* pListHead) {
        if(pListHead == NULL)
            return;
        ListNode *pAhead;
        ListNode *pBehind;
        while(pAhead->next->next != NULL && pBehind->next != NULL){
            pAhead = pAhead->next->next;
            pBehind = pBehind->next;
        }
        return pBehind;
    }
    void displayList(ListNode *head){
        cout<<"List: "<<endl;
        ListNode *p = head->next;
        while(p!=NULL){
            cout << p->val<<" ";
            p = p->next;
        }
        cout << endl;
    }
};

void int main(int argc, char const *argv[])
{
    ListNode *head, *tmp;
    int i = 0;
    head = (ListNode*)malloc(sizeof(ListNode));
    head->next = NULL;
     for(i=0;i<10;++i){ 
        tmp = (ListNode*)malloc(sizeof(ListNode)); 
        tmp->val = i; 
        tmp->next = head->next; 
        head->next = tmp; 
    } 
    displayList(head);
    cout<<FindMid(head)<<endl;
    system("pause");
    return 0;
}