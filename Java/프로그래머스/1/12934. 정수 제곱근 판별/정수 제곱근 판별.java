class Solution {
    public long solution(long n) {
        double num = Math.sqrt(n);
		return (num == (int)num) ? (long)Math.pow(num+1, 2) : -1; 
    }
}