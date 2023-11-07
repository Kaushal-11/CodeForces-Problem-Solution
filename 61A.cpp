#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char a[101], b[101];
    for (scanf("%s%s", a, b); a[i]; i++)
    {
        putchar((a[i] ^ b[i]) + 48);
    }
    return 0;
}