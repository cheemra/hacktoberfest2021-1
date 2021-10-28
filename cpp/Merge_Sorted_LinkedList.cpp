class Solution {
public:
    int temp;
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *sol = NULL, *end;
        while(l1 != NULL || l2 != NULL)
        {
            ListNode *soln;
            if(l1 == NULL)
            {
                temp = l2->val;
                l2 = l2->next;
            }
            else if(l2 == NULL)
            {
                temp = l1->val;
                l1 = l1->next;
            }
            else if(l1->val > l2->val)
            {
                temp = l2->val;
                l2 = l2->next;
            }
            else if(l1->val <= l2->val)
            {
                temp = l1->val;
                l1 = l1->next;
            }

            soln = new ListNode(temp);
            soln->next = NULL;
            if(sol == NULL)
            {
                sol = soln;
                end = sol;
            }
            else
            {
                end->next = soln;
                end = end->next;
            }
        }
        return sol;
    }
};
