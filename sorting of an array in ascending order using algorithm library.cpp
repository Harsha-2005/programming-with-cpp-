#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int array[]={123,56457,845646,4523552,242345,2,2345,465};
    sort(array,array+8);
    for(int i=0;i<8;i++){
        cout << array[i] <<" ";
        
    }
    return 0;
}