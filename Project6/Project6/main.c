#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>		// while 무한 루프 돌리기 위해 선언

/*
// 조건 1. while문을 사용해 1부터 5까지 출력
int main() {
	int a = 1;

	while (a < 6) {
		printf("%d", a);
		a++;
	}
}
*/

/*
// 조건 1. 1부터 10까지 숫자 중 짝수만 출력 (while문 사용)
// 조건 2. continue와 break를 알맞은 위치에 사용할 것
// 조건 3. while문의 조건식을 두 가지 방법으로 작성해 볼 것
int main() {
	// 무한루프 while문
	int a = 0;
	while (true) {	// 헤더 선언 없이 while(1)로 돌려도 됨
		a++;
		if (a % 2 != 0) continue;
		printf("%d ", a);
		if (a == 10) break;
	}

	printf("\n");

	// while문에 조건 작성
	int b = 1;
	while (b < 11) {
		if (b % 2 == 0) printf("%d ", b);
		b++;
	}
}
*/

/*
// 조건 1. 1부터 100까지의 합 출력 (while문 사용)
// 조건 2. continue와 break를 알맞은 위치에 사용할 것
// 조건 3. while문의 조건식을 두 가지 방법으로 작성해 볼 것
int main() {
	// 무한루프 while문
	int num1 = 0, sum = 0;

	while (true) {
		num1++;
		sum += num1;
		if (num1 < 100) continue;
		printf("%d", sum);
		break;
	}

	printf("\n");

	// while문에 조건 작성
	int num2 = 0, total = 0;
	while (num2 < 100) {
		num2++;
		total += num2;
	}
	printf("%d", total);
}
*/

/*
// 조건 1. do while문을 통해 사용자로부터 주문받기 ("주문하실 메뉴를 선택해 주세요." 문구 출력)
// 조건 2. 아메리카노, 카페라떼, 아이스티 중 선택할 수 있게 작성
// 조건 2-1. 사용자가 4를 입력했을 경우 프로그램이 종료되게끔 설계 ("주문 완료" 문구 출력)
// 조건 3. switch case문 사용
int main() {
	int menu;

	do {
		printf("*** 카페 메뉴 *** \n");
		printf("(1)아메리카노 \n(2)카페라떼 \n(3)아이스티 > ");
		scanf_s("%d", &menu);

		switch (menu) {
		case 1: printf("아메리카노를 주문하셨습니다. \n\n"); break;
		case 2: printf("카페라떼를 주문하셨습니다. \n\n"); break;
		case 3: printf("아이스티를 주문하셨습니다. \n\n"); break;
		case 4: printf("주문 완료 \n\n"); break;
		default: printf("주문이 잘못되었습니다. 다시 선택해 주세요. \n\n");
		}
	} while (menu != 4);
}
*/

/*
// 조건 1. 1부터 100까지의 범위 내에서 값을 더하다가 2000이 넘으면 반복문 탈출 (goto 제어문 사용)
// 조건 2. "1부터 n까지의 합이 2000을 넘습니다" 문구 출력 
int main() {
	int i, total = 0;

	for (i = 0; i < 101; i++) {
		total += i;

		if (total > 2000) goto gotoA;
	}
	gotoA :
		printf("1부터 %d까지의 합이 2000을 넙습니다.", i);
}
*/

/*
// 조건 1. 배열에 저장된 국어, 영어, 수학 점수의 평균 (소수 첫째자리까지) 계산
// 조건 1-1. 각각의 점수는 임의로 지정 (사용자로부터 입력받는 것 X)
// 조건 2. 국어, 영어, 수학 각각의 점수도 함께 출력
int main() {
	int score[3] = { 85, 90, 73 };
	// int len = sizeof(score) / sizeof(score[0]) = 3
	// sizeof(score) = 3 x (int의 바이트 수 4) = 12
	// sizeof(score[0]) = int형의 숫자 하나이기 때문에 int의 바이트 수 4
	float avg;

	avg = (score[0] + score[1] + score[2]) / 3.0f;
	// avg = (score[0] + score[1] + score[2]) / (float)len;
	printf("국어 : %d점 \n", score[0]);
	printf("영어 : %d점 \n", score[1]);
	printf("수학 : %d점 \n", score[2]);
	printf("평균 : %.1f점", avg);
}
*/

/*
// 조건 1. city라는 배열 변수 선언 후 나라 이름 세 개를 값으로 지정 (사용자로부터 입력받는 값 X)
// 조건 2. for문을 사용해 city라는 배열에 저장된 문자열 출력
// 조건 3. 포인터와 배열 두 가지 방법 모두 작성
int main() {
	// 포인터
	char* city[3];

	city[0] = "KOREA";
	city[1] = "JAPAN";
	city[2] = "TAIWAN";

	for (int i = 0; i < 3; i++) {
		printf("%s \t", city[i]);
	}

	// 배열
	// 방 3칸짜리 배열에 한 칸당 10개의 문자 할당
	// 그러나 마지막 하나는 \0이기 때문에 실질적으로 문자는 총 9개만 입력 가능한 형태
	char city[3][10] = {
		"KOREA",
		"JAPAN",
		"TAIWAN"
	};

	for (int i = 0; i < 3; i++) {
		printf("%s \t", &city[i]);
	}
}
*/

/*
// 다차원 배열 (대부분 2차원까지만 사용)
// 조건 1. fruit이라는 이차원 배열 변수 선언 후 과일 이름을 값으로 지정 (사용자로부터 입력받는 값 X)
// 조건 2. 중첩 for문을 사용하여 이차원 배열에 저장된 문자열 출력
// 조건 2-1. for문의 조건절에서 크기를 자동으로 배열의 크기에 맞춰지도록 설정
int main() {
	// 3행 3열의 배열
	char fruit[3][3][10] = {
		{"Apple", "Banana"},
		{"Lemon", "Orange"},
		{"Cherry", "Blueberry"}
	};

	// for문에서 배열의 크기에 맞춰 조건 부여
	// N차원 배열 arr[a][b][c]의 sizeof 공식 = a x b x c
	// sizeof(fruit) = 90, sizeof(fruit[0]) = 30, sizeof(fruit[0][0]) = 10
	int row = sizeof(fruit) / sizeof(fruit[0]);		 		// 행의 개수
	int col = sizeof(fruit[0]) / sizeof(fruit[0][0]);		// 열의 개수

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%s \n", fruit[i][j]);
		}
	}
}
*/

/*
// 조건 1. 사용자로부터 이름을 입력받아 배열(people)에 저장 ("이름을 입력하세요" 문구 출력)
// 조건 2. 일차원 배열로 선언하되 3개의 이름 저장
// 조건 3. for문 사용
int main() {
	char people[3][10];

	for (int i = 0; i < 3; i++) {	
		printf("이름을 입력하세요 > ");		
		scanf_s("%s", people[i], 10);
	}		

	printf("배열에 저장된 이름 : \n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s \n", i+1, people[i]);
	}
}
*/

/*
// 조건 1. 배열에 저장된 문자열 "hello"를 "olleh" 형태로 출력
// 조건 2. for문의 조건절에는 배열의 길이를 사용할 것 (strlen 이용)
// 조건 3. 뒤집힌 문자열 olleh를 새로운 배열에 복사해서 저장할 것 (strcpy 이용)
int main() {
	char str[6] = "hello";
	char rvs[6];
	char cpy[6];
	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		rvs[i] = str[len - (1 + i)];
	}
	rvs[len] = '\0';

	// strcpy(붙여넣을 위치, 복사할 내용)
	strcpy(cpy, rvs);
	printf("%s \n", rvs);
	printf("%s", cpy);
}
*/

/*
// 이차원 배열로 구구단 출력
int main() {
	int multable[9][9];

	// 이차원 배열에 구구단 값 저장
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			multable[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d \n", i + 1, j + 1, multable[i][j]);
		}
		printf("\n");
	}
}
*/

/*
// 조건 1. 사용자로부터 단수 입력받기 ("단수를 입력하세요" 문구 출력)
// 조건 2. 2단부터 9단까지로 제한하며 이외의 숫자 입력 시 오류 메세지 출력
// 조건 3. for문이나 while문을 사용해 무한 반복문으로 출력할 것
// 조건 4. 0 입력 시 프로그램 종료
int main() {
	int num;

	// 무한 루프 for문 이용
	for (;;) {
		printf("단수를 입력하세요 > ");
		scanf_s("%d", &num);
		
		if (num == 0) break;

		if (num >= 2 && num <= 9) {
			printf("<< %d단 >> \n", num);
			for (int j = 1; j < 10; j++) {
				printf("%d x %d = %d \n", num, j, num*j);
			}
			printf("\n");
		}
		else {
			printf("입력 오류 \n\n");
		}
	}

	// 무한 루프 while문 이용
	while (true) {
		printf("단수를 입력하세요 > ");
		scanf_s("%d", &num);

		if (num == 0) break;

		if (num >= 2 && num <= 9) {
			printf("<< %d단 >> \n", num);
			for (int j = 1; j < 10; j++) {
				printf("%d x %d = %d \n", num, j, num * j);
			}
			printf("\n");
		}
		else {
			printf("입력 오류 \n\n");
		}
	}
}
*/