#include <stdio.h>

/*
// 조건 1. 사용자 나이 입력받기 ("나이를 입력하세요" 문구 출력)
// 조건 2.
// { 1세 이상 7세 이하 = 유아, 8세 이상 13세 이하 = 초등학생, 14세 이상 16세 이하 = 중학생,
//	  17세 이상 19세 이하 = 고등학생, 20세 이상 = 성인}으로 분류
// 조건 3-1. if-else문 사용
// 조건 3-2. 삼항연산자로 if-else문 변환

int main() {
	int age;

	printf("나이를 입력하세요. > ");
	scanf_s("%d", &age);

	// if-else문 사용
	if (age >= 1 && age <= 7) {
		printf("유아");
	}
	else if (age >= 8 && age <= 13) {
		printf("초등학생");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생");
	}
	else {
		printf("성인");
	}

	// 삼항 연산자
	// C언어는 string 타입이 없기 때문에 char 배열이나 char* 사용
	char* cAge = (age >= 1 && age <= 7) ? "유아" :
				 (age >= 8 && age <= 13) ? "초등학생" :
				 (age >= 14 && age <= 16) ? "중학생" :
				 (age >= 17 && age <= 19) ? "고등학생" : "성인";
	printf("%s", cAge);
}
*/

/*
// 조건 1. 사용자로부터 이름 입력받기 ("이름을 입력하세요" 문구 출력)
// 조건 2. 입력받은 이름이 "홍길동"이면 남자, "성춘향"이면 여자, 그외 다른 이름은 "성별 미상"으로 출력
// 조건 3. if-else문 사용 > 삼항연산자 변환

int main() {
	char name[20];

	printf("이름을 입력하세요. > ");
	scanf_s("%s", name, 20);

	// strcmp(변수명, 비교 문자열) > 변수명에 입력된 문자열과 비교 문자열이 같은지 확인
	// 보통 C언어에서 true = 1, false = 0이기 때문에 !strcmp(변수명, 비교 문자열)로도 작성 가능
	if (!strcmp(name, "홍길동")) {
		printf("남자");
	}
	else if (!strcmp(name, "성춘향")) {
		printf("여자");
	}
	else {
		printf("성별 미상");
	}

	// 삼항연산자로 변환
	char* gender = (!strcmp(name, "홍길동")) ? "남자" :
		 		   (!strcmp(name, "성춘향")) ? "여자" : "성별 미상";
	printf("%s", gender);
}
*/

/*
// ㅋㅋㅋ을 백 번 출력 (for문 사용)
int main() {
	char* text = "ㅋㅋㅋ";

	for (int i = 0; i < 101; i++) {
		printf("%s", text);
	}
}
*/

/*
// 1985년부터 2026년까지 출력 (for문 사용)
int main() {
	int year;

	for (year = 1985; year < 2027; year++) {
		printf("%d년 \n", year);
	}
}
*/

/*
// 조건 1. 사용자로부터 출력할 횟수 입력받기
// 조건 2. 입력받은 횟수만큼 "안녕" 출력
// 조건 3. for문 사용
int main() {
	int cnt;

	printf("문자열을 몇 번 출력할까요? > ");
	scanf_s("%d", &cnt);

	for (int i = 1; i <= cnt; i++) {
		printf("안녕 ");
	}
}
*/

/*
// 조건 1. 사용자로부터 숫자 입력받기
// 조건 2. 1부터 입력받은 숫자까지 출력
// 조건 2-1. 1부터 입력받은 숫자까지 출력하되 홀수 / 짝수만 출력하기
// 조건 3. for문 사용
int main() {
	int num;

	printf("숫자를 입력하세요 > ");
	scanf_s("%d", &num);

	// 조건 2
	for (int i = 1; i <= num; i++) {
		printf("%d ", i);
	}

	// 조건 2-1. 홀수
	for (int i = 1; i <= num; i += 2) {
		printf("%d ", i);
	}

	// 조건 2-1. 짝수
	for (int i = 2; i <= num; i += 2) {
		printf("%d ", i);
	}
}
*/

/*
// 조건 1. 사용자로부터 숫자 입력받기 ("자연수를 입력하세요" 출력)
// 조건 2. 입력받은 숫자의 짝홀 판별
// 조건 3. 입력받은 숫자가 10보다 큰지 작은지 판별
// 조건 4. 중첩 if문 사용
int main() {
	int no;

	printf("자연수를 입력하세요 > ");
	scanf_s("%d", &no);

	if (no % 2 == 0) {
		printf("입력하신 숫자 %d이(가) 짝수이며 ", no);
		if (no > 10) {
			printf("10보다 큰 수입니다.");
		}
		else {
			printf("10보다 작은 수입니다.");
		}
	}
	else {
		printf("입력하신 숫자 %d이(가) 홀수이며 ", no);
		if (no > 10) {
			printf("10보다 큰 수입니다.");
		}
		else {
			printf("10보다 작은 수입니다.");
		}
	}
}
*/

/*
// 조건 1. 사용자로부터 숫자 입력받기 ("숫자를 입력하세요" 문구 출력)
// 조건 2. 입력받은 숫자가 짝수라면 입력받은 수를 4번 출력
// 조건 3. 입력받은 숫자가 홀수라면 입력받은 수를 3번 출력
// 조건 4. 입력받은 숫자가 0이라면 "숫자 0을 입력하셨습니다." 문구 출력
// 조건 5. 입력받은 숫자가 음수라면 "입력 오류" 문구 출력
// 조건 6. if문과 for문 사용
int main() {
	int number;

	printf("숫자를 입력하세요 > ");
	scanf_s("%d", &number);

	if (number != 0 && number % 2 == 0) {
		for (int i = 0; i < 4; i++) {
			printf("%d ", number);
		}
	}
	else if (number % 2 == 1) {
		for (int i = 0; i < 3; i++) {
			printf("%d ", number);
		}
	}
	else if (number == 0) {
		printf("숫자 0을 입력하셨습니다.");
	}
	else {
		printf("입력 오류");
	}
}
*/

/*
// 조건 1. 사용자로부터 숫자 입력받기 ("숫자를 입력하세요" 문구 출력)
// 조건 2. 1부터 입력된 숫자(n)까지 반복문을 출력하되 1은 1번, 2는 2번... n은 n번 출력 (ex. 122333nnnn....)
// 조건 3. 중첩 for문 사용
int main() {
	int n;

	printf("숫자를 입력하세요 > ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", i);
		}
	}
}
*/

/*
// 가위바위보 게임 (무한 반복문) - for (대신 while문도 사용 가능), if else, switch case 모두 사용 
// 조건 1. 사용자로부터 입력받은 수(number)와 rand 함수를 통해 컴퓨터가 랜덤으로 산출한 값(random) 비교
// 조건 2. random은 1, 2, 3만 산출되게끔 설정
// 조건 2-1. number 또한 1, 2, 3만 입력 가능하게 조건 달기 (다른 숫자 입력 시 입력 오류 메세지 출력)
// 조건 3. 1 = 가위, 2 = 바위, 3 = 보라는 전제로 코딩
// 조건 4. 0을 입력 시 프로그램 종료
int main() {
	int number;
	srand((unsigned)time(NULL));

	for (;;) {
		int random = (rand() % 3) + 1;

		printf("(1)가위 (2)바위 (3)보! \n");
		printf("사용자 입력 > ");
		scanf_s("%d", &number);

		switch (number) {
		case 0:
			printf("프로그램 종료 \n");
			return 0;
			break;
		case 1:
			printf("user : 가위 \n");
			if (random == 1) {
				printf("computer : 가위 \n");
				printf("비김 \n\n");
			}
			else if (random == 2) {
				printf("computer : 바위 \n");
				printf("컴퓨터 승리 \n\n");
			}
			else {
				printf("computer : 보 \n");
				printf("사용자 승리 \n\n");
			}
			break;

		case 2:
			printf("user : 바위 \n");
			if (random == 1) {
				printf("computer : 가위 \n");
				printf("사용자 승리 \n\n");
			}
			else if (random == 2) {
				printf("computer : 바위 \n");
				printf("비김 \n\n");
			}
			else {
				printf("computer : 보\n");
				printf("컴퓨터 승리 \n\n");
			}
			break;

		case 3:
			printf("user : 보 \n");
			if (random == 1) {
				printf("computer : 가위 \n");
				printf("컴퓨터 승리 \n\n");
			}
			else if (random == 2) {
				printf("computer : 바위 \n");
				printf("사용자 승리 \n\n");
			}
			else {
				printf("computer : 보\n");
				printf("비김 \n\n");
			}
			break;

		default:
			printf("입력 오류 \n\n");
		}
	}
}
*/

/*
// 가위바위보 게임 - 사용자 함수 이용
// if else에 해당되는 부분을 함수로 정의
void RSP(int user, int random) {
	char* rsp[] = { "", "가위", "바위", "보" };
	printf("computer : %s \n", rsp[random]);

	if (user == random) {
		printf("비김 \n\n");
	}
	else if ((user == 1 && random == 3) || (user == 2 && random == 1) || (user == 3 && random == 2)) {
		printf("사용자 승리 \n\n");
	}
	else {
		printf("컴퓨터 승리 \n\n");
	}
}

int main() {
	int number;
	srand((unsigned)time(NULL));

	for (;;) {
		int random = (rand() % 3) + 1;

		printf("(1)가위 (2)바위 (3)보! \n");
		printf("사용자 입력 > ");
		scanf_s("%d", &number);

		switch (number) {
		case 0:
			printf("프로그램 종료 \n");
			return 0;
			break;
		case 1:
			printf("user : 가위 \n");
			RSP(1, random);
			break;

		case 2:
			printf("user : 바위 \n");
			RSP(2, random);
			break;

		case 3:
			printf("user : 보 \n");
			RSP(3, random);
			break;
		default:
			printf("입력 오류 \n\n");
		}
	}
}
*/