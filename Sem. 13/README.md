### Сложност и алгоритми. Алгоритми за търсене и сортиране.
Сложност: Функция по големината на входа (N)

**Пример**: 

 - При търсене в масив - големината на входа е големината на масива
 -  При проверка число дали е просто - големината на входа е числото.

При анализа на алгоритми НЕ се интересуваме от точната функция!
Интересуваме се само то асимптотиката на функцията.
Колко бързо расте функцията при n->безкрайност.

Сравнение на функции f и g с параметър n:

![enter image description here](https://i.ibb.co/TP0Xrz4/ff.png)

Тук релациите за по-малко и по-равно не са тези, които познаваме. Тук визираме скоростта на растежа на функцията.

### Определяне на сложност по време и памет
Примери в Solutions - Complexity

Cheatsheet - https://www.bigocheatsheet.com/

![](https://devopedia.org/images/article/17/4996.1513922020.jpg)

### Алгоритми за търсене
* Linear Seach - сложност O(n)
* Binary Search - сложност O(log n)
* Lower bound binary search - сложност O(log n)
* Upper bound binary search - сложност O(log n)

### Алгоритми за сортиране

Как работят нагледно: https://visualgo.net/en/sorting

Разгледайте качените cpp-та успоредно с интерактивните примери в visualgo

*Стабилна сортировка - сортировка, при която два елемента с еднакви стойности остават в същата последователност в сортирания масив, в каквато са били и в първоначалния

В курса по УП ще разгледаме следните сортировки:

**Note!**: Не трябва да знаете свойствата, които не са показани в час

#### Bubble sort (stable)
  ![image](https://github.com/GeorgiTerziev02/UP-Private/assets/49128895/ebfffec3-f823-4a59-bbde-dc1b90d40700)

#### Insertion sort (stable)
  ![image](https://github.com/GeorgiTerziev02/UP-Private/assets/49128895/5091b11f-f288-4f08-a4da-92a4d7368e0d)

#### Selection sort (unstable)
  ![image](https://github.com/GeorgiTerziev02/UP-Private/assets/49128895/ca5fa75c-8727-453f-b1d6-1360ae154613)

#### Counting sort (stable)
  ![image](https://github.com/GeorgiTerziev02/UP-Private/assets/49128895/893e78da-b443-42d8-b7ff-3603127d1c09)
