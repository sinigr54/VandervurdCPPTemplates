//
// Created by sinigr on 09.11.2018.
//

#ifndef VANDERVURDTEMPLATES_MAX1_H
#define VANDERVURDTEMPLATES_MAX1_H

template<typename T>
T max(T a, T b) {
    return a < b ? b : a;
}

// Тип параметра шаблона по умолчанию и значение по умолчанию
// Если не указать тип шаблона по умолчанию, то при вызове
// sample(); будет ошибка компиляции
template<typename T = int>
void sample(T a = 0);

// int x : T->int, ParamType->int
// const int x : T->int, ParamType->int
// const int& x : T->int, ParamType->int
// 24 : T->int, ParamType->int
template <typename T>
void example(T arg);

// int x : T->int, ParamType->int&
// const int x : T->const int, ParamType->const int&
// const int& x : T->const int, ParamType->const int&
// 24 : T->int, ParamType->int&
template <typename T>
void example(T& arg);

// int x : T->int, ParamType->const int&
// const int x : T->int, ParamType->const int&
// const int& x : T->int, ParamType->const int&
// 24 : T->int, ParamType->int&
template <typename T>
void example(const T& arg);

// int x : T->int&, ParamType->int&
// const int x : T->const int&, ParamType->const int&
// const int& x : T->const int&, ParamType->const int&
// 24 : T->int, ParamType->int&&
template <typename T>
void example(T&& arg);


#endif //VANDERVURDTEMPLATES_MAX1_H
