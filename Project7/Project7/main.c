#include <stdio.h>
#include <malloc.h>			// 동적 메모리 할당을 위함

/*
// 조건 1. 프로그램 실행 이전에 각각 어떤 값이 출력될지 생각해 보기
int main() {
	char* p = "KOREA";
	
	printf("%s \n", p);			// KOREA
	printf("%s \n", p+3);		// EA
	printf("%c \n", *p);		// K
	printf("%c \n", *(p+3));	// E
	printf("%c \n", *p+2);		// M
}
*/

/*
// 조건 1. 정수형 배열과 포인터 선언
// 조건 2. 사용자로부터 정수 세 개를 입력받아 배열에 저장 (for문 이용)
// 조건 3. 입력한 세 정수의 합을 구하되 포인터 개념을 사용하여 계산할 것 (for문 이용)
int main() {
	int num[3];		// 배열
	int* p_num;		// 포인터

	// num[0] == *p_num
	// &num[0] == p_num
	int total = 0;

	for (int i = 0; i < 3; i++) {
		printf("%d번째 숫자 입력 > ", i + 1);
		scanf_s("%d", &num[i]);		// 배열에 입력한 값 저장
	}

	p_num = num;					// 포인터에 배열의 시작 주소(num[0]) 대입

	// 포인터로 선언된 p_num을 예로 들면
	// num[0]		num[1]			num[2]				↓ 값으로 비교
	// *p_num		*(p_num+1)		*(p_num+2)
	// &num[0]		&num[1]			&num[2]				↓ 주소로 비교
	// p_num		p_num+1			p_num+2
	// 세로로 한 줄씩 같은 의미 (num[0] == *p_num / &num[0] == p_num)

	for (int i = 0; i < 3; i++) {
		total = total + *(p_num + i);
	}
	printf("입력한 수의 합 > %d", total);
}
*/

/*
// 같은 조건으로 코드를 작성하되 동적 배열로 변환해서 작성하기 (malloc 사용)
// 대신 사용자에게 배열의 크기 입력받기 ("입력할 숫자의 개수 > " 문구 출력)
int main() {
	int total = 0, cnt = 0;

	printf("입력할 숫자의 개수 > ");
	scanf_s("%d", &cnt);

	int* p_num = (int*)malloc(sizeof(int)*cnt);		// 동적 크기 할당

	for (int i = 0; i < cnt; i++) {
		printf("%d번째 숫자 입력 > ", i + 1);
		scanf_s("%d", p_num + i);
	}

	for (int i = 0; i < cnt; i++) {
		total = total + *(p_num + i);
	}
	printf("입력한 숫자의 합 > %d", total);
	free(p_num);
}
*/

/*
// 조건 1. 정수형 포인터를 동적 메모리로 선언
// 조건 2. 사용자로부터 배열의 크기와 숫자를 입력받고 개중 짝수의 합만 출력
int main() {
	int total = 0, cnt = 0;

	printf("입력할 숫자의 개수 > ");
	scanf_s("%d", &cnt);

	int* p_num = (int*)malloc(sizeof(int) * cnt);		// 동적 메모리

	for (int i = 0; i < cnt; i++) {
		printf("%d번째 숫자 > ", i + 1);
		scanf_s("%d", p_num + i);
	}

	for (int i = 0; i < cnt; i++) {
		if (p_num[i] % 2 == 0) total = total + p_num[i];
		//if (*(p_num + i) % 2 == 0) total = total + *(p_num +i);
	}

	printf("입력한 숫자 중 짝수의 합 > %d", total);
	free(p_num);
}
*/

/*
// 조건 1. 사용자로부터 자연수 두 개 (x, y) 입력받기
// 조건 2. 만약 사용자가 x나 y에 0 또는 음수를 입력하였을 경우 오류 메세지 출력 후 다시 입력받기
// 조건 3. x*y의 크기를 갖는 이차원 동적 배열 선언 (malloc 사용)
// 조건 4. arr[0][0]부터 arr[x][y]까지 순서대로 1부터 x*y의 값 저장
// 조건 5. arr[0][0]부터 arr[x][y]까지 출력
int main() {
	int x, y;

	while (true) {
		printf("x와 y의 값을 입력하세요 > ");
		scanf_s("%d %d", &x, &y);

		if (x > 0 && y > 0) break;
		else printf("**입력 오류** 자연수만 입력 가능합니다 \n");
	}

	int* arr = (int*)malloc(sizeof(int) * x * y);

	int value = 1;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i * y + j] = value;
			value++;
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%2d", arr[i * y + j]);
		}
		printf("\n");
	}
	free(arr);		// 메모리 해제
	return 0;		// 프로그램 정상 종료
}
*/