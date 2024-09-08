#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int americano = 5500;
    int result = 0;
    
    if(money >= americano)
    {
        result = money / americano;
        answer.push_back(result);
    }
    else
    {
        answer.push_back(result);
    }
    result = money % americano;
    answer.push_back(result);
    
    return answer;
}