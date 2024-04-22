#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, k;
    int x = 0;
    char a[10][10];
    int n, num[10], b[10][10];
    printf("Enter the no. of physical clocks: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nNo. of nodes for physical clock %d: ", i + 1);
        scanf("%d", &num[i]);
        x = 0;
        for (j = 0; j < num[i]; j++)
        {
            printf("\nEnter the name of process: ");
            scanf("%s", &a[i][j]);
            b[i][j] = x + rand() % 10;
            x = b[i][j] + 1;
        }
    }
    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Physical Clock %d", i + 1);
        for (j = 0; j < num[i]; j++)
        {
            printf("\nProcess %c", a[i][j]);
            printf(" has P.T. : %d ", b[i][j]);
        }
        printf("\n\n");
    }
    x = 0;
    for (i = 0; i < 10; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < num[j]; k++)
                if (b[j][k] == i)
                {
                    x = rand() % 10 + x;
                    printf("\nLogical Clock Timestamp for process %c", a[j][k]);
                    printf(" : %d ", x);
                    printf("\n");
                }
    return 0;
}

/*
Enter the no. of physical clocks: 3

No. of nodes for physical clock 1: 2

Enter the name of process: a

Enter the name of process: b

No. of nodes for physical clock 2: 2

Enter the name of process: c

Enter the name of process: d

No. of nodes for physical clock 3: 2

Enter the name of process: e

Enter the name of process: f


Physical Clock 1
Process a has P.T. : 1
Process b has P.T. : 9

Physical Clock 2
Process c has P.T. : 4
Process d has P.T. : 5

Physical Clock 3
Process e has P.T. : 9
Process f has P.T. : 14


Logical Clock Timestamp for process a : 8

Logical Clock Timestamp for process c : 16

Logical Clock Timestamp for process d : 18

Logical Clock Timestamp for process b : 22

Logical Clock Timestamp for process e : 27

*/