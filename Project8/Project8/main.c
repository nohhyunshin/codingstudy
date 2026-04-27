#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// 클래스와 구조체

/*
// 조건 1. 로그인 화면 구현 (아이디와 비밀번호)
// 조건 2. 사용자로부터 입력받은 아이디와 비밀번호만 출력함
// ex. 입력하신 asdf가 아이디와 일치하지 않습니다. / 입력하신 1212가 비밀번호와 일치하지 않습니다.
// 조건 3. 사용자로부터 입력받을 때에는 getch()를, 출력할 때에는 putch() 이용
// 조건 4. 아이디와 비밀번호가 모두 일치할 경우에만 "로그인 성공" 문구 출력
int main() {
	char id[5] = "abcd";
	char pw[5] = "1234";
	char user_id[5];
	char user_pw[5];

	printf("아이디를 입력하세요 > ");
	for (int i = 0; i < 4; i++) {
		user_id[i] = getch();		// 배열의 i번째 인덱스에 getch()로 한 글자씩 넣음
	}
	user_id[4] = '\0';				// 문자열의 마지막은 \0
	printf("\n");

	printf("비밀번호를 입력하세요 > ");
	for (int i = 0; i < 4; i++) {
		user_pw[i] = getch();
	}
	user_pw[4] = '\0';
	printf("\n");

	int id_wrong = strncmp(id, user_id, 4);		// 아이디 미일치
	int pw_wrong = strncmp(pw, user_pw, 4);		// 비밀번호 미일치
	if (id_wrong || pw_wrong) {
		printf("로그인 실패 \n");

		if (id_wrong) {
			printf("입력하신 ");
			for (int i = 0; i < 4; i++) {
				putch(user_id[i]);
			}
			printf("가 아이디와 일치하지 않습니다. \n");
		}

		if (pw_wrong) {
			printf("입력하신 ");
			for (int i = 0; i < 4; i++) {
					putch(user_pw[i]);
			}
			printf("가 비밀번호와 일치하지 않습니다. \n");
		}
	}
	else printf("로그인 성공 \n");
	return 0;
}
*/

/*
// 로또 번호 추출 함수 - 방법 1
// 조건 1. rand() 함수 사용해 1부터 45까지 숫자 랜덤 생성 - 함수로 선언
// 조건 2. 중복되는 숫자가 없도록 비교 확인할 것
int getNumber() {
	return rand() % 45 + 1;
}

int main() {
	int lotto[6] = { 0 };
	int num;
	char dup;				// 중복 확인

	printf("*** 로또 추첨을 시작합니다 *** \n");
	srand(time(NULL));		// 로또 번호 초기화

	for (int i = 0; i < 6;) {
		num = getNumber();
		dup = 'N';

		for (int j = 0; j < i; j++) {
			if (lotto[j] == num) {
				dup = 'Y';
				break;
			}
		}

		// 중복된 번호가 있으면 안 되기 때문에 확인 후 i++
		if (dup == 'N') lotto[i++] = num;
	}

	printf("추첨된 로또 번호 > ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}
	printf("\n");
	return 0;
}
*/

/*
// 로또 번호 추출 함수 - 방법 2
int getNumber() {
	return rand() % 45 + 1;
}

int dup(int arr[], int cnt, int num) {
	for (int i = 0; i < cnt; i++) {
		if (arr[i] == num) return 1;		// 랜덤으로 생성된 번호가 겹칠 때
	}
	return 0;								// 랜덤으로 생성된 번호가 겹치지 않을 때				
}

int main() {
	int lotto[6];
	int idx = 0;
	printf("*** 로또 추첨을 시작합니다 *** \n");

	srand(time(NULL));		// 로또 번호 초기화
	
	while (idx < 6) {
		int random = getNumber();
		if (!dup(lotto, idx, random)) {			// 랜덤으로 생성된 번호가 중복이 아닐 때만 저장
			lotto[idx++] = random;
		}
	}

	printf("추첨된 로또 번호 > \n");
	for (int i = 0; i < 6; i++) {
		printf("%d	", lotto[i]);
	}
}
*/

/*
// 계산기 함수
// 조건 1. 사칙연산 함수 선언 (Sum, Sub, Mul, Div)
// 조건 1-1. 뺄셈의 경우 x와 y의 크기를 확인하여 양수로 반환 (ex. x = 2, y = 3의 경우 1로 계산되게)
// 조건 1-2. 나눗셈의 경우 소수 첫째자리까지 반환할 것
// 조건 2. 사용자로부터 입력받은 두 숫자 연산 ("두 개의 숫자를 입력하세요" 문구 출력)
int Sum(int x, int y) {
	return x + y;
}

int Sub(int x, int y) {
	if (x > y) return x - y;
	else return y - x;

	// 절대값 씌울 경우 > return abs(x - y);
}

int Mul(int x, int y) {
	return x * y;
}

float Div(int x, int y) {
	return (float)x / y;
}

int main() {
	int a, b;

	printf("두 개의 숫자를 입력하세요 > ");
	scanf_s("%d %d", &a, &b);

	printf("두 수의 합 > %d \n", Sum(a, b));
	printf("두 수의 차 > %d \n", Sub(a, b));
	printf("두 수의 곱 > %d \n", Mul(a, b));
	printf("두 수의 몫 > %.1f \n", Div(a, b));
}
*/

/*
// 조건 1. 사칙연산 함수를 void문으로 선언
// 조건 1-1. 뺄셈의 경우 x와 y의 크기를 확인하여 양수로 반환 (ex. x = 2, y = 3의 경우 1로 계산되게)
// 조건 1-2. 나눗셈의 경우 소수 첫째자리까지 반환할 것
// 조건 2. 사용자로부터 입력받은 두 숫자 연산 ("두 개의 숫자를 입력하세요" 문구 출력)
// 조건 3. do while문과 switch case문을 사용하여 사용자가 직접 종료 시점을 결정할 수 있게 짤 것
void Calc(int x, int y, int op) {
	switch (op) {
	case 1:
		printf("두 수의 합 > %d \n", x + y);
		break;
	case 2:
		if (x > y) printf("두 수의 차 > %d \n", x - y);
		else printf("두 수의 차 > %d \n", y - x);

		// 절대값 씌울 경우 > return abs(x - y);
		break;
	case 3:
		printf("두 수의 곱 > %d \n", x * y);
		break;
	case 4:
		printf("두 수의 몫 > %.1f \n", (float)x / y);
		break;
	case 5:
		printf("프로그램 종료 \n");
		break;
	default:
		printf("입력 오류 \n");
	}
}

int main() {
	int num1, num2, op;

	do {
		printf("두 개의 숫자를 입력하세요 > ");
		scanf_s("%d %d", &num1, &num2);
		printf("(1)+ (2)- (3)x (4)÷ (5)종료\n");
		scanf_s("%d", &op);

		Calc(num1, num2, op);
		printf("\n");
	} while (op != 5);
}
*/

/*
// 조건 1. 학생 정보(이름, 나이, 성별)를 담는 구조체를 작성
// 조건 2. 구조체 배열 선언 후 사용자로부터 학생 세 명의 정보를 입력받고 출력하기 (for문 사용)
int main() {
	struct Student {
		char name[10];		// 이름
		int age;			// 나이
		char gender[5];		// 성별
	};

	struct Student std[3];

	printf("*** 학생 정보 입력 *** \n");
	for (int i = 0; i < 3; i++) {
		printf("학생 이름 > ");
		scanf_s("%s", std[i].name, 10);
		printf("학생 나이 > ");
		scanf_s("%d", &std[i].age);
		printf("학생 성별 > ");
		scanf_s("%s", std[i].gender, 5);
		printf("\n");
	}

	printf("*** 학생 정보 출력 *** \n");
	for (int i = 0; i < 3; i++) {
		printf("-----------------\n");
		printf("| 이름 : %s \n", std[i].name);
		printf("| 나이 : %d \n", std[i].age);
		printf("| 성별 : %s \n", std[i].gender);
		printf("-----------------\n");
	}
}
*/

/*
// 조건 1. 학생 이름과 성적 (국어, 영어, 수학, 평균)을 담는 구조체 작성
// 조건 2. 구조체 포인터 선언 후 사용자로부터 학생 세 명의 정보를 입력받아 출력하기 (for문 사용)
int main() {
	struct Scores {
		char name[10];
		int kor, mat, eng;
		float avg;
	};

	struct Scores s[3];		// 구조체 변수
	struct Scores* p_s;		// 구조체 포인터

	p_s = s;

	printf("*** 학생 성적 관리 *** \n");

	for (int i = 0; i < 3; i++) {
		printf("이름 > ");
		scanf_s("%s", (p_s+i)->name, 10);
		printf("국어 > ");
		scanf_s("%d", &(p_s+i)->kor);
		printf("수학 > ");
		scanf_s("%d", &(p_s+i)->mat);
		printf("영어 > ");
		scanf_s("%d", &(p_s+i)->eng);
		(p_s + i)->avg = ((p_s + i)->kor + (p_s + i)->mat + (p_s + i)->eng) / 3.0f;
		printf("\n");
	}

	printf("*** 학생 성적 출력 *** \n");
	for (int i = 0; i < 3; i++) {
		printf("----------------------\n");
		printf("| 이름 : %s \n", (p_s + i)->name);
		printf("| 국어 : %d \n", (p_s + i)->kor);
		printf("| 수학 : %d \n", (p_s + i)->mat);
		printf("| 영어 : %d \n", (p_s + i)->eng);
		printf("| 평균 : %.1f \n", (p_s + i)->avg);
		printf("----------------------\n");
	}
}
*/