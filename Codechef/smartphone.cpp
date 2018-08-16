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

  for (long long int i = 0; i < n; i++) {
    long long int value = a[i];
    long long max = 0;
    for (int j = 0; j < n; j++) {
      /* code */
      if(value <= a[j]){
        max = max + value;
      }
    }
    if(total_max <= max){
      total_max = max;
    }
  }
  cout << total_max;
}
