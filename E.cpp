#include <iostream>
typedef long long ll;

using namespace std;
void merge( ll *a, ll l, ll mid, ll r);
static ll answer = 0;
void prll_arr(ll *a, ll n);

void merge_sort(ll *a, ll l, ll r){
  if (l >= r)
    return;
  else{
    ll mid = l + (r-l)/2;
    merge_sort(a, l, mid);
    merge_sort(a, mid+1, r);
    merge(a, l, mid, r);
  }
}

void merge( ll *a, ll l, ll mid, ll r){
  ll llen = mid - l + 1, rlen = r - mid, l1 = 0, r1 = 0;
  ll *left = new ll[llen], *right = new ll[rlen];

  for (ll i = 0; i < llen; i++){
    left[i] = a[l + i];
  }
  for (ll i = 0; i < rlen; i++){
    right[i] = a[mid + i + 1];
  }
  ll x = l;
  while (r1 < rlen && l1 < llen){
    if (right[r1] < left[l1]){
      answer += (mid - l + 1 - l1);
      a[x] = right[r1];
      r1++;
    }
    else{
      a[x] = left[l1];
      l1++;
    }
    x++;
  }

  while (r1 < rlen){
    a[x] = right[r1];
    r1++;
    x++;
  }
  while (l1 < llen){
    a[x] = left[l1];
    l1++;
    x++;
  }
  delete [] left;
  delete [] right;
}

void prll_arr(ll *a, ll n){
  for (ll i = 0; i < n; i++)
    cout << " " << a[i] << " ";
  cout << "\n";
}

int main( void ){
  ll n;
  cin >>n;
  ll *a = new ll[n];
  for (ll i =  0; i < n; i++)
    cin >> a[i];
  merge_sort(a, 0, n-1);
  cout << answer;

  return 0;
}
