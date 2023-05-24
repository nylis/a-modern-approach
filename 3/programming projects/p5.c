#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p,
    row1, row2, row3, row4, col1, col2, col3, col4, dia1, dia2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
    &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
    a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);

    row1 = a + e + i + m;
    row2 = b + f + j + n;
    row3 = c + g + k + o;
    row4 = d + h + l + p;

    col1 = a + b + c + d;
    col2 = e + f + g + h;
    col3 = i + j + k + l;
    col4 = m + n + o + p;

    dia1 = a + f + k + p;
    dia2 = d + g + j + m;

    printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d", dia1, dia2);

    return 0;
}