# 🚀 Transformers Battle

A simple C++ project that simulates a battle between **Optimus Prime** and **Megatron**.  
The project is built with Object-Oriented Programming (OOP) concepts such as **classes**, **inheritance**, and **encapsulation**.

---

## 📖 Project Description
This project models a robot battle where:
- Each robot has its own stats (health, attack power, defense).
- Weapons are used to enhance attack power.
- The battle is turn-based, and the winner is determined when one robot’s health drops to zero.

The goal of the task is to practice **C++ OOP design** and compile the project into an executable.

---

## 🛠️ Features
- Robot base class with derived classes:
  - `OptimusPrime`
  - `Megatron`
- Weapon system (`Weapon` class).
- Turn-based fighting system.
- Clean modular code split across multiple `.cpp` and `.h` files.

---

## 📂 Project Structure
transformers-battle/
│
├── main.cpp
├── robot.cpp
├── robot.h
├── optimusprime.cpp
├── optimusprime.h
├── megatron.cpp
├── megatron.h
├── weapon.cpp
├── weapon.h
└── README.md


---

## ⚡ Build & Run

### Compile:

- `g++ main.cpp robot.cpp optimusprime.cpp megatron.cpp weapon.cpp -o battle`

---


## ▶️ Run

- `./battle`
---

## 📸 Example Output

Optimus Prime attacks Megatron with his weapon!  
Megatron loses 20 health points.  
Megatron strikes back fiercely!  
Optimus Prime loses 15 health points.  
...  
🏆 Optimus Prime wins the battle!  

---

## 🤝 Contributing

Pull requests are welcome. If you’d like to improve the battle mechanics, add more robots, or enhance the weapon system, feel free to fork and submit a PR.








