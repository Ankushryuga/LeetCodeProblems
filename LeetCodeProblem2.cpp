// Add two numbers in linked list.
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummHead=new ListNode(0);
ListNode* curr=dummHead;
int carry=0;
while(l1!=NULL || l2!=NULL || carry!=0){
	int x=l1?l1->val:0;
	int y=l2?l2->val:0;
	
	int sum=carry+x+y;
	carry=sum/10;
curr->next=new ListNode(sum%10);
curr=curr->next;

l1=l1?l1->next:nullptr;
l2=l2?l2->next:nullptr;
}
return dummHead->next;
    }

//Linked list:::
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
  ListNode* dummHead=new ListNode(0);
  ListNode* curr=dummHead;
  int carry=0;
  while(l1!=NULL || l2!=NULL || carry!=0){
    int x=l1?l1->val:0;
    int y=l2?l1->val:0;
    int sum=carry+x+y;
    carry=sum/10;
    curr->next=new ListNode(sum%10);
    curr=curr->nect;
    l1=l1?l1->next:nullptr;
    l2=l2?l2->next:nullptr;
  }
return dummHead->next;
}

// add two number in linked list using recursion...
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
	if(l1==NULL && l2==NULL)	return NULL;
	if(l1==NULL) return l2;
	if(l2==NULL) return l1;
	
	int a=l1->val+l2->val;
	ListNode* p=new ListNode(a%10);
	p->next=addTwoNumbers(l1->next, l2->next);
	
	if(a>=10) p->next=addTwoNumbers(p->next, new ListNode(1));
	return p;
}








