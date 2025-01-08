#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct student sv;

    strcpy(sv.name, "Bui Van Hung");
    sv.age = 19;
    strcpy(sv.phoneNumber, "0123456789");

    printf("Ho va ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}

