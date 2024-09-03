#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
        
    //정렬
    for(int i = 0; i < array.size(); i++) 
    {
        int temp = 0;
        
        //비교
        if(i != 0)
        {
            for(int j = 0; j < array.size(); j++)
            {
                if(array[i] > array[j])
                   {
                       temp = array[j];
                       array[j] = array[i];
                       array[i] = temp;
                      
                   }
            }
        }
    }
    answer = array[array.size() / 2];
  
    
    return answer;
}