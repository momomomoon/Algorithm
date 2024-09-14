#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    // a 97 ~ z 112
    // A 65 ~ Z 90
    
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] >= 'a' && my_string[i] <= 'z')
        {
           my_string[i] = toupper(my_string[i]);
            
        }
        else if(my_string[i] >= 'A' && my_string[i] <= 'Z')
        {
            my_string[i] = tolower(my_string[i]);
        }
    }
    answer = my_string;
    return answer;
}