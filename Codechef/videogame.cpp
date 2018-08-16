# include <bits/stdc++.h>
# include <iostream>
using namespace std;

int main(){
  long long int n;
  long long int h;
  cin >> n;
  cin >> h;
  long long int a[n];
  for(long long int i = 0; i < n; i++){
    cin >> a[i];
  }

  long long int x;
  long long int i = 0;
  int pick_flag = 0;
  while(true){
    cin >> x;
    if(x == 0){
      break;
    }
    if(x == 1 && i > 0){
      i--;
    }
    if(x == 2 && i < n-1){
      i++;
    }
    if(x == 3 && a[i] != 0 && pick_flag == 0){
      pick_flag = 1;
      a[i]--;
    }
    if(x == 4){
      if(a[i] < h && pick_flag == 1){
        a[i]++;
        pick_flag = false;
      }
    }
  }

  for(long long int i = 0 ; i < n ; i++){
    cout << a[i] << " ";
  }
  return 0;
}
