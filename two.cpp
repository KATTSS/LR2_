#include <iostream>
#include <cmath>


int main (){
    long long s, p1, p2,v,  v2,f, n;
    long long m=0, m2=0;
    std::cin >> s >> p1 >> p2 >> f >> v;
    n=2*s*f-v;
    if (2*s*f<=v) std::cout <<"0";
    else if (2*s*f>v) {
        if (p1<=p2) {v2=2*s*f-v;
        m=v2*p1;
        }
        else {
            if (2*s*f-v<s*f) {
                v2=s*f-v;
                m=v2*p1;
                m2=s*f*p2;
                m+=m2; 
            }
            else if(2*s*f-v>s*f) {
                v2=2*s*f-v;
                m=p2*v2;
               
            }
            else if (n=s*f) {
                m=s*f*p2;
            }
        }
         std::cout <<m;
        }

    
    return 0;
}