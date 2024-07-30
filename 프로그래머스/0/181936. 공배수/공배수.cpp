#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    int num = n * m;
    
    if(number % n == 0 && number % m == 0)
    {
        answer = 1;
    }
    
    
    return answer;
}