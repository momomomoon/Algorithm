#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    if(angle > 0 && 90 > angle)
    {
        answer = 1;
    }
    else if(angle == 90)
    {
        answer = 2;
    }
    else if(angle > 90 && 180 > angle)
    {
        answer = 3;
    }
    else if(angle == 180)
    {
        answer = 4;
    }
    return answer;
}