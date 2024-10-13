#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, i=0;
    cin >> n;
    int array[n];
    while (i<=n) {
    cin >> array[i];
    i++;}
    //vector <int> massiv;
    //for (int i = 0; i < n; i++) {
      //      massiv.push_back(array[i]);
 //   }
    int max = array[0];
        for(int i = 0; i < 5; ++i)
        {
            if(array[i] > max)
            {
                max = array[i];
            }
        }

    
}
