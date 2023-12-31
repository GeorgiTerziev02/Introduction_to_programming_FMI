﻿
## Задачи

**1.** Да се напише функция, която приема матрица и връща най-малкия й елемент.

**Пример:**

Вход:
```c++
3 5 1 
6 2 4
9 0 8
```
Изход:
```c++
0
```

**2.** Да се напише функция, която приема квадратна матрица с **n** на **n** елемента отпечатва главния диагонал, след това и второстепенния.

**Пример:**

Вход:
```c++
1 2 3
4 5 6
7 8 9
```
Изход:
```c++
1 5 9
3 5 7
```

**3.** Да се напише функция, която по даден матрица отпечатва елементите ѝ на зиг-заг (първи ред отляво надясно, втори ред отдясно наляво и т.н.)

Вход:
```c++
1 2 3
4 5 6
7 8 9
```

Изход:
```c++
1 2 3 
6 5 4
7 8 9
```

**4.** Да се напише функция, която приема квадратна матрица с **n** на **n** елемента и връща дали матрицата е триъгълна, т.е. под главния диагонал има само нули.

**Пример:**

Вход:
```c++
5 1 5 
0 5 9
0 6 7
```
Изход:
```c++
0
```

Вход:
```c++
5 1 5 
0 5 9
0 0 7
```
Изход:
```c++
1
```
**5.** Да се напише функция, която транспонира квадратна матрица с **n** на **n** елемента.

**Пример:**

Вход:
```c++
1 2 3 
4 5 6 
7 8 9
```
Изход:
```c++
1 4 7
2 5 8
3 6 9
```

**6.** Една квадратна матрица от числа се нарича магически квадрат, когато всички суми, получени поотделно от сбора на елементите по всеки ред/всеки стълб/всеки от двата диагонала са равни. Да се състави функция, която приема квадратна матрица и определя дали образува магически квадрат. 

**Пример:**

Вход:
```c++
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
```
Изход:
```c++
yes //sum = 34
```

**7** Да се напише функция, която:
-  събира 2 матрици
- умножава матрица с число

**Пример:**

Вход:
```c++
1 2 3  
4 5 6

5 6 7
8 9 10
```

Изход:
```c++
6 8 10
12 14 16
```

```c++
1 2 3  
4 5 6

3
```

Изход:
```c++
3 6 9
12 15 18
```
**8.** Да се напише функция, която умножава 2 матрици.

Вход:
```c++
1 2
8 9
10 0
1 0
2 2

1 2 3 
4 5 2
```

Изход:
```c++
9 12 15
44 61 78
10 20 30
1 2 3
10 14 18
```
**9.** Да се напише функция, която приема матрица и принтира елементите й спираловидно, отвън навътре.

Вход:
```c++
1 2 3 
4 5 6
7 8 9
```

Изход:
```c++
1 2 3 6 9 8 7 4 5
```
**10.** Да се напише функция, която приема матрица и я обръща надясно.

Вход:
```c++
1 2 3 
4 5 6
7 8 9
```

Изход:
```c++
7 4 1
8 5 2
9 6 3
```

**11.** Напишете програма, която по въведени от потребителя размер n и двумерен масив с n * n елемента, определя дали той представлява магически квадрат.

Магически квадрат е ако сборовете по всички редове, колони и диагоналите са едни и същи.

    Пример:
    Вход:  3 
    1 2 3 1 2 3 1 2 3 

    // Това не е магически квадрат
    1 2 3 -> 6 
    1 2 3 -> 6
    1 2 3 -> 6
    | | |
    v v v
    3 6 9  

    Вход: 3
    13 8 5 14 12 10 9 16 11

    // Това е магически квадрат
            36
            /
    13  8 15 -> 36
    14 12 10 -> 36
    9  16 11 -> 36
    |  |  | \
    v  v  v  36
    36 36 36

**12.** Напишете функция, която приема матрица NxN+1 и решава системата от линейни уравнения, репрезентирана в матрицата.


*Вход*: 

3 2 5 0

2-3 4 10

2 1 1 4

*Изход: 4, -11.14, -12.85*

Тук се решава системата:

-3x + 2y - 5z = 0

2x - 3y + 4z = 10

2x + y + z=4

Тя има решение: x = 14, y = -78/4 (-11.14), z = -90/7 (-12.85).

Важно! 

Програмата трябва да засича, ако системата няма решение или има безкраен брой решения и да отпечата подходящо съобщение в този случай.

    
## Проект: Мinesweeper

Да се реализира в **конзолна** играта  **Мinesweeper**.
Целта на играта е да се разкрият всички квадратчета, които не съдържат мини , без да щракнем върху мина преди това. Разположението на мините може да се разбере логически, с помощта на цифрички, стоящи се на местата на квадратчетата след щракане върху тях. Цифрите показват колко квадратчета, в които има мини, има в съседство. Ако се щракне върху квадратче, което няма мини (стои числото 0)  в съседство, то разкрива съседните, ако някое от тези разкрити също няма мини в съседство, то също разкрива съседните квадратчета и тн...

![enter image description here](https://i.ibb.co/F4YY0ST/beginner.png)

[Онлайн версия на играта](http://minesweeperonline.com/#)


**Забележка: От вас не се изисква създаването на графичен интерфейс. Играта трябва да бъде конзолна апликация.**

В конзолата трябва да изпълнявате команди от вида:

> [command] [x coordinate] [y coordinate]

Където [command] е един от следните character-и **o** (open), **m** (mark) или **u** (unmark), а след него стоят координатите на квадратчето.

 - **open** - отваря квадратчето. Ако там седи мина - край на играта!
 - **mark** - маркира квадратчето като "мина". Ако всички мини са маркирани
   и всички други квардратчета са отворени, играта прилкючва с успех!
 - **unmark** - отмаркира квадрачето като "мина". Ако квадратчето не е било
   маркирано, то се извежда подходящо съобщение за грешка.

При започването на играта, потребителят трябва да може да избере на каква размерност да играе (3 <= N <= 10). След това трябва да избере колко мини да бъдат "скрити".
Броят трябва да е в интервала [1, 3N]. Ако някои от стойностите не са въведат правилно от потребителя, то трябва да се изведе подходящо съобщение и да бъде "приканен" да въведе отново.


