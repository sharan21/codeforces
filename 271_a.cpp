#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    ++num;

    while(true){
        
        int a = num%10;
        int b = (num/10)%10;
        int c = (num/100)%10;
        int d = (num/1000)%10;
        
        if( a != b && a!= c && a != d && b != c && b != d && c != d){
            break;
        }
        else{
            num++;
            continue;
        }
    }
    cout << num;
}