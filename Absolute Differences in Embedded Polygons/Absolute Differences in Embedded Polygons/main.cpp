#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <cmath>
using namespace std;

int main(){
    int power, power2;
    cout << "For your 2^n polygon, what power of n do you wish to test?" << endl;
    cin >> power;
    
   power2 = pow(2,power);
    
    
    srand(time(0));
    int datahold [power2];
    int hold [power2];
    
    for (int count = 0; count < power2; count++)
    {
        datahold[count] = rand() % 1000000 + power2;
        cout << "[" << datahold [count] << "] ";
        
    }
    cout << endl;
    
   int temp = 0;
    
    for(int i=0;i<power2;i++)
    {
        if(datahold[i]>temp)
            temp=datahold[i];
    }
    
    for (int finalCount = 0; finalCount < temp; finalCount++) {
    
        
        for (int count2 = 0; count2 < power2 - 1;)
    {
        int val1 = datahold[count2];
        count2 = count2 + 1;
        int val2 = datahold[count2];
        int val3 = val1 - val2;
        hold [count2-1] = abs(val3);
        
        
    }
        
        
    
    hold[power2-1] = abs(datahold[0]-datahold[power2-1]);
        
        for (int count6 = 0; count6 < power2; count6++)
        {
            datahold[count6] = hold[count6];
            
        }
        
    }
    
    for (int count3 = 0; count3 < power2; count3++)
        
    {
        
        cout << "[" << datahold[count3] << "] ";
        
    }
    
    cout << endl;

    /*for (int count3 = 0; count3 < power2; count3++)
        
    {
        
        cout << "[" << hold[count3] << "] ";
        
        
    }*/
    
    
    
    return 0;
}