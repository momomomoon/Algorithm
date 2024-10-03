#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int box1 = 0, box2 = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {   
        if(i % 2 != 0)
        {
            box1 += num_list[i];
        }
        else
        {
            box2 += num_list[i];
        }
    }
    
    answer = box1 > box2 ? box1 : box2;
    
    return answer;
}