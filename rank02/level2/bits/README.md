*NEW THEMES : BYTES - BITWISE OPERATORS *

Most of the information is here : https://github.com/agavrel/42-Bitwise_Operators/blob/master/1.2_reverse_bits.c

** NB : an integer contains 4 bytes, as one byte = 8 bits it means that an integer is equivalent to 32 bits.  
** octet and byte means the same thing.  
** an unsigned char has only 1 byte (8 bits).   
** Now what is a bit ? It is simple, a bit is either true or false,  
** equal to 1 or to 0. Binary is same as our decimal system except base  
** is 2 instead of 10: 1 will be 1 but 10 will be 2 and 11 will be 3.  
** to illustrate better this system take a glance at the table below :  

** base 10 <=> base 2  
** 1 <=>  1     4 <=>  100  
** 2 <=> 10     5 <=>  101      and so on...  
** 3 <=> 11     6 <=>  110  

** Read more : https://en.wikipedia.org/wiki/Bit  


In most computer systems, a byte is a unit of data that is eight binary digits long. A byte is the unit most computers use to represent a character such as a letter, number or typographic symbol. Each byte can hold a string of bits that need to be used in a larger unit for application purposes. As an example, a stream of bits can constitute a visual image for a program that displays images. Another example is a string of bits that constitute the machine code of a computer program.

A bit is represented by a lowercase b. While a byte can hold a letter or symbol, a bit is the smallest unit of storage, storing just one binary digit. The standard number of bits in a byte is eight, but that number can vary from system to system, depending on the hardware. Bitwise operators are operators (just like +, '*', &&, etc.) that operate on ints and uints at the binary level. This means they look directly at the binary digits or bits of an integer. 

& -> AND  
| -> OR  
~ -> NOT  
<< -> LEFT SHIFT  
'>>' -> RIGHT SHIFT  

**BITWISE (&) AND OPERATOR**

It takes two bits at a time and perform AND operation.
AND (&) is a binary operator, it takes two numbers and perform bitwise AND.
Result of AND is 1 when both bits are 1. 

So 7 bitwise & 4 is 4.

![image](https://user-images.githubusercontent.com/113340699/208085688-2b46d7b9-1dbd-43c1-8e3e-22638262bfd2.png)


**BITWISE (|) OR OPERATOR**

It takes two bits at a time and perform OR operation. 
OR (|) is a binary operator, it takes two numbers and perform bitwise OR. 
Result of OR is 0 when both bits are 0.

![image](https://user-images.githubusercontent.com/113340699/208086120-ac057de6-f627-4755-8cd3-6109756894cb.png)


**BITWISE (~) NOT OPERATOR**

NOT is a unary operator. 
It's job is to complement each bit one by one. 
Result of NOT is 0 when bit is 1 and 1 when bit is 0.

![image](https://user-images.githubusercontent.com/113340699/208086399-f42238cd-c7d2-4507-8aa5-51b24babd59d.png)

**BITWISE (<<) LEFT SHIFT OPERATOR**

It is a binary operator, It takes First operand << Second operand.
First operand is the one whose bits get left shifted.
Second operand decides the number of places to shift the bits.

Important to note :  
1. When bits are shifted left then *trailing* positions are filled with zeros.  
2. Left shifting is equivalent to multilication by 2 power rightOperand.


var = 3  
3 = 0000 0011  

var << 1  
3 = 0000 0110   
Result is 6 which, in binary, is 0000 0110 [and 6 is 3 * 2 power 1]

var << 4 
3 = 0011 0000   
Result is 48 which, in binary, is 0011 0000 [and 48 is 3 * 2 power 4]


**BITWISE (>>) RIGHT SHIFT OPERATOR**

It is a binary operator, It takes First operand >> Second operand.
First operand is the one whose bits get right shifted.
Second operand decides the number of places to shift the bits.


Important to note :  
1. When bits are shifted right then *leading* positions are filled with zeros.  
2. Right shifting is equivalent to division by 2 power rightOperand.


var = 3  
3 = 0000 0011  
var >> 1  
3 = 0000 0001   
Result is 1 which, in binary, is 0000 0001 [and 1 is 3 / 2 power 1]

var = 32
32 = 0010 0000 
var >> 4 
32 = 0000 0010 
Result is 2 which, in binary, is 0000 0010 [and 2 is 32 / 2 power 4]

**BITWISE (XOR) EXCLUSIVE OR OPERATOR**

INCLUSIVE OR  
If eiter A or B is 1, output is 1.
If both A and B are 1, output is 1.
Both combinations are included. 

EXCLUSIVE OR
If either A or B is 1, output is 1.
This operator excludes the case where both A and B are 1.

![image](https://user-images.githubusercontent.com/113340699/208089803-f25a52fc-d7b6-40ed-9b89-c5bc4816cc87.png)

Bitwise XOR (^) is a binary oerator. It takes two numbers and perform bitwise XOR. 
The result of XOR is 1 when two bits are different, otherwise the result is 0.

![image](https://user-images.githubusercontent.com/113340699/208090273-be9070ef-7763-44f2-9f4d-e8c6c591aa30.png)



TO DO :
- read more on number systems : https://code.tutsplus.com/articles/number-systems-an-introduction-to-binary-hexadecimal-and-more--active-10848
- great ressource : https://code.tutsplus.com/articles/understanding-bitwise-operators--active-11301

