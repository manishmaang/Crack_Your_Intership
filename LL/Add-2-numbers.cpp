//QUESTION => You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        while(l1 && l2)
        {
            int sum = l1->val + l2->val + carry;
            carry = sum / 10;
            sum = sum % 10;

            if(head == nullptr) head = tail = new ListNode(sum);
            else
            {
                tail -> next = new ListNode(sum);
                tail = tail -> next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            int sum = carry + l1->val;
            carry = sum / 10;
            sum = sum % 10;
            tail ->next = new ListNode(sum);
            tail = tail->next;
            l1 = l1->next;
        }
        while(l2)
        {
            int sum = carry + l2->val;
            carry = sum / 10;
            sum = sum % 10;
            tail ->next = new ListNode(sum);
            tail = tail->next;
            l2 = l2->next;
        }
        if(carry > 0) 
        {
            tail ->next = new ListNode(carry);
            tail = tail->next;
        }
        return head;
    }