# [level 1] 짝수와 홀수 - 12937 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/12937) 

### 성능 요약

메모리: 69 MB, 시간: 0.03 ms

### 구분

코딩테스트 연습 > 연습문제

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 03월 28일 21:02:11

### 문제 설명

<p>정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.</p>

<h5>제한 조건</h5>

<ul>
<li>num은 int 범위의 정수입니다.</li>
<li>0은 짝수입니다.</li>
</ul>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num</th>
<th style="text-align: center">return</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td style="text-align: center">"Odd"</td>
</tr>
<tr>
<td>4</td>
<td style="text-align: center">"Even"</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges

<details>
<summary><b>🔍 풀이 상세보기 (클릭)</b></summary>
<br>
1. String s = n + "" 를 활용하여 n을 string 형태로 변형하여 charAt을 활용해 배열에 저장
2. import Java.util.Array 를 활용한 Arrays.sort(배열명)으로 배열을 오름차순으로 정렬한다
3. s.length() - 1 부터 0 까지 answer에 계산하여 역순으로 return
</details>
