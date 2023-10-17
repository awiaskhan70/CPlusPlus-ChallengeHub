### Topic 9: C++ Classes and Inheritance

**Challenge:**

Create a C++ program that demonstrates the concept of inheritance by defining a base class and one or more derived classes. Here are the requirements:

1. Define a base class called `Shape` with the following attributes and member functions:
   - Attributes:
     - `name` (string): to store the name of the shape.
   - Member functions:
     - A constructor that initializes the `name` attribute.
     - A virtual function `area()` that calculates and returns the area of the shape (return 0.0 in the base class).
     - A virtual function `perimeter()` that calculates and returns the perimeter of the shape (return 0.0 in the base class).
     - A function to display the name, area, and perimeter of the shape.

2. Create two derived classes, `Rectangle` and `Circle`, that inherit from the `Shape` class.

3. For each derived class:
   - Add attributes specific to that shape (e.g., `length` and `width` for `Rectangle`, `radius` for `Circle`).
   - Implement the `area()` and `perimeter()` functions to calculate the area and perimeter of the respective shape.
   - Override the display function to include the specific attributes of the shape.

4. In the `main` function, create instances of both `Rectangle` and `Circle`, set their attributes, and display their details.

This challenge will test your understanding of inheritance, virtual functions, and polymorphism in C++.