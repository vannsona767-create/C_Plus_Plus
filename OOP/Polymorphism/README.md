# Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

# Why Use Virtual Functions?
Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.

With virtual, it checks the actual object the pointer is pointing to.

Or to put it even more simply:

Without virtual: the base function runs, even if the object is from a child class.
With virtual: the child's version runs, like you expect.