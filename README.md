## CS-210 Project Two

### Summarize the project and what problem it was solving.

This application allows users to see how their investments will grow over time.
It was created for the CS-210-11787-M01 Programming Languages 2024 course at Southern New Hampshire University.
This program helps teach students the concepts of fiscal responsibility (such as living within their means and spending less than they make)
via an interactive system. It shows how money grows with investing and the power of compound interest. 
This knowledge empowers users to make more informed choices about saving and investing for their future.

### What did you do particularly well?

I was focused on the organization and modularity of code, using object-oriented principles was helpful
to create a well-organized and modular code structure. By breaking down the functionality into different
classes and methods, such as the `InterestCalculator` class, the code became easier to manage, understand,
and extend in the future. I made sure that the code was well-documented with in-line comments that explained
the purpose of different sections and functions. The program accurately calculates the compounded interest
for each month and year based on user inputs.

### Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

The biggest area of improvement is to add unit-tests for my code. Unfortunately, the dependency management
for C++ projects are more difficult compared to Go or Java programming languages. The [Canon](https://conan.io/)
package manager allows to manage of dependencies for C/C++ projects, but it was challenging to integrate with old versions
of MS Visual Studio. Because of that, I decided to skip the creation of unit tests for the code.
Unit tests are very important in software development as it allow to measure of the coverage of sources by tests
and provide a safety net for the modification or refactoring of the code. 
Adding a graphical representation of the investment growth over time could improve user engagement and understanding.

### Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

The most challenging parts of the code to write were the input validation components because it involved anticipating
all possible incorrect or unexpected inputs that a user might enter. The program needed to handle these scenarios
without crashing or producing incorrect outputs. To overcome this challenge I researched best practices for input
validation in C++ and learned about common difficulties. I incorporated these practices into my code, including checking
for invalid types (like non-numeric characters in numeric fields), making sure that inputs were within logical ranges,
and handling edge cases. I also added descriptive error messages to guide users to correct their inputs. Testing this part
involved intentionally entering incorrect data to see how the program responded, and iteratively refining the validation
logic to handle more cases.
The tools and resources that I added to my support network were online resources like C++ reference documentation (cppreference.com)
and tutorials to understand specific functions, syntax, and best practices. Platforms like Stack Overflow and GitHub
provided knowledge where experienced developers shared solutions to similar problems. I often found that others had faced
and solved challenges similar to mine, which helped me learn different approaches and apply them to my work. 
I utilize Integrated Development Environments (IDEs) like Visual Studio, which provided built-in tools for debugging and testing.
These tools helped me step through the code, inspect variable values, and understand the flow of execution, making it easier
to pinpoint and fix errors.

### What skills from this project will be particularly transferable to other projects or course work?

Such a skill as understanding object-oriented programming (OOP) will be transferable to other projects that I have done
or will do in the future. Understanding concepts such as encapsulation, inheritance, and polymorphism allows for the creation
of modular, reusable, and maintainable code. These principles are widely applicable in software development,
whether building small-scale applications or large systems.
The process of breaking down complex problems into smaller, more manageable pieces helps in tackling new challenges by
analyzing the problem, planning a solution, and implementing it step-by-step.
Such a skill as input validation and error handling is transferable to other projects as well, it helps to make sure
that programs are user-friendly and resilient to crashes or unexpected behaviors,
which is important in almost every software development project.

### How did you make this program maintainable, readable, and adaptable?

To make the program maintainable, readable, and adaptable, I utilized such strategies as clear and consistent naming conversations
for variables, functions, and classes to make the code more understandable. When code is easy to understand, it becomes easier
to modify or extend. Clear names make it easier to identify where changes are needed, facilitating future adaptations.
Such a technique as modular design using functions and classes was helpful to enhance the program. Breaking the program down
into smaller, self-contained functions and classes promotes reusability and easier testing, easier to read because it encapsulates
specific functionality, allowing a reader to understand one part of the code without needing to comprehend the entire program at once.

### Application flow:
- Input data:
  - Initial Investment Amount
  - Monthly deposit
  - Annual Interest
  - Number of years
- Wait for user to press any key to continue
- Create a InterestCalculator instance using provided data
  - For each year, calculate the earned interest using the opening amount and the deposited amount
    - For each month, calculate the earned interest using the opening amount and the deposited amount
  - Print data for each month

To build, run:
```shell
cmake .
cmake --build .
```

Then execute the application:
```shell
./CS_210_Project_Two
```