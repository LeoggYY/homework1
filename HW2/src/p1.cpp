#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>

using namespace std;
long int  ak(int m, int n)
{
	if (m == 0) return n + 1;
	else if (n == 0) return ak(m - 1, 1);
	else return ak(m - 1, ak(m, n - 1));
}
int main()
{
	long int a, b;
	cin >> a >> b;
	cout  << ak(a, b);
}