#include "lib/cxx_lib.h"

#include <iostream>

#include "lib/person.pb.h"

demo::Person GetSomePerson() {
    demo::Person person;

    person.set_id(0);
    person.set_name("noname");
    person.set_email("some@yandex-team.ru");

    return person;
}

void SayHello() {
    std::cout << "Hi C++ Party" << std::endl;
    std::cout << GetSomePerson().DebugString() << std::endl;
}

int Square(int x) {
    return x * x;
}
