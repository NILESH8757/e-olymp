#include <iostream>

using namespace std;

int i, n, m[100001];

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &m[i]);

	//Двигаемся по массиву с начала и до середины. Проверяем условие выполнения кучи.
	//Если на какой - то итерации условие не выполняется, то выходим из цикла.
	for (i = 1; i <= n / 2; i++)
	{
		if (2 * i <= n && m[i] > m[2 * i]) break;
		if (2 * i + 1 <= n && m[i] > m[2 * i + 1]) break;
	}
	//В зависимости от значения переменой i выводим ответ.
	printf(i <= n / 2 ? "NO\n" : "YES\n");
	return 0;
}
