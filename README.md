The Program takes an integer N as input. N means there are N strings. After that program takes N strings as input and then we insert these inputs in to the Root TrieNode. 

It takes O(N^2) time space to insert all strings in root TrieNode. In code, ‘check’ function is iterating on every inserted string and inside check function ‘contains’ function is present, it is checking that is substring of a particular string is available as a string in our vector of strings or not. ‘Check’ and ‘contains’ functions have time complexity O(N) because these are iterating on particular string and solve function have time complexity O(N^2). 

Finally we are storing compound strings in a variable and after sorting in descending order, first two strings are the answer.
