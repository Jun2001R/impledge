The Program takes an integer N as input. N means there are N words in a vector. 
After that program takes N strings as input and stores in a vector of string and 
then we insert these strings in to the Root TrieNode. If the maximum length of string 
is K. It takes O(N*K) time to insert all words in root TrieNode. In code, ‘check’
function is iterating on every string and inside check function ‘contains’ function 
is present, it is checking that Is substring of a string available as a string in our 
vector of strings or not? If the selected string is compound string then store it in 
variable and after sorting in descending order according to their length, first two strings are the answer. 
‘contains’ function have time complexity O(K) , ‘Check’ function have time 
complexity O(K^2) and ‘solve‘ function have time complexity = O(N*K) + O(K^2) + 
O(N*K^2)(Time complexity of for loop in solve function where one by one strings are passing in check function) + O(NLogN)(time complexity of sort function). 
In Both Test Cases Length of word is very less than the maximum length of list of 
words (100,000+). So K is a Constant then Time Complexity of whole code is
O(N*LogN)
