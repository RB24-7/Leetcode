
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

    if (list1 == nullptr)
    {
        return list2;
    }

    if (list2 == nullptr)
    {
        return list1;
    }

    ListNode *head = nullptr;

    if (list1->val < list2->val)
    {
        head = list1;
        list1 = list1->next;

    } else {

        head = list2;
        list2 = list2->next;
    }

    ListNode *current = head;

    while(list1 && list2)
    {
        if (list1->val < list2->val)
        {
            current->next = list1;
            list1 = list1->next;

        } else {
            
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (!list1)
    {
        current->next = list2;
    }
    else
    {
        current->next = list1;
    }

    return head;
}