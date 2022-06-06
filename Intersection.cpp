#include <bits/stdc++.h>

int findIntersection(Node *firstHead, Node *secondHead)
{
    Node *first = firstHead;
    Node *second = secondHead;
    while (first != second)
    {
        if (first == NULL)
            first = secondHead;
        else
            first = first->next;
        if (second == NULL)
            second = firstHead;
        else
            second = second->next;
    }
    if (first == NULL)
        return -1;
    else
        return first->data;
}