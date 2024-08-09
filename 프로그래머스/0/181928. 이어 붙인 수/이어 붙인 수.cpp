#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, sum = 0;
    string x, y;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i] % 2 == 0)
        {
            x += to_string(num_list[i]);
        }
        else
            y += to_string(num_list[i]);
    }
    
    answer = stoi(x) + stoi(y);
    
    
    return answer;
}