#include <string>
#include <vector>

using namespace std;

long long solution(int n, int t) {
    int answer = 0;
    
    for(int i = 2; t != 0; t--)
    {
        n = n * i;
    }
    answer = n;
    
    return answer;
}