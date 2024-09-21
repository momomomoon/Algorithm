#include <string>
#include <vector>

using namespace std;

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    // sides의 길이는 항상 3개라고 가정
    sort(sides.begin(), sides.end()); // 정렬하여 가장 긴 변을 쉽게 찾음

    // 가장 긴 변과 나머지 두 변의 합 비교
    if (sides[2] < sides[0] + sides[1]) {
        return 1; // 삼각형을 만들 수 있음
    } else {
        return 2; // 삼각형을 만들 수 없음
    }
}
