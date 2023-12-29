#include<iostream>
using namespace std;
#include<string>

int main(){

    int t; 
    cin>>t;
    for(int i=0;i<t;i++){
        int K;
    cin >> K;
    string check; 
    cin >>check;
    int count0=0, count1=1;
    
    
  char  ch1= '1' ; char ch2= '0';
    for(int i = 1; i < K; i++)
    {
        if(ch1!= check[i - 1]){
            ch1 = '1';
            count1++;
        }
        else{
            ch1 = '0';
        }
    }
    for(int i = 1; i < K; i++)
    {
        if(ch2 != check[i - 1]){
            ch2 = '1';
            count0++;
        }
        else{
            ch2 = '0';
        }
    }
          cout << max(count0 ,count1) << endl;
        }
        
        
    
    return 0;
}