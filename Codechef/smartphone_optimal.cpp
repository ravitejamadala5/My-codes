# include <bits/stdc++.h>
# include <iostream>
using namespace std;

int main(){
  long long int n;
  cin >> n;
  long long int a[n];
  long long int total_max = 0 ;

  for (long long int i = 0 ; i < n; i++){
    cin >> a[i];
  }

  sort(a, a+n);
  long long int max = 0;
  for (long long int i = 0; i < n; i++) {
    max = a[i]*(n-i);
    if(max >= total_max){
      total_max = max;
    }
  }
  cout << total_max;
  return 0;
}
