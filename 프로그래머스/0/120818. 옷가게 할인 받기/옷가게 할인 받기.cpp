#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if(price >= 500000)
    {
        answer = price - (price * 0.20);
    }
    else if(price >= 300000)
    {
        answer = price - (price * 0.10);
    }
    else if(price >= 100000)
    {
        answer = price - price * 0.05;
    }
    else
    {
        answer = price;
    }
    
    return answer;
}