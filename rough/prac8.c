#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void Insertion();
void Deletion();
void Display();
int queue[5], f = -1, r = -1;
void main()
{
	int ch;
	while (1)
	{
		printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &ch);
		switch (ch)
		{

		case 1:
			Insertion();
			break;

		case 2:
			Deletion();
			break;

		case 3:
			Display();
			break;

		case 4:
			exit(0);
			break;
		default:
			printf("Wrong Choice");
		}
	}
}
void Insertion()
{
	int item;
	if ((f == 0 && r == MAX - 1) || (f == r + 1))
		printf("circular Queue is full");

	else
	{
		printf("Enter the element : ");
		scanf("%d", &item);
		if (f == -1)
		{

			f = 0, r = 0;
		}

		else if (r == MAX - 1)
		{
			r = 0;
		}
		else
		{
			r = r + 1;
		}
	}
	queue[r] = item;
}

void Deletion()
{
	int item;
	if (f == -1)
	{
		printf("circular Queue is empty");
	}
	else
	{
		item = queue[f];
		if (f == r)
		{
			f = -1;
			r = -1;
		}
		else
		{
			if (f == MAX - 1)
			{
				f = 0;
			}
			else
			{
				f = f + 1;
			}
			printf("Deleted item is : %d ",
				   item);
		}
	}
}
void Display()
{
	if (f == -1)
		printf("circular Queue is empty");
	else
	{
		if (f <= r)
		{
			printf("The queue is : ");
			for (int i = f; i <= r; i++)
			{
				printf("%d ", queue[i]);
			}
		}
		else
		{
			printf("The queue is : ");
			for (int i = f; i < MAX - 1; i++)
			{
				printf("%d ", queue[i]);
			}

			for (int i = 0; i <= r; i++)
			{
				printf("%d ", queue[i]);
			}
		}
	}
}
