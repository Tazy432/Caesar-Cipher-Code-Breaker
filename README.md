# Caesar-Cipher-Code-Breaker
A program that breaks the Caesar Cipher code

(e.g. k nqxg err-2 = i love cpp)
The english vocabulary is quite predictable .For example E, T and A are the most numerous letters in the english writing , while Z, Q and j are the least numerous.
Knowing all the letter's appearance procentage we can break this type of cipher .
![Screenshot 2023-03-22 230936](https://user-images.githubusercontent.com/100218013/227038883-db2d557b-dbc0-4d11-a405-90e492c89ece.png)

STEPS

I

We shift all the letters by one ( e.g. donkey +1 = epolfz ) 
![image](https://user-images.githubusercontent.com/100218013/227038987-ff1f49de-267f-4987-8944-eeba516c39cc.png)


II

For every letter in our encoded text we compute the formula
(and implicitly the nrOfApparitons)
sum=sum+((nrOfApparitions-procentageOfAparitions)^2)/procentageOfAparition 

III

We repeat step (I+II) 25 times in search for the lowest sum .That sum
will represent the sum of the decoded text . We save the number of
steps I when we find the lowest sum
and we then shift our initial coded text and voila
the text is now decoded.
![image](https://user-images.githubusercontent.com/100218013/227039452-78b15364-e036-4b51-987c-48df05f0360b.png)



