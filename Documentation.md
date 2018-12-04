# Mathematics Assignment 1 - "Number Theory"

## LO4: "Use applied number theory in practical computing scenarios"

### Part 1

**A:** 

> "A small local catering company provides hot dog served in buns at local events. The owner has to order the hot dogs and the buns and wants to ensure that however many are ordered, there are the same number of hot dogs and buns."

> "The hot dogs usually come in packages of 8 although this can vary depending on the supplier."
> "The buns usually come in packages of 12 but like the hot dogs this can vary."

> "The owner would like an app that will determine the appropriate number of number of packages of hot dogs and buns to order given: 
>
 >- A specified minimum number of servings that must be catered for and
 >- The number of items per package if different from usual."

To be able to work out the minimum number of servings that must be catered for, the 'Lowest Common Multiple' (LCM) must be calculated of the two numbers: 8 and 12:

*{Multiples of 8}:* 8, 16, **24**, 32, 40...

*{Multiples of 12}:* 12, **24**, 36, 48...

From listing out the multiples of both numbers, it can be clearly seen that 24 appears to be the lowest common multiple of 8 and 12.

**Therefore, the minimum number of servings that must be catered for is *24*.**

To answer the second part which asks for the appropriate number of items per package if different from usual, the 'Highest Common Factor (HCF) must be calculated of the numbers 8 and 12:

*{Factors of 8}:* 1, 2, **4**, 8

*{Factors of 12}:* 1, 2, 3, **4**, 6, 12

From listing out the multiples of both numbers, it can be concluded that 4 appears to be the HCF of both 8 and 12.

**Therefore the appropriate number of items per package if different from usual would be *4*.**

A piece of code written in C++ was created to solve this problem aswell, for any given number of hot dogs and buns per package. It can be found in the same repository as this markdown file. It uses Euclid's algorithm for finding the HCF of any two given numbers, as well as finding the LCM of them too.

Euclid's algorithm featured in the code:

    int a,b,c;

    cout << "Please enter the number of hot dogs that come in a single package: ";
    cin >> a; 
    cout << "Please enter the number of buns that come in a single package: ";
    cin >> b;
    
    c=a*b; 
    
    while(a!=b) { 
	    if(a>b) 
		a=a-b; 
	    else 
		b=b-a; 
    }

    cout << "The minimum number of items per package if different from usual is " << a << endl; 
    cout << "The minimum number of servings that must be catered for is " << c/a << endl;

**B:**

> "At weekends there are often two events. The owner packs the buns into plastic containers. Each container has the same number of buns. If 288 buns are needed for one event and 660 buns are needed for another, determine the maximum number of buns per container so that a whole number of containers can be taken to each event." (Using Euclid's Algorithm for finding the HCF)

    660 = (288 x 2) + 84
    288 = (84 x 3) + 36
    84 = (36 x 2) + 12
    36 = (12 x 3) + 0

**The zero remainder has been reached, therefore the HCF of 288 and 660 is *12*.**

### Part 2

**A:**

> "You have decided to save some money during the six-week holiday. You save 1p on the first day, 2p on the second day, 3p on the third day and so on. How much will you have at the end of the holiday (42 days)?"

The question establishes the following series up to the 42nd term:

1 + 2 + 3 + ... + 41 + 42

This is an arithmetic sequence. Therefore, in order to summate the numbers together, the following formula has to be used:

![](https://i.imgur.com/KhQIIpE.png)

In this context:

 - n = 42 (Number of terms in the series)
 - a = 1 (First number in the series)

So when substituting the values into the formula...

![](https://i.imgur.com/sMIf1Sg.png)

The answer comes out as *903*

**In its full context: The money found at the end of the holiday is *£9.03*.**

**B:**

> "A friend of yours runs a charity marathon. He manages to run the first mile in 6 minutes but takes 5% longer for each subsequent mile of the 26-mile race. How long does it take him to complete the race? Give your answer to the nearest second." (Show all your workings)

There are two steps to reaching the solution to the problem:

 1. Work out the amount of time taken to complete each mile of the race.
 2. Summate the times together (Preferably using a summation formula).

If the first mile takes 6 minutes, and each mile after takes an additional 5%, then the following pattern can be noticed:

1st mile: 6 mins

2nd mile: 6 x 1.05 mins

3rd mile: 6 x (1.05)^2 mins

4th mile: 6 x (1.05)^3 mins

.

.

26th mile: 6 x (1.05)^25 mins

The pattern has now been observed and the first step towards the solution is complete. Next, a formula will be used to summate the times to work out the total time. 

Formula:

![](https://i.imgur.com/FOk1TrX.png)

In context:

![](https://i.imgur.com/KJiozT6.png)

This gives the answer in minutes. 

*The total number of minutes is: 286.36...*
*In seconds:  17181.75...*
***To the nearest second: 17182 seconds.***

### Part 3

> "Find a multiplicative inverse modulo **9** of each of the following integers."

**A:** *1*

1 x 0 = 0. Remainder = 0

1 x **1** = 1. Remainder = 1 {ANSWER REACHED: **1**}

**B:** *5*

5 X 0 = 0. Remainder =  0

5 x 1 = 5. Remainder = 5

5 x **2** = 10. Remainder = 1 {ANSWER REACHED: **2**}

**C:** *7*

7 x 0 = 0. Remainder = 0

7 x 1 = 7. Remainder = 7

7 x 2 = 14. Remainder = 5

7 x 3 = 21. Remainder = 3

7 x **4** = 28. Remainder = 1 {ANSWER REACHED: **4**}

**D:** *16*

16 x 0 = 0. Remainder = 0

16 x 1 = 16. Remainder = 7

16 x 2 = 32. Remainder = 5

16 x 3 = 48. Remainder = 3

16 x **4** = 64. Remainder = 1 {ANSWER REACHED: **4**}

> "Show that each of the following integers doesn't have a multiplicative inverse modulo 9."

**A:** *0*

In the real _numbers_, zero _does not have_ a _reciprocal_ because _no_ real _number_ multiplied by 0 produces 1 (the product of any _number_ with zero _is_ zero).

**B:** *6*

6 does not have a multiplicative inverse modulo 9 because the numbers 6 and 9 share a common prime factor which is 3.

**C:** *18*

18 does not have a multiplicative inverse modulo 9 because the numbers 18 and 9 both share common prime factors which are 2 and 3.

### Part 4

> "Produce a detailed written explanation of the importance of prime numbers within the field of computing."
