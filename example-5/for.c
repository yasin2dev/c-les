#include <stdio.h>

void inptri(int *m);
void inpsqr(int *m);

int main() {
    int m;
    char o;
    printf("Please enter operation: ");
    scanf("%c", &o);
    printf("Please enter rows: ");
    scanf("%d", &m);

    switch (o)
    {
    case 't':
        inptri(&m);
        break;
    case 's':
        inpsqr(&m);
        break;
    default:
        printf("Incorrect operation.");
        break;
    }
    return 0;
}

void inptri(int *m) {
    int i, j;
    for (j = -1; j < *m; j++) {
        for (i = -1; i < j; i++) {
            printf("* ");
        }
        printf("\n");
    }
}

void inpsqr(int *m) {
    int i, j;
    for (j = 0; j < *m; j++) {
        for (i = 0; i < *m; i++) {
            printf("* ");
        }
        printf("\n");
    }
}