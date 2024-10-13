#include <iostream>
using namespace std;

int main(){
    int n, q, i=0, m=1, t, l, r, x, sb, sch, dif;
    cin >> n >> q; //длина поля, колво операций
    int c=n;
    int a[c];//массив для колва фигурок в каждой бащне по отдельности
    
    while (i<=n) {
    cin >> a[i];
    i++;
    }
    while (m<=q) {
        m++;
        cin >> t >> l >> r;
        if (t!=3) cin >>x;
        if (t < 1 || t > 3 || l<0 || l>r || r>n) {
            break;
        }
        while(l<=r) {
            if(t==1) { 
                int d=l-1;
                a[d]=a[d]-(a[d]-x);
                
            }

            if (t==2){
                int d=l-1;
                a[d]=a[d]+x;
               
            }

            if (t==3){
                int k=l%2;
                int d=l-1;
                if (k==0) {
                    sb+=a[d];
                   
                } else {
                    sch+=a[d];
                   
                }

                dif=sb-sch;
                cout << dif;
            }

        ++l;
        }
        
    }
return 0;
}