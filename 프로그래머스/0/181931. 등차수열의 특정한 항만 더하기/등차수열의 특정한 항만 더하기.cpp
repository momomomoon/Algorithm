#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int sum = 0;
    int index[101];
   
    
    for(int i = 0; i < included.size(); i++) // 1 < 5
    {
        if(i == 0) // 0 index0 3
        {
            index[0] = a;
        }
        else
        {
           index[i] = index[i-1] + d; 
        }  
        
        if(included[i] == true)
        {
            sum += index[i];
        }
    }
    
    
    return sum;
}