class Solution {
    public int[] solution(long n) {
        int digits = String.valueOf(n).length();
        int[] answer = new int[digits];
        int i = 0;
        while (n > 0) {
            answer[i] = (int)(n % 10);
            n /= 10;
            i++;
        }
        return answer;
    }
}