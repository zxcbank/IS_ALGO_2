//#include <iostream>
//
//using namespace std;
//
//struct film {
//  int rate;
//  int index;
//};
//
//int partition (film *a, int l, int r){
//  int q = a[l + (r-l)/3].rate;
//  int i = l, j = r;
//
//  while (i < j){
//    while (a[i].rate < q){i++;}
//
//    while (a[j].rate > q){j--;}
//    if (i >= j)
//      break;
//    swap(a[i], a[j]);
//  }
//  return j;
//}
//
//void quicksort(film *a, int l, int r){
//  if (l < r){
//    int q;
//    q = partition(a, l, r);
//    quicksort(a, l, q);
//    quicksort(a, q + 1, r);
//  }
//}
//
//int main (){
//  long long n, m , k;
//
//  cin >> n >> m >> k;
//
//  long long* auth = new long long[n];
//  film* top = new film[m];
//
//  for (long long i = 0; i < n; i++)
//    cin >> auth[i];
//
//  for (long long i = 0; i < m; i++){
//    long long rate_tmp = 0;
//    long long c;
//
//
//    for (long long j = 0; j < n; j++){
//      cin >> c;
//      rate_tmp = (rate_tmp + c * auth[j])%1000000007;
//    }
//    top[i].rate = rate_tmp;
//    top[i].index = i;
//  }
//
//  quicksort(top, 0, m-1);
//  for (int i = 0; i < k; i++)
//    cout << top[m - 1 - i].index + 1 << " ";
//}