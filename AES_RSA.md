The interviewers' accent is too strong for me. 
I have a tough time figuring out what they are asking.

These questions are given by Continental China representative.

# 1)What is the difference between AES and RSA? #
(Cant hear clearly so I answered asymmetric encryption. 
Then she asked further. I avoided further answering her by digressing.)

AES is a symmetric block cipher algorithm, the successor of the DES. 
It's used to encode files, documents, etc. 
It works fast and is very sure. For encoding and decoding you use the same key. 
If you wish to use AES for communication (enocde a message), the receiver has to have the key, so there is a key exchange problem.

RSA is very computationally expensive by comparison with AES. 
It involves mathematics with very large numbers, whilst AES can be implemented with relatively simple bit operations. 
The larger the data, the more you feel the pain.


A good compromise is to use RSA to encrypt the symmetric key that is then used in AES encryption of the larger data.

This problem is solved using asymmetric algorithms like RSA. 
Here the sender encodes a message using a private key. 
The receiver decodes the message with the public key. 
Everyone can use this public key. So, the receiver can decode the message. 
Asymmetric algorithms are quite slow, so key exchange works with asymmetric algorithms, encoding of data with symmetric algorithms. 
Both are quite easy to implement.


https://en.wikipedia.org/wiki/Advanced_Encryption_Standard
https://en.wikipedia.org/wiki/RSA_(cryptosystem)
https://en.wikipedia.org/wiki/SHA-1

# 2)What is the threats and vulnerabilities? #

# 3)How do you assess them and the risks? #

//Gifted kid == Lack of sleep for parents. I say I don't know although I know something. Scared the more I answer, 
she, the interviewer asks somemore in solid accent.

I also messed up the whiteboard "simple coding". Probabilty of an array/collection of numbers.
Can't even write straight in the morning.
