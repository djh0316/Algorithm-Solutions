import java.util.*;

class Solution {
    public long solution(long n) {
        String s = n + "";
        int arr[] = new int[s.length()];
        
        for (int i = 0; i < s.length(); i++) {
        	arr[i] = s.charAt(i) - '0';
        }
        Arrays.sort(arr);
        long answer = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
        	answer *= 10;
        	answer += arr[i];
        }
        return answer;
    }
}