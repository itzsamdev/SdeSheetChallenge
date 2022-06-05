#include <bits/stdc++.h>
using namespace std;

LinkedListNode<int> *reverseLL(LinkedListNode<int> *head)
{
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *next;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head)
{

    if (!head || !head->next)
    { // very base case
        return true;
    }
    if (!head->next->next)
    { // length = 2 case
        return (head->data == head->next->data);
    }

    LinkedListNode<int> *dummy = new LinkedListNode<int>(-1);
    dummy->next = head;
    LinkedListNode<int> *slow = dummy; // normal slow n fast pointers
    LinkedListNode<int> *fast = head;

    // Get the middle
    while (fast && fast->next)
    {                            // slow-fast pointer method to find :
        slow = slow->next;       // even length -> mid
        fast = fast->next->next; // odd length -> node b4 mid
    }

    //                                      even case        odd case
    LinkedListNode<int> *secondHead = (fast == NULL) ? slow->next : slow->next->next; // head of 2nd part
    slow->next = NULL;                                                                // separate the 1st list (put NUll at end of 1st part)

    // Reverse the 2nd part
    LinkedListNode<int> *first = head;                   // head of 1st part
    LinkedListNode<int> *second = reverseLL(secondHead); // will reverse at return end node as it is the secondHead now

    while (first && second)
    { // simple
        if (first->data != second->data)
        {
            return false;
        }
        first = first->next; // simple logic
        second = second->next;
    }

    return true;
}