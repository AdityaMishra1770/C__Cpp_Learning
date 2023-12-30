#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void multi(int n)
{
    if (n < 10000)
    {
        multi(n * 10);
        printf("\n%d", n);
    }
    printf("\n%d", n);
}
int main(int argc, char const *argv[])
{
    multi(10);
    return 0;
}

/* Program : -1

          Objective : Write a program to perform arithmetic operations.Program : -
C Program to Perform Arithmetic Operations on Matrix
#include <stdio.h>
int main()
{
    int i, j, rows, columns, a[10][10], b[10][10];

    int Addition[10][10], Subtraction[10][10], Multiplication[10][10], Module[10][10];
    float Division[10][10];
    printf("\nPlease Enter Number of rows and columns\n");
    scanf("%d %d", &i, &j);
    printf("\nPlease Enter the First Array Elements\n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    printf("\nPlease Enter the Second Array Elements\n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &b[rows][columns]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            Addition[rows][columns] = a[rows][columns] + b[rows][columns];
            Subtraction[rows][columns] = a[rows][columns] - b[rows][columns];
            Multiplication[rows][columns] = a[rows][columns] * b[rows][columns];
            Division[rows][columns] = a[rows][columns] / b[rows][columns];
            Module[rows][columns] = a[rows][columns] % b[rows][columns];
        }
    }

    printf("\nAdd\t Sub\t Multi\t Div\t Mod");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            printf("\n%d \t ", Addition[rows][columns]);
            printf("%d \t ", Subtraction[rows][columns]);
            printf("%d \t ", Multiplication[rows][columns]);
            printf("%.2f \t ", Division[rows][columns]);
            printf("%d \t ", Module[rows][columns]);
        }
    }

    return 0;
}

// Program : -2 Objective : Write a program to transpose a 2D array Program : -
// C Program to find
// transpose of a matrix
#include <stdio.h>
#define N 4

// This function stores transpose of A[][] in B[][]
void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}
int main()
{
    int A[N][N] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};

    int B[N][N], i, j;
    transpose(A, B);
    printf("Current matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    return 0;
}


// Program : -3
//   Objective : Write a program array implementation of stack. Program : -

// C program for array implementation of stack #include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return -32768;
    return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return -32768;
    return stack->array[stack->top];
}

// Driver program to test above functions
int main()
{
    struct Stack *stack = createStack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));

    return 0;
}

#include <stdio.h>
#define SIZE 5
// Basic value initialisation
int queue[SIZE], front = -1, rear = -1;
// Function created to handle enqueue
void enqueue(int item)
{
    if (rear == SIZE - 1)
    {
        printf("Can't enqueue as the queue is full\n");
    }
    else
    {
        // The first element condition
        if (front == -1)
        {
            front = 0;
        }
        rear = rear + 1;
        queue[rear] = item;
        printf("We have enqueued %d\n", item);
    }
}
// Function created to handle dequeue
void dequeue()
{
    if (front == -1)
    {
        printf("Can't dequeue as the queue is empty\n");
    }
    else
    {
        printf("We have dequeued : %d\n", queue[front]);
        front = front + 1;
        // Only happens when the last element was dequeued
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}
// function to print the queue
void printQueue()
{
    if (rear == -1)
        printf("\nUnable to display as queue is empty");
    else
    {
        int i;
        printf("\nThe queue after enqueue & dequeue ops looks like :");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}
int main()
{
    // enqueue begins here
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    // dequeue beings here
    dequeue();
    dequeue();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
void display();
void insert(int item);
int del();
int peek();
int isEmpty();
int isFull();
int main()
{
    int choice, item;
    while (1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInput the element for insertion : ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            printf("\nElement deleted is : %d\n", del());
            break;
        case 3:
            printf("\nElement at the front is : %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\nWrong choice\n");
        }
    }
    return 0;
} // End of main()

void insert(int item)
{
    if (isFull())
    {
        printf("\nQueue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    if (rear == MAX - 1) // rear is at last position of queue
        rear = 0;
    else
        rear = rear + 1;
    cqueue_arr[rear] = item;
} // End of insert()
int del()
{
    int item;
    if (isEmpty())
    {
        printf("\nQueue Underflow\n");
        exit(1);
    }
    item = cqueue_arr[front];
    if (front == rear) // queue has only one element
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
        front = 0;
    else
        front = front + 1;
    return item;
} // End of del()
int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
} // End of isEmpty()
int isFull()
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
        return 1;
    else
        return 0;
} // End of isFull()
int peek()
{
    if (isEmpty())
    {
        printf("\nQueue Underflow\n");
        exit(1);
    }
    return cqueue_arr[front];
} // End of peek()
void display()
{
    int i;
    if (isEmpty())
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nQueue elements :\n");
    i = front;
    if (front <= rear)
    {
        while (i <= rear)
        {
            printf("%d ", cqueue_arr[i++]);
        }
    }
    else
    {
        printf("%d ", cqueue_arr[i++]);
        while (i <= MAX - 1)
            printf("%d ", cqueue_arr[i++]);
        i = 0;
        while (i <= rear)
            printf("%d ", cqueue_arr[i++]);
    }
    printf("\n");
} // End of display()

#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void main()
{
    int choice = 0;
    printf("\n*********Stack operations using linked list*********\n");
    printf("\n \n");
    while (choice != 4)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exiting... ");
            break;
        }
        default:
        {
            printf("Please Enter valid choice ");
        }
        };
    }
}
void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter the value");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("Item pushed");
    }
}
void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped");
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->val);
            ptr = ptr->next;
        }
    }
}*/