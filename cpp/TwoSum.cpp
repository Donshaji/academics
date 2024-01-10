#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> array={0,0,1,1,2};
    int i=0,n,f,l;
    n=array.size();
    f=0;
    l=n-1;
    while(f<l){
        if((array[f]+array[l])==0){
            printf("True");
            break;
        }
        else{
            if((array[f]+array[l])>0){
                l=l-1;
            }
            if((array[f]+array[l])<0){
                f=f+1;
            }
        }
    }
    return 0;
}
