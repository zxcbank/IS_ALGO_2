//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int* a = new int[n];
//
//    for(int i = 0; i < n; i++)
//        cin >> a[i];
//
//    for (int i = 1; i < n; i++){
//      int j = i - 1;
//
//      while (j >= 0 && a[j] > a[j+1]){
//        a[j]--;
//        a[j + 1]++;
//        swap(a[j],a[j+1]);
//
//        if(a[j]>a[j+1]){
//          cout << ":(";
//          return 0;
//        }
//        j--;
//      }
//    }
//
//    for (int i = 0; i < n; i++)
//      cout << a[i] << " ";
//    return 0;
//}