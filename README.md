# ft_printf: Now it makes sense

---
Welcome to the ft_printf project, an essential coding endeavor that's as fundamental to a software engineer as paper is to the folks at Dunder Mifflin in Scranton. Just like how every sheet of paper at Dunder Mifflin has its unique purpose, ft_printf lets you format and print your output with precision and style.

</p>
<p align="center">
<img src="https://media0.giphy.com/media/IJLVLpZQuS4z6/giphy.gif" width="700">
<p/>

## What is ft_printf?
ft_printf is your coding counterpart to the standard office printer, but with more flair. Mimicking the functionality of the classic printf function in C, it offers an array of format specifiers, turning your console outputs into well-formatted presentations, much like a beautifully printed report on premium Dunder Mifflin paper.

## Getting Started
### Prerequisites
Before you start printing your work like a pro, make sure you're well-versed in the C language and comfortable in a Unix environment. Equip yourself with a C compiler (like GCC) and a Unix-like OS (Linux or macOS), just like having your own desk and computer at Dunder Mifflin.

### Installation
1. Clone the repository to your local machine:
```
git clone https://github.com/abouguri/ft_printf.git
```
2. Navigate to the project directory:
```
cd ft_printf
```
3. Compile the library:
```
make
```
This will generate a ftprintf.a library that you can link with your C programs.

## How to Use: Printing Your First Memo
Include the header and start formatting like you're drafting the next Scranton branch memo:
```
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
This code will print:
```
Hello, world!
```
## Format Specifiers: The Art of Printing
ft_printf offers a variety of format specifiers, akin to choosing the right type of paper and ink for each print job at Dunder Mifflin:

>%c - Print a single character.

>%s - Print a string of characters.

>%p - Print a void * pointer argument in hexadecimal.

>%d - Print a decimal (base 10) number.

>%i - Print an integer in base 10.

>%u - Print an unsigned decimal (base 10) number.

>%x - Print a number in hexadecimal (base 16, lowercase).

>%X - Print a hexadecimal integer (uppercase).

>%% - Print just the % character.
You can use these format specifiers to control the appearance of your output and display different data types.

## Examples: The Michael Scott of Demonstrations
#### Let's dive into some examples, as fun as Michael's meetings:
Printing Integers:
```
int num = 42;
ft_printf("The answer is: %d\n", num);
```
Printing Strings:
```
ft_printf("Let's learn %s together!\n", "format printing");
```
Printing Hexadecimal Values:
```
int hex_value = 0xA1F;
ft_printf("Hexadecimal value: %X\n", hex_value);
```

"Sometimes I'll start a sentence and I don't even know where it's going. I just hope I find it along the way."
