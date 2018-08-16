# include <bits/stdc++.h>
# include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i = 0; i< n; i++){
    char a[3], b[3];
    for(int i = 0; i < 3 ; i++){
      cin >> a[i];
    }
    for(int i = 0; i < 3 ; i++){
      cin >> b[i];
    }

    int count_b = 0;
    int count_o = 0;
    int count_c = 0;

    for(int i = 0; i < 3; i++){
      if((a[i] == 'b' && b[i] == 'o') || (a[i] == 'o' && b[i] == 'b')){
        count_c++;
      }
      else if(a[i] == 'b' || b[i] == 'b'){
        count_b++;
      }
      else if(a[i] == 'o' || b[i] == 'o'){
        count_o++;
      }
    }

    if(count_c >= 3){
      cout << "yes" << endl;
    }
    else if(count_b ==1 && count_c == 2){
        cout << "yes" << endl;
    }
    else if(count_o ==1 && count_c == 2){
        cout << "yes" << endl;
    }
    else if(count_b ==2 && count_c == 1){
        cout << "yes" << endl;
    }
    else if(count_b ==2 && count_o == 1){
        cout << "yes" << endl;
    }
    else if(count_b ==1 && count_o == 1 && count_c == 1){
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
  }
}
