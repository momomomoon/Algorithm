#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    string index01 = my_string; //He11oWor1d
    string index02 = overwrite_string; //lloWorl
    
    answer = index01.replace(s, index02.size(), index02);
    
    return answer; //HelloWorld
}

//str.replace(n, k, str2) - n번째 index부터 k개의 문자를 str2로 대체함

