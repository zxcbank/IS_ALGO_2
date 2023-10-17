#include <iostream>

using namespace std;

void nth(int* a, int l, int  r, int k){
  int i = l, j = r, pivo = a[(l + r) / 2];

  while (i <= j){
    while (a[i] < pivo)
    { i++;}
    while (a[j] > pivo)
    {j--;}
    if (i <= j){
      int tmp = a[i];
      a[i++] = a[j];
      a[j--] = tmp;
    }
  }
  if (l < j && j >= k)
    nth(a, l, j, k);
  if (i < r && i < k)
    nth(a, i, r, k);
}

int main (){
  int A, B, C, n, k, ans = 0;
  cin >> n >> k;
  int* a = new int[n];

  cin >> A >> B >> C >> a[0] >> a[1];

  for (int i = 2; i < n; i++){
    a[i] = A * a[i - 2] + B * a[i - 1] + C;
  }
  nth(a, 0, n - 1, n-k);

  for (int i = n-k; i < n; i++)
    ans ^= a[i];
  cout << ans;

  return 0;
}
