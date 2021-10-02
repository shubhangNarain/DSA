/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* N = NULL;
        ListNode* tail = N;
        int carry = 0;
        while(l1!=NULL && l2!=NULL)
        {
            int a = l1->val;
            int b = l2->val;
            int sum = carry + a + b;
            int digit = sum%10;
            carry = sum/10;
            
            ListNode* temp = new ListNode(digit);
            temp->next = NULL;
            
            if(tail==NULL)
            {
                N = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL)
        {
            int a = l1->val;
            int sum = carry + a;
            int digit = sum%10;
            carry = sum/10;
            
            ListNode* temp = new ListNode(digit);
            temp->next = NULL;
            
            if(tail==NULL)
            {
                N = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
            l1 = l1->next;
        }
        while(l2!=NULL)
        {
            int b = l2->val;
            int sum = carry + b;
            int digit = sum%10;
            carry = sum/10;
            
            ListNode* temp = new ListNode(digit);
            temp->next = NULL;
            
            if(tail==NULL)
            {
                N = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
            l2 = l2->next;
        }
        if(carry>0)
        {
            ListNode* temp = new ListNode(carry);
            temp->next = NULL;
            
            if(tail==NULL)
            {
                N = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
        }
        return N;
    }
};
