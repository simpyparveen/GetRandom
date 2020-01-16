# GetRandom
# Created by Simpy Parveen on 16th Jan 2020


If you really need actual random numbers and are on a Linux or BSD-like operating system, you can use the special device files /dev/random and /dev/urandom. These can be opened for reading like ordinary files, but the values read from them are a random sequence of bytes (including null characters). 

Both /dev/random and /dev/urandom derive their random bits from physically random properties of the computer, like time between keystrokes or small variations in hard disk rotation speeds. 

The difference between the two is that /dev/urandom will always give you some random-looking bits, even if it has to generate extra ones using a cryptographic pseudo-random number generator, while /dev/random will only give you bits that it is confident are in fact random. 

Since your computer only generates a small number of genuinely random bits per second, this may mean that /dev/random will exhaust its pool if read too often. In this case, a read on /dev/random will block (just like reading a terminal with no input on it) until the pool has filled up again. 

Ref : http://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Randomization.html
