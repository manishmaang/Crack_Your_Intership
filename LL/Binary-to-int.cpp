//QUESTION => Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
// Return the decimal value of the number in the linked list.
// The most significant bit is at the head of the linked list.

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 int getDecimalValue(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        while(temp)
        {
            st.push(temp->val);
            temp = temp->next;
        }
        long long int product = 1;
        int binary = st.top();
        st.pop();
        int sum = product *binary;
        while(!st.empty())
        {
            int binary = st.top();
            st.pop();
            product = 2*product;
            sum = sum + product*binary;
        }
        return sum;
    }