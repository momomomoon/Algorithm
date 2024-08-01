#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    
    if(ineq == ">")
    {
        if(eq == "=")
        {
            answer = n >= m ? true : false;
        }
        else
        {
            answer = n > m ? true : false;
        }
    }
    else if(ineq == "<")
    {
        if(eq == "=")
        {
            answer = n <= m ? true : false;
        }
        else
        {
            answer = n < m ? true : false;
        }
    }

    
    return answer;
}