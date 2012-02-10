1. Skip

2. Skip

3. Skip

4. Skip

5. Skip

6. Skip

7. Skip

8. Skip

9. You forgot the `l` at the end of `bool` 

10. `==` should be `!=`

11. `==` should be `!=` and you missed a `<` on `cout <<`

12. `if(s+"fool")` causes an error.  Should be `if(s!
="fool")`

13. Infinite loop checking if `0<v.size()`, should be `i<v.size`

14. No error.  Compiles and runs perfectly.

15. `s` is not an array, so you can't `cout << s[i]`.  Should just be `cout << s`

16. `then` is not valid syntax, remove it and the program compiles and runs.

17. The comparison will always be false because of the limited nature of the `char` data type.

18. The program will miss the first character because you increment `i` before the first loop.  Needs to be `i++` instead of `++i`

19. Also needs to be `i++` or else you will be trying to access a value that is not in the range of the vector

20. `i` will always be less than 10 because you never increment `i`.  Infinite loop.

21. 