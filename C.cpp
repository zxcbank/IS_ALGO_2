//#include <iostream>
//typedef long long ll;
//using namespace std;
//
//void quicksort(ll arr[],ll l,ll r)
//{
//  if (l>r)
//    return;
//  ll q=arr[l+((r-l)/2)];
//  ll i=l;
//  ll j=r;
//  while (i<=j)
//  {
//    while(arr[i]>q)
//      i++;
//    while(arr[j]<q)
//      j--;
//    if (i<=j)
//    {
//      swap( arr[i++], arr[j--]);
//    }
//  }
//  quicksort(arr, l, j);
//  quicksort(arr, i, r);
//}
//
//
//
///*
//int main(void)
//{
//  ll n, *a, *b, i = 0, j = 0, c = 0;
//  cin >> n;
//  a = new ll[n];
//  b = new ll[n];
//
//  for (i = 0;i < n; i++)
//    cin >> a[i];
//
//  quicksort(a,0,n-1);
//  for (i = 0; i < n - 1; i++)
//  {
//    if (a[i] == a[i + 1])
//    {
//      b[j++] = a[i++];
//    } else if ((a[i] - 1 == a[i + 1]))
//    {
//      b[j++] = a[i++] - 1;
//    }
//  }
//
//  for (i = 0; i < j; i++)
//    c += b[i] * b[++i];
//  cout << c;
//}*/
