#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(int i = n; i != 0; i--)
    {
        answer.push_back(my_string[my_string.size() - i]);
    }
    
    return answer;
}