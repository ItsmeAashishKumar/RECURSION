int length(Node *head)
{
    // Write your code here
    if (head == NULL)
        return 0;
    else
        return 1 + length(head->next);
}
Node *appendLastNToFirst(Node *head, int n)
{
    // Write your code here
    int len = length(head);
    if (n < len && n != 0)
    {
        int skip = len - n;
        Node *current = head;
        Node *prev = NULL;
        while (skip)
        {
            prev = current;
            current = current->next;
            skip--;
        }
        prev->next = NULL;
        Node *temp = current;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = head;
        head = temp;
    }
    return head;
}