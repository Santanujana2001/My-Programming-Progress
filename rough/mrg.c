#include <stdio.h>
int a[5] = {3, 5, 1, 4, 2};
int b[5];
void merge(int l, int m, int u)
{
    int i, k, j;
    i = l;
    k = l;
    j = m + 1;
    while (i <= m && j <= u)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    if (j > u)
    {
        while (i <= m)
        {
            b[k++] = a[i++];
        }
    }
    else
    {
        while (j <= u)
        {
            b[k++] = a[j++];
        }
    }
    for (int i = l; i <= u; i++)
    {
        a[i] = b[i];
    }
}
void merge_sort(int l, int u)
{
    if (l < u)
    {

        int m = (l + u) / 2;
        merge_sort(l, m);
        merge_sort(m + 1, u);
        merge(l, m, u);
    }
}
void main()
{
    int n;
    merge_sort(0, 4);
    printf("elements after sorting\n");
    for (int i = 0; i <= 4; i++)
    {

        printf("%d ", a[i]);
    }
}