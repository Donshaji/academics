#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

vector<int> generateArrayWithoutRandom(int n) {
    vector<int> result;
    
    srand(time(nullptr));  
    int randomNum = rand() % n + 1;
    
    for (int i = 1; i <= n; ++i) {
        if (i != randomNum) {
            result.push_back(i);
        }
    }
    return result;
}

int findMissingEl(vector<int> array,int n){
    int sum=0,Rsum=0;
    for(int i=0;i<=n;i++)
        Rsum=Rsum+i;
    for (int temp:array)
        sum=sum+temp;
        
    return Rsum-sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> output = generateArrayWithoutRandom(n);
    
    cout << "Output array: ";
    for (int num : output) {
        cout << num << " ";
    }
    cout<<"\n"<<findMissingEl(output,n);
    return 0;
}
