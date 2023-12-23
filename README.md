# ft_printf: Now it makes sense

---

</p>
<p align="center">
<img src="https://media0.giphy.com/media/v1.Y2lkPTc5MGI3NjExYnh2YWs3a2JoZjR5ancwaW44MXNpdzR5eTY3bHQ4aTBienliNTZtZCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/vgUFOWBwBkziE/giphy.gif" width="500">
<p/>

## What is ft_printf?
The ft_printf function in C allows you to print formatted output to the console. It mimics the behavior of the standard printf function and offers you a wide range of format specifiers to control the appearance of your output.

## Getting Started
### Prerequisites
Before you dive into ft_printf, ensure that you have a solid foundation in C programming and are comfortable with the Unix environment. You'll need a C compiler (e.g., GCC) and a Unix-like operating system (Linux or macOS).

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

## How to Use
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
## Format Specifiers
ft_printf provides an array of format specifiers to format different types of data. Here are some of the mandatory conversions:

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

## Examples
#### To help you grasp the power of ft_printf, let's dive into some examples:
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
## 🧙‍♂️ About the Wizard Behind the Keyboard
>23 years old sorcerer of software engineering, delving into the depths of coding, one spell (I mean, function) at a time.



