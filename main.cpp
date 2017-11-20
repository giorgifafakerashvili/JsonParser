#include <iostream>

#include "janson.h"
#include "hashtable.h"


struct User {
    char* name;
    char* lastname;
    int age;
};


void User_init(struct User* user) {
    user->name = "giorgi";
    user->lastname = "fafakerashivli";
    user->age = 21;
}

int main() {

    User user;
    User_init(&user);

    char str[100];
    sprintf(str, "%s %s %d", user.name, user.lastname, user.age);
    printf(str);
    return 0;
}