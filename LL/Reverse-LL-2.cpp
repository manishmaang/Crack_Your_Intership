//QUESTION => Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr)
        {
            return head;
        }
        ListNode* back = nullptr;
        ListNode* front = head ->next;
        ListNode* current = head;
        while(current)
        {
            current ->next = back;
            back = current;
            current = front;
            if(current != nullptr)front = current ->next;
        }
        return back;
    }