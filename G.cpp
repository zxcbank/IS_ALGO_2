//#include <iostream>
//
//using namespace std;
//
//struct film {
//  long long time;
//  long long dead;
//};
//
//long long partition (film *a, long long l, long long r){
//  long long q = a[(l+r)/2].time;
//  long long i = l, j = r;
//
//  while (i <= j){
//    while (a[i].time < q){i++;}
//
//    while (a[j].time > q){j--;}
//    if (i >= j)
//      break;
//    swap(a[i++], a[j--]);
//  }
//  return j;
//}
//
//void quicksort(film *a, long long l, long long r){
//  if (l < r){
//    long long q;
//    q = partition(a, l, r);
//    quicksort(a, l, q);
//    quicksort(a, q + 1, r);
//  }
//}
//
//int main (){
//  long long n;
//  cin >> n;
//  film* a = new film[n];
//
//  for (long long i = 0; i < n; i++)
//    cin >> a[i].time >> a[i].dead;
//
//  quicksort(a, 0, n - 1);
//  long long k = 0, sum = 0;
//
//  for (long long i = 0; i < n; i++){
//    k += a[i].time;
//    sum += (a[i].dead - k);
//  }
//  cout << sum;
//
//
//}