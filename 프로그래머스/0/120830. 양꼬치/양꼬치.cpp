#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int result_01 = n * 12000;
    int result_02 = k * 2000;
    
    if(n >= 10)
    {
        answer = n / 10;
    }
    
    answer = result_01 + result_02 - (answer * 2000);
    
    
    return answer;
}