#include <stdio.h>

struct student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct student sv;

	printf("Nhap thong tin sinh vien:\n");
    printf("Ho va ten: ");
    fgets(sv.name, sizeof(sv.name), stdin);

    printf("Tuoi: ");
    scanf("%d", &sv.age);

    printf("So dien thoai: ");
    scanf("%s", sv.phoneNumber);
	printf("\n"); 
    printf("Ho va ten: %s", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s", sv.phoneNumber);

    return 0;
}

