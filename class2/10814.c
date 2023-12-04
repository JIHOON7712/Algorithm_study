#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101]; //100이면 오류 남(NULL문자를 위해 +1 해줘야됨)
} Person;

// 비교 함수
int compare(Person* a, Person* b) {
    return (a->age > b->age ? 1 : (a->age < b->age ? -1: 0));
}

int main() {
    int num;
    scanf("%d", &num);
    while(getchar() != '\n');

    Person people[num];

    for (int i = 0; i < num; i++) {
        // 나이와 이름을 배열에 직접 입력받음
        scanf("%d %s", &(people[i].age), people[i].name);
        while(getchar() != '\n');
    }

    // qsort 함수를 사용하여 배열 정렬
    qsort(people, num, sizeof(Person), compare);

    // 정렬된 배열 출력
    for (int i = 0; i < num; i++) {
        printf("%d %s\n", people[i].age, people[i].name);
    }

    return 0;
}