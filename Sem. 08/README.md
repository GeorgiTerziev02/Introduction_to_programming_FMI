
## Побитови операции
Прилагат върху един бит или набор от повече отделни битове на двоични числа.

|  Operator      |   Description                                       |   
|  :---:         |     :---:                                           |
|   <<           | Bitwise left shift \| Побитово отместване наляво    |
|   >>           | Bitwise right shift \| Побитово отместване надясно  |
|   &            | Bitwise AND \| Побитово И                           |     
|   \|           | Bitwise OR  \| Побитово ИЛИ                         |
|   ~            | Bitwise NOT \| Побитово НЕ                          |
|   ^            | Bitwise XOR \| Побитово ИЗКЛЮЧВАЩО ИЛИ              |

<br />

|   a       |   b       |  a & b     |  a \| b    |   a ^ b     |   a << 2   |   a >> 2    |    ~a       |    ~b       |
| :---:     | :---:     |  :---:     |  :---:     |  :---:      |   :---:    |   :---:     |   :---:     |   :---:     |
| 101010100 | 100101110 | 100000100  | 101111110  |  001111010  |  101010000 |  001010101  |  010101011  |  011010001  |

<br />

Примери:

 - Функция, която с побитови операции проверява дали число е четно
 - Функция, която с побитови операции повдига 2 на степен k.

 - Изчистване на бит (да стане 0)
 - Вдигане на бит (да стане 1)
 - Връщане на стойност на бит
 - Слагане на подадена стойност на бит.
 - Reverse на бит

<h3>Задачи</h3>

**Задача 1:** Да се напише функция, която приема масив, в който всяко число се среща 2 пъти с изключение на едно число, което се среща веднъж.
Напишете функция, която приема такъв масив и връща кое е това число.
(Подсказка: използвайте побитови операции, за да постигнете линейно решение)

*Вход: [9 18 9 12 18 15 12], Изход: 15*

**Задача 2:** Напишете функция, която приема цяло число и връща броя на 1-ците в двоичния му запис.

*Вход: 189,  Изход: 6*

**Задача 3 :** Напишете функция, която приема цяло число и обръща най-десния бит в него, който е единица.

*Вход: 12, Изход: 8*

*Вход: 15, Изход: 14*

**Задача 4:** Напишете функция, която по подадено цяло число n и цяло число k и връща числото, което е "закодирано" в последните k бита на n.

*Вход: 15 2, Изход: 3*

*Вход: 189 3, Изход: 5*

*Вход: 189 4, Изход: 13*

**Задача 5:** Напишете функция, която приема цяло число n и цяло число k и връща дали k в двоичен запис (разглеждайки го без водещите 0-ли) е част от двоичния запис на n.

*Вход: 15 3, Изход: true*

*Вход: 13 5 Изход: true*

*Вход: 13 7, Изход: false*

**Задача 6:** Напишете функция, която приема масив(разглеждаме го като множество) и отпечатва всички негови подмножества.

*Вход: [1, 2, 3], Изход: [], [1], [2], [3], [1,2], [2,3], [1,3], [1,2,3]*

*Вход: [5, 3] Изход: [], [5], [3], [5, 3]*
