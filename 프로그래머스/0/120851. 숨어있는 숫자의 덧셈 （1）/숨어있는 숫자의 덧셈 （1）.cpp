#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i = 0; i < my_string.size(); i++)
    {
       if(my_string[i] >= '0' && my_string[i] <= '9') // 48보다 크거나 같고 57보다 작거나 같다.
       {

           answer += my_string[i] - '0'; // 49 - 48 = 1 ~ 57 - 48 = 9
       }
    }
   
    return answer;
}