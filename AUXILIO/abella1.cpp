#include <iostream>
#include <cstdio>
#include <cstdlib>

#define MAXN 45000

using namespace std;

int num[MAXN];

int bsearch(int val, int n) {
  int l = 0, r = n-1;
  while (l < r) {
    int m = (l+r)/2;
    if (num[m] < val) l = m+1;
    else r = m;
  }
  return l;
}

int main() {
  int n, m;

  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }

  int result = 0;
  int pos = 0;

  for (int i = 0; i < m; i++) {
    int v;
    scanf("%d", &v);
    int target = bsearch(v, n);
    result += abs(pos - target);
    pos = target;
  }

  printf("%d\n", result);

  return 0;
}
