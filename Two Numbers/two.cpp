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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* ln = NULL;
        int val = 0;
        while (l1 || l2 || val)
        {
            if (l1)
            {
                val += l1->val;
                l1 = l1->next;
            }

            if (l2)
            {
                val += l2->val;
                l2 = l2->next;
            }

            ListNode* newNode = new ListNode(val % 10);

            if (ln == NULL)
                ln = newNode;
            else
            {
                ListNode* head = ln;
                while (ln->next)
                    ln = ln->next;

                ln->next = newNode;
                ln = head;
            }

            val = val / 10;

        }

        return ln;
    }
};