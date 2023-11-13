
**Topic 10: Building a Class Hierarchy for Vehicles**

**Challenge:** In this challenge, you'll design a class hierarchy for vehicles. You should create a base class, `Vehicle`, and then derive two classes from it: `Car` and `Bicycle`. Each class should have appropriate attributes and methods.

**Requirements:**

1. Create a `Vehicle` class with the following attributes and methods:
   - Attributes: `make` (a string, e.g., "Ford" or "Trek") and `year` (an integer).
   - Methods: `start()`, `stop()`, and `displayInfo()`. The `start` method should print a message indicating that the vehicle is starting. The `stop` method should print a message indicating that the vehicle is stopping. The `displayInfo` method should display information about the vehicle, including its make and year.

2. Derive a `Car` class from `Vehicle` with the following additional attributes and methods:
   - Attributes: `model` (a string, e.g., "Mustang" or "Civic") and `fuelType` (a string, e.g., "Gasoline" or "Electric").
   - Methods: `accelerate()`, `brake()`, and `displayInfo()`. The `accelerate` method should print a message indicating that the car is accelerating. The `brake` method should print a message indicating that the car is braking. Override the `displayInfo` method to display car-specific information.

3. Derive a `Bicycle` class from `Vehicle` with the following additional attributes and methods:
   - Attributes: `type` (a string, e.g., "Mountain" or "Road") and `numGears` (an integer).
   - Methods: `pedal()`, `brake()`, and `displayInfo()`. The `pedal` method should print a message indicating that the bicycle is being pedaled. The `brake` method should print a message indicating that the bicycle is being braked. Override the `displayInfo` method to display bicycle-specific information.

This challenge provides a different context for practicing class hierarchies, inheritance, and method overriding. It emphasizes the use of base classes and derived classes to model different types of vehicles. Enjoy the exercise, and if you have any questions or need help, feel free to ask.