## Logical Bitwise Operations:

### AND (&), OR (|), NOT (~), XOR (^)

|   x   |   y   | AND (&) | OR (|) | NOT (~) | XOR (^) |
|-------|-------|---------|--------|---------|---------|
|   0   |   0   |    0    |   0    | REVERT  |    0    |
|   0   |   1   |    0    |   1    |         |    1    |
|   1   |   0   |    0    |   1    |         |    1    |
|   1   |   1   |    1    |   1    |         |    0    |

### Left Shift (<<) & Right Shift (>>):

- **Left Shift (`<<`):** The bits of a number are shifted towards the left. Each bit position is increased by a power of 2 according to the given number. It effectively multiplies the original number by 2 raised to the power of the specified shift count.

- **Right Shift (`>>`):** The bits of a number are shifted towards the right. Each bit position is decreased by a power of 2 according to the given number. It effectively divides the original number by 2 raised to the power of the specified shift count.

## Operator Precedence:

| Precedence | Operators                     | Description                        |
|------------|-------------------------------|------------------------------------|
| 1          | () [] . ->                    | Postfix operators                  |
| 2          | ++ -- + - ! ~ & * sizeof      | Unary operators                    |
| 3          | * / %                         | Multiplicative operators           |
| 4          | + -                           | Additive operators                 |
| 5          | << >>                         | Shift operators                    |
| 6          | < <= > >=                     | Relational operators               |
| 7          | == !=                         | Equality operators                 |
| 8          | &                             | Bitwise AND                        |
| 9          | ^                             | Bitwise XOR                        |
| 10         | \|                            | Bitwise OR                         |
| 11         | &&                            | Logical AND                        |
| 12         | \|\|                          | Logical OR                         |
| 13         | ? :                           | Conditional operator               |
| 14         | = += -= *= /= %= &=           | Assignment operators               |
|            |   ^= \| = <<= >>=             |                                    |
| 15         | ,                             | Comma operator                     |


