//
// Created by sinigr on 12.11.2018.
//

#ifndef VANDERVURDTEMPLATES_CHAPTER2_H
#define VANDERVURDTEMPLATES_CHAPTER2_H

// Глава 2. Шаблоны классов

/*Шаблон класса обычно выполняет несколько операций над аргументами шаблона,
для которых он инстанцируется (в том числе конструирование и уничтожение).
Это может привести к впечатлению, что аргументы шаблона должны
предоставлять все операции, необходимые для всех функций-членов шаблона
класса. Но это не так: аргументы шаблона обязаны предоставлять только те операции,
которые необходимы (а не те, которые могут потребоваться).*/

/*
Для того чтобы определить функцию-член шаблона класса, нужно указать, что это шаблон функции;
*/

// 2.5 Специализация шаблонов классов
/*
 * Для шаблона класса можно определить специализацию этого класса для конкретного типа,
 * чтобы оптимизировать его работу для этого типа или исправить поведение.
 * При специализации нужно специализировать все функции. Можно специализировать и
 * одну функцию член, но потом нельзя будет специлизировать весь шаблон, которому принадлежит
 * специализированная функция-член.
 */

#include <vector>

namespace ch2 {

    template <typename T>
    class Stack {
    private:
        std::vector<T> data;

    public:
        Stack() = default;

        void push(const T& element);

        const T& top();

        void pop();
    };

  template<typename T>
  void Stack<T>::push(const T &element) {
      data.push_back(element);
  }

  template<typename T>
  const T &Stack<T>::top() {
      if (data.empty()) {
          // TODO Throw exception
      }

      return data.back();
  }

  template<typename T>
  void Stack<T>::pop() {
      data.pop_back();
  }

}

#endif //VANDERVURDTEMPLATES_CHAPTER2_H
