# The key sentence
    Composition means building a class by putting other objects inside it.

# Objects Inside Objects (Composition)
# Composition = dividing responsibilities
    just think as the folder structure

Small class
Small class
Small class
Small class
       ↓
   Main class

   A very useful rule:
# Composition vs Inheritance
    If you can naturally say "X is a Y", consider inheritance.
    If you can naturally say "X has a Y", consider composition.

Car
│
├── Engine
│   ├── start()
│   ├── stop()
│   ├── getRPM()
│   └── checkTemperature()
│
├── Door
│   ├── open()
│   └── close()
│
└── Light
    ├── turnOn()
    └── turnOff()


    Think about it like this:

main()
   │
   │ talks to
   ▼
Car
   │
   │ talks to
   ▼
Engine

main() does not directly talk to Engine.