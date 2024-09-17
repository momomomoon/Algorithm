#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int num1 = 0, num2 = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        
        if(num_list[i] % 2 == 0)
        {
            num1 += 1;
        }
        else if(num_list[i % 2 != 0])
        {
            num2 += 1;
        }
    }
    answer.push_back(num1);
    answer.push_back(num2);
    return answer;
}