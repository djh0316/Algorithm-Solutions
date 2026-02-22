# [Gold II] 잘못 구현한 에라토스테네스의 체 - 15897 

[문제 링크](https://www.acmicpc.net/problem/15897) 

### 성능 요약

메모리: 2032 KB, 시간: 0 ms

### 분류

수학, 정수론

### 제출 일자

2026년 2월 23일 02:23:24

### 문제 설명

<p>성원이는 오늘 이산수학 수업 시간에 에라토스테네스의 체에 대해 배웠다. 에라토스테네스의 체는 고대 그리스 수학자 에라토스테네스가 발견한 소수를 찾는 방법이다. 성원이는 이 방법에 너무나 큰 감명을 받았고, 당장 실습실에 가서 C++로 구현해보기로 했다. 그런데 성원이는 교재도 없고 필기를 하는 성격도 아니기 때문에 수업내용이 정확히 기억나지 않았다. 성원이는 기억을 열심히 더듬어 마침내 아래와 같은 코드를 작성했다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/e3f61892-1308-4a56-b3f7-eafe8fc94403/-/preview/" style="width: 340px; height: 135px;"></p>

<p>옆에 앉아있던 킹갓제너럴엠페러충무공마제스티알고리즘마스터 형석이는 성원이의 이 코드를 보고 실소를 금할 수 없었다. 아니 대체 세상에 어떤 사람이 이딴 코드를 짠단 말이지? 형석이는 신이 나서 성원이에게 이 코드의 문제점을 마구 지적했다.</p>

<blockquote>
<p>형석 : 야 성원! 이거 알고리즘이 완전히 틀렸잖아! 여긴 이렇게저렇게 고쳐야지!<br>
성원 : 아 그렇구나... 알려줘서 정말 고마워.<br>
형석 : 게다가 이 코드는 수행시간도 더럽게 오래 걸리겠네.<br>
성원 : 그래? 내가 관심법으로 보면 왠지 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D442 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>O</mi><mo stretchy="false">(</mo><mi>n</mi><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$O(n)$</span></mjx-container>에 돌아갈 것처럼 생겼는데?<br>
형석 : <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D442 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>O</mi><mo stretchy="false">(</mo><mi>n</mi><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$O(n)$</span></mjx-container>은 무슨 말도 안되는 소리야? 자 이거 봐. 수식을 이렇게저렇게 쓰면...<br>
형석 : 어라? 시간복잡도 증명이 잘 안 되네. 수학 공부를 너무 오랫동안 안 해서 그런가?<br>
성원 : IOI 금메달 킹갓제너럴알고리즘마스터도 이럴 때가 있구나.<br>
형석 : 시끄러! 그렇다면 내가 직접 연산횟수를 측정해서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D442 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>O</mi><mo stretchy="false">(</mo><mi>n</mi><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$O(n)$</span></mjx-container>이 아님을 보여주지.</p>
</blockquote>

<p>형석이는 위 코드의 연산횟수를 직접 측정해서 위 코드의 시간복잡도가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D442 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>O</mi><mo stretchy="false">(</mo><mi>n</mi><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$O(n)$</span></mjx-container>이 아님을 증명하려고 한다. 구체적으로 위 코드의 6번 줄이 몇 번 실행될지를 측정하고 그 데이터로 그래프를 그려 보여주려고 한다. 그런데 막상 직접 측정하려고 보니 이것은 매우 귀찮은 일이었다. 허접인 성원이때문에 내가 이 고생을 해야 한다니! 귀찮아진 형석이는 이 작업을 당신에게 떠넘겼다. 위 코드에서 n에 해당하는 값이 주어졌을 때, 위 코드의 6번 줄이 몇 번 실행될지를 계산하는 프로그램을 작성해서 형석이를 도와주자.</p>

### 입력 

 <p>첫 번째 줄에 위 프로그램의 입력 n의 값이 자연수로 주어진다. (1 ≤ n ≤ 10<sup>9</sup>)</p>

### 출력 

 <p>첫 번째 줄에 위 프로그램의 6번 줄의 실행횟수를 출력한다.</p>


# 📑 [Gold II] 잘못 구현한 에라토스테네스의 체 - 15897

## 1. 문제 분석 및 핵심 아이디어

이 문제는 겉보기엔 에라토스테네스의 체를 묻는 것 같지만, 실제로는 특정 수식의 합을 **** 시간 복잡도 안에 해결해야 하는 **정수론** 문제입니다.

* **구해야 하는 값**: 코드의 루프를 분석하면 결국  (에 보정치 추가) 형태의 값을 구하는 문제입니다.
* **문제점**: 이 최대 이므로, 일반적인  반복문으로는 시간 초과(TLE)가 발생합니다.
* **해결책**: 의 값은 가 커질수록 일정 구간 동안 같은 값을 유지한다는 성질을 이용한 **평균값 정리 기반의 최적화(Square Root Decomposition)**가 필요합니다.

---

## 2. 해결 전략 (Strategy)

### 2.1 수식의 변형

문제에서 요구하는 실행 횟수는 결과적으로 다음 수식과 같습니다:



이 식은 로 치환하면 더 직관적으로 풀이할 수 있습니다.

### 2.2 구간 나누기 ( 최적화)

* 가 부터 $\sqrt{n-1}$까지는 값이 급격히 변하므로 일일이 더합니다.
* 가 $\sqrt{n-1}$보다 커지면  값이 중복되는 구간이 길어집니다.
* **조화 수열의 합(Harmonic Series)** 성질을 활용하여, 같은 몫을 가지는 구간을 한 번에 계산하여 $O(\sqrt{n})$으로 단축합니다.

---

## 3. 트러블슈팅 (Troubleshooting)

* **데이터 타입 오류**: 이 이고 합산 결과가 매우 크므로 `int`를 사용하면 **Overflow**가 발생합니다. 반드시 `long long`을 사용해야 함을 확인했습니다.
* **경계값 처리**: 인 경우나 루프의 마지막 인덱스에서 나누기 0이 발생하지 않도록 예외 처리에 신경 썼습니다.
* **수식의 정확성**: 단순히 $\frac{n}{i}$가 아니라 문제 코드의 로직에 따라 `(n-1)/i`가 적용되는 범위를 정확히 산출하는 것이 까다로웠습니다.

---

## 4. 복기 및 학습 내용 (Retrospective)

* **정수론적 접근**: $O(n)$의 벽을 느꼈을 때, 수열의 규칙성을 찾아 $\sqrt{n}$으로 줄이는 사고방식을 연습할 수 있었습니다.
* **코드 효율성**: 작성한 코드에서 `sqrt(n)`을 변수로 선언하여 반복적인 연산을 피했습니다.
* **발전 방향**: 이와 유사한 문제인 '약수의 합(백준 2247번)' 등에도 이 구간 합 최적화 기법을 적용해 볼 계획입니다.
