#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for(int idx = 0; idx < code.size(); idx++)
    {
        if(code[idx] == '1') {
            // 모드 변경
            mode = 1 - mode;
        }
        else if(mode == 0 && idx % 2 == 0) {
            // mode가 0이고 인덱스가 짝수일 때
            answer += code[idx];
        }
        else if(mode == 1 && idx % 2 != 0) {
            // mode가 1이고 인덱스가 홀수일 때
            answer += code[idx];
        }
    }
    
    if(answer == "") {
        answer = "EMPTY";
    }
    
    return answer;
}
