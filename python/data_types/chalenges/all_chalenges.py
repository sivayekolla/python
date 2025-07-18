"""1. How does Python handle integer overflow, and what happens if you assign a value greater than what a C/C++ int would allow?
Python automatically allows integers to grow as large as needed. Instead of overflowing like in C or C++, Python simply uses more memory to store bigger numbers, 
so you won’t hit an artificial limit.

2. Explain the difference between mutable and immutable data types in Python, with practical examples.
Mutable data types can be changed after they’re created, such as lists where you can add or change elements. 
Immutable types, like strings or numbers, cannot be changed once created; if you want something different, you must make a new object.

3. What is the output and data type of the expression: 3 + 4.0 * 2 // 3? 
Explain each step.
The calculation involves multiplying, dividing, and then adding. It results in a floating-point number, specifically five point zero, because mixing whole numbers and 
decimals in Python often leads to a decimal result.

4. How does Python’s dynamic typing affect performance and debugging in large applications?
Dynamic typing makes Python flexible because you don’t have to declare types up front. However, it can slow things down because the language 
must keep track of types at runtime. In big programs, it also makes bugs harder to find since type errors only appear when you actually run the code.

5. Describe the difference between is and == when comparing variables. Provide an example where they behave differently.
The word is checks if two things are actually the exact same object in memory, while == checks if their contents are equal, even if they’re separate objects.
 So two lists might be equal in contents but not be the same object.

6. Can you modify a string in place in Python? If not, explain why with reference to data types.
No, you can’t. Strings in Python are immutable, which means once a string is created, you cannot change its characters directly. 
Instead, you have to create a new string if you want different content.

7. Given the code where x starts as 3, becomes 5.0, is converted to a string, and has “1” added, what is the final value and type of x?
At the end, x would hold the text “5.01” as a string, because numbers turned into strings and then combined with other text become one continuous piece of text.

8. Why does the following code throw an error, and how can you fix it?
Combining text and numbers directly causes an error because Python doesn’t automatically turn numbers into text when joining them with words. 
To fix it, you need to explicitly convert the number into a string or use a format that mixes words and numbers safely.

9. What is typecasting? Provide examples where implicit and explicit type conversions may cause bugs.
Typecasting means changing one type of value into another, like turning text into numbers. 
Bugs can happen if a value can’t be converted properly, or if a program automatically changes types and you’re not expecting it, leading to surprising results.

10. How does Python treat Boolean values as integers? Show an example where this is useful.
In Python, True behaves like the number one, and False behaves like zero. This is helpful when doing calculations or counting, 
because you can treat conditions as numbers without extra steps.

11. Explain the concept of interning in Python strings and its effect on variable comparison.
Interning means Python sometimes stores identical strings only once in memory to save space and speed up comparisons. 
Because of this, two separate variables might end up pointing to the same memory location if they hold the same simple text.

12. What is the significance of the id() function when working with variables of immutable and mutable types?
The id() function tells you the unique identity of an object in memory. 
For immutable objects, a new identity often appears when you change their value, while mutable objects tend to keep the same identity even if their contents change.

13. Why can’t variable names start with a number in Python? What are some other restrictions on variable names?
Variable names can’t start with numbers because Python needs to tell names apart from actual numbers in the code.
 Other rules include avoiding spaces, punctuation, and reserved words like “class” or “if.”

14. Describe what happens in memory when you create one list and assign it to another variable, then change one of the list’s items.
When you assign a list to a second variable, both variables refer to the exact same list in memory. So if you change something in the list through one name, 
the change shows up when you look at the list through the other name too.

15. How are global and local variables managed in Python functions? Provide an example that demonstrates an UnboundLocalError.
Python creates separate areas for variables inside functions and outside them. If you try to use a variable inside a function before assigning it there, 
Python complains because it thinks it’s local but finds nothing assigned yet, causing an UnboundLocalError.

16. Can two different variables refer to the same object in Python? How can you check this?
Yes, two different variable names can both refer to the same object in memory. You can check this by using a way to compare whether their identities match,
 rather than just their values.

17. When would you use the None data type? Give an example of a good use case.
None is used when you want to say “no value here” or “nothing to return.” 
A good example is a function that sometimes finds a result and sometimes doesn’t, so it returns None to signal the absence of a result.

18. Is it possible to store a function in a variable? Demonstrate how and why you might do this.
Yes, in Python you can store a function in a variable. This lets you treat functions like any other value and makes it easy to pass them around,
 such as giving a function as input to another function to customize behavior.

19. How does Python's handling of large integers differ from other languages like Java or C++?
Python automatically grows its integers to any size without you having to do anything special. 
In languages like Java or C++, you’d need special types or libraries to handle very large numbers, or you’d get overflow errors.

20. What is the difference between single quotes (') and double quotes (") in Python string assignment?
There’s no practical difference between single and double quotes in Python. They both work the same way, 
and people choose one or the other mainly to make it easier to include certain characters, like apostrophes or quotation marks, inside the string."""