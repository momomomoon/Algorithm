#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for (int i = 1; i < numLog.size(); i++) {
        int diff = numLog[i] - numLog[i-1]; // 현재 값과 이전 값의 차이를 계산
        
        if (diff == 1) {
            answer += "w"; // 1 차이가 나면 'w' (1을 더함)
        } else if (diff == -1) {
            answer += "s"; // -1 차이가 나면 's' (1을 뺌)
        } else if (diff == 10) {
            answer += "d"; // 10 차이가 나면 'd' (10을 더함)
        } else if (diff == -10) {
            answer += "a"; // -10 차이가 나면 'a' (10을 뺌)
        }
    }
    
    return answer;
}
