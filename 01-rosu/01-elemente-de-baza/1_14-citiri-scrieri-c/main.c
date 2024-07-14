#define _CRT_SECURE_NO_WARNINGS // doar pentru MSVC
#include <stdio.h>

int main()
{
	int a; unsigned long b; double x;
	scanf("%d %lf %lu", &a, &x, &b);
	printf("%d %lf %lu\n", a, x, b);

	char c1, c2, c3;
	scanf(" %c%c%c", &c1, &c2, &c3);
	printf("%c %c %c\n", c1, c2, c3);

	int t, u, v;
	scanf("%d=%d+%d", &t, &u, &v);
	printf("%d=%d*%d\n", u * v, u, v);

	int m, n;
	scanf("%d=%*d+%d", &m, &n);
	printf("m=%d, n=%d\n", m, n);

	// NU folosiți getch() sau getche() din conio.h, cum zice în carte.
	// Bine, nu folosiți C în general. :-)
	// Alternativa este getc(stdin), care este standard:

	char c4 = getc(stdin);
	printf("%c are codul ASCII %d\n", c4, c4);

	int a1 = -1, b1 = 0567, d1 = 0xf01a;
	char c5 = 'x';
	float f1 = 123.147, y = 0.00008;

	printf("a1=%d sau a=%u\n", a, a);
	printf("f1=%f sau\nf1=%e sau\nf1=%g\n", f1, f1, f1);
	printf("y=%f sau\ny=%e sau\ny=%g\n", y, y, y);

	printf("b1=%d sau b1=%o sau b1=%x\n", b1, b1, b1);
	printf("c5=%c sau c5=%d\n", c5, c5);
	printf("d1=%d sau d1=%x sau d1=%u\n", d1, d1, d1);
	printf("f1=%.2f\n", f1);
	printf("b1=%6dxb1=%-6dx\n", b1, b1);

	return 0;
}
