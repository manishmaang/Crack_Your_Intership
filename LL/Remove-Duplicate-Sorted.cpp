//QUESTION => Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == nullptr || head ->next == nullptr)
        {
            return head;
        }
        ListNode* temp = head;
        while(temp)
        {
            if(temp->next &&(temp->val == temp->next->val))
            {
                temp->next = temp->next->next;
            }
            else
            {
               temp = temp->next;
            }
        }
        return head;
    }