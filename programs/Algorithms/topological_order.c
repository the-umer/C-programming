#include <stdio.h> 
#include<stdlib.h>
int a[10][10], n, indegre[10];
void find_indegre()
{
    int j, i, sum;
    for (j = 0; j < n; j++)
    {
        sum = 0;
        for (i = 0; i < n; i++)
            sum += a[i][j];
        indegre[j] = sum;
    }
}
void topology()
{
    int i, u, v, t[10], s[10], top = -1, k = 0;
    find_indegre();
    for (i = 0; i < n; i++)
    {
        if (indegre[i] == 0)
            s[++top] = i;
    }
    while (top != -1)
    {
        u = s[top--];
        t[k++] = u;
        for (v = 0; v < n; v++)
        {
            if (a[u][v] == 1)
            {
                indegre[v]--;
                if (indegre[v] == 0)
                    s[++top] = v;
            }
        }
    }
    printf("The topological Sequence is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", t[i]);
        printf("\n");
}
int main()
{
    int i, j;
    
    printf("Enter number of jobs:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    topology();
    printf("\n");
    return 0;
    
}
