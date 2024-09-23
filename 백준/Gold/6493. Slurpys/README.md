# [Gold IV] Slurpys - 6493 

[문제 링크](https://www.acmicpc.net/problem/6493) 

### 성능 요약

메모리: 2176 KB, 시간: 0 ms

### 분류

재귀, 정규 표현식, 문자열

### 제출 일자

2024년 9월 23일 15:40:31

### 문제 설명

<p>Recognizing strings based on a set of restrictions is a common computational problem. A Slurpy is a string of characters that has certain properties. Your program will read in strings of characters and output whether or not they are Slurpys. </p>

<p>A Slump is a character string that has the following properties: </p>

<ol>
	<li>Its first character is either a 'D' or an 'E'. </li>
	<li>The first character is followed by a string of one or more 'F's. </li>
	<li>The string of one or more 'F's is followed by either a Slump or a 'G'. The Slump or 'G' that follows the F's ends the Slump. For example DFFEFFFG is a Slump since it has a 'D' for its first character, followed by a string of two F's, and ended by the Slump 'EFFFG'. </li>
	<li>Nothing else is a Slump. </li>
</ol>

<p>A Slimp is a character string that has the following properties: </p>

<p>A Slimp is a character string that has the following properties: </p>

<ol>
	<li>Its first character is an 'A'. </li>
	<li>If it is a two character Slimp then its second and last character is an 'H'. </li>
	<li>If it is not a two character Slimp then it is in one of these two forms: 
	<ul>
		<li>'A' followed by 'B' followed by a Slimp followed by a 'C'. </li>
		<li>'A' followed by a Slump (see above) followed by a 'C'. </li>
	</ul>
	</li>
	<li>Nothing else is a Slimp. </li>
</ol>

<p>A Slurpy is a character string that consists of a Slimp followed by a Slump. </p>

<p>Examples </p>

<ul>
	<li>Slumps: DFG, EFG, DFFFFFG, DFDFDFDFG, DFEFFFFFG</li>
	<li>Not Slumps: DFEFF, EFAHG, DEFG, DG, EFFFFDG</li>
	<li>Slimps: AH, ABAHC, ABABAHCC, ADFGC, ADFFFFGC, ABAEFGCC, ADFDFGC</li>
	<li>Not Slimps: ABC, ABAH, DFGC, ABABAHC, SLIMP, ADGC</li>
	<li>Slurpys: AHDFG, ADFGCDFFFFFG, ABAEFGCCDFEFFFFFG</li>
	<li>Not Slurpys: AHDFGA, DFGAH, ABABCC</li>
</ul>

### 입력 

 <p>The first line contains an integer N between 1 and 10 describing how many strings of characters are represented. The next N lines each contain a string of 1 to 60 alpha characters.</p>

### 출력 

 <p>Each of the next N lines of output should consist of either YES or NO depending on whether or not the corresponding input line is a Slurpy.</p>

