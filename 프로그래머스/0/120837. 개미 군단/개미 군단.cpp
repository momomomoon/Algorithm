#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int res = hp;
    
    answer = hp;
    
    res = hp / 5;
    answer = answer % 5;
    res += answer / 3;
    answer = answer % 3;
    res += answer / 1;
    answer = answer % 1;
    
    
    
    
    
    
    return answer = res;
}