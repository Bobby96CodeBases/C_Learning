#include <stdio.h>

int main() {
    int n, a[20][20], indeg[20], stack[20], top = -1, order[20];
    int i, j, k = 0, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (j = 0; j < n; j++) {
        indeg[j] = 0;
        for (i = 0; i < n; i++)
            indeg[j] += a[i][j];
    }

    for (i = 0; i < n; i++)
        if (indeg[i] == 0)
            stack[++top] = i;

    while (top != -1) {
        v = stack[top--];
        order[k++] = v;

        for (i = 0; i < n; i++) {
            if (a[v][i] == 1) {
                indeg[i]--;
                if (indeg[i] == 0)
                    stack[++top] = i;
            }
        }
    }

    if (k != n) {
        printf("Topological ordering not possible\n");
    } else {
        printf("Topological order:\n");
        for (i = 0; i < n; i++)
            printf("%d ", order[i]);
    }

    return 0;
}
