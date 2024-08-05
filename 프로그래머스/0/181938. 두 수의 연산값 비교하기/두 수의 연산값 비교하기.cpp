#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string index0 = to_string(a) + to_string(b);\
    int index1 = stoi(index0);
    int index2 =  2 * a * b;
   
    if(index1 >= index2)
    {
        answer = index1;
    }
    else
    {
        answer = index2;
    }
    
    
    return answer;
}