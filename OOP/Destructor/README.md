# What is a Destructor?
    A destructor is a special function that automatically runs when an object is destroyed.

    Think:
        Constructor = object is born 👶
        Destructor = object dies 💀

# Destructor Syntax

    ~ClassName() {
        // cleanup
    }
# There are three important rules.
Rule 1 — Same name as class
Rule 2 — Has ~
Rule 3 — No return type

# Destructor Has No Parameters

# use of destructor is 
    Resource cleanup.

# Resources can include:

. dynamically allocated memory
. files
. database connections
. sockets
. locks
. operating-system resources
. other objects/resources your class owns