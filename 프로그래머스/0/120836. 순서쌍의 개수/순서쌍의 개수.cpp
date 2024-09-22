int solution(int n) {
    int answer = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            answer++; // i는 약수
            if (i != n / i) {
                answer++; // n / i도 약수 (i와 다를 경우)
            }
        }
    }
    return answer;
}
