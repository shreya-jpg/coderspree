#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int first=0, second=1, next;
    cout<<first<<endl<<second<<endl;
    for(int i=2; i<n; i++){
        next = first + second;
        cout<<next<<endl;
        first=second;
        second=next;
    }
    
}
