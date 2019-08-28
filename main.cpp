#include <iostream>

using namespace std;
int n=0, x=0, y=0, z=0;
int cx=0;
int cy=0;
int cz=0;
int main()
{
        cin>>n;
    while(n--){
        cin>>x;
        cin>>y;
        cin>>z;
        cx += x;
        cy += y;
        cz += z;
    }
    if(cx==0 && cy==0 && cz==0){
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}
