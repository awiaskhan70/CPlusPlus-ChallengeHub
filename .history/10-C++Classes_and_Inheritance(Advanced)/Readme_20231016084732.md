### Topic 10: C++ Classes and Inheritance (Advanced)

**Challenge:**

Design a C++ program to model employees in an organization. You should implement a base class for `Employee` with the following attributes and functionalities:

1. Attributes:
   - `id` (integer): An employee's unique identifier.
   - `name` (string): Employee's name.
   - `salary` (double): Employee's salary.

2. Member functions:
   - A constructor to initialize `id`, `name`, and `salary`.
   - A `display` function to display the employee's details (id, name, salary).

Create two derived classes, `Manager` and `Engineer`, that inherit from the `Employee` class. The derived classes should have additional attributes and functionalities:

**Manager Class:**
1. Additional attributes:
   - `department` (string): The department the manager is responsible for.

2. Member functions:
   - Override the `display` function to include the department.

**Engineer Class:**
1. Additional attributes:
   - `level` (string): The level or position of the engineer (e.g., Senior, Junior).

2. Member functions:
   - Override the `display` function to include the level.

In the `main` function, create instances of both `Manager` and `Engineer`, set their attributes, and display their details.

Additionally, add a virtual function `calculateBonus` to the base class `Employee`. The derived classes should override this function to calculate the bonus specific to their role (e.g., managers get a bonus based on the department's performance, while engineers get a bonus based on their level).

This challenge tests your understanding of advanced inheritance concepts, including virtual functions and overriding, and how to model different roles within a class hierarchy.
