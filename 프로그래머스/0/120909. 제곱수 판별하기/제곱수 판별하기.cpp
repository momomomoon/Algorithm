#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int size = n;
    for(int i = 1; i < size; i++ )
    {
        if(i * i == n)
        {
            answer = 1;
            break;
        }
        else
        {
            answer = 2;
        }
    }
    return answer;
}