
    do
    {

        printf("Data %d = %d\n", n++, current->data);

        current = current->next;
    } while (current != head);
}