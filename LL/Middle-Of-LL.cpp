//Question => Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.
#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


 ListNode* middleNode(ListNode* head) 
{
    if(head == nullptr || head-> next == nullptr) return head;
         
    bool middleBreak = false; 
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast)
    {
        fast = fast ->next;
        if(fast == nullptr) 
        {
        middleBreak = true;
        break;
        }
        fast = fast ->next;
        slow = slow ->next;
    }
    return slow;
}