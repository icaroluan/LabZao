#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>

using namespace std;

int main() {
  int n, m;
  map <int, int> pos;

  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++) {
    int v;
    scanf("%d", &v);
    pos[v] = i;
  }

  int result = 0;
  int now = 0;

  for (int i = 0; i < m; i++) {
    int next;
    scanf("%d", &next);
    int target = pos[next];
    result += abs(now - target);
    now = target;
  }

  printf("%d\n", result);

  return 0;
}
