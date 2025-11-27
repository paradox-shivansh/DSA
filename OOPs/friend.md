Sure! Here are **clear, simple, and gradually increasing** examples of **friend classes** so you understand them perfectly.

---

# 🌟 **What is a Friend Class?**

A **friend class** means *all member functions* of that class become friends of another class.

So a friend class can access **private & protected** members of another class.

---

# ✅ **Example 1 — Simple Friend Class**

The basic structure:

```cpp
#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A() {
        x = 10;
    }

    // declaring class B as friend
    friend class B;
};

class B {
public:
    void display(A obj) {
        cout << "Value of x = " << obj.x << endl;   // allowed
    }
};

int main() {
    A a1;
    B b1;

    b1.display(a1);
}
```

### ✔️ Explanation

* Class **A** has a private member `x`.
* Class **B** is declared as a **friend** of A.
* So **B can access A’s private data directly** (`obj.x`).

---

# ✅ **Example 2 — Friend Class to Modify Private Members**

```cpp
#include <iostream>
using namespace std;

class Account {
private:
    int balance;

public:
    Account(int b) : balance(b) {}

    friend class Bank;   // Bank has full access
};

class Bank {
public:
    void showBalance(Account a) {
        cout << "Balance = " << a.balance << endl;
    }

    void addMoney(Account &a, int amount) {
        a.balance += amount;     // modifying private data
    }
};

int main() {
    Account acc(1000);
    Bank SBI;

    SBI.showBalance(acc);
    SBI.addMoney(acc, 500);
    SBI.showBalance(acc);
}
```

### ✔️ What happened?

Bank can *read* and *modify* balance even though it is private.

---

# ✅ **Example 3 — Mutual Interaction Between Two Classes**

One class gives access to another but **not vice-versa**.

```cpp
#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower = 500;

public:
    friend class Car; // Car can access Engine's data
};

class Car {
public:
    void showEngine(Engine e) {
        cout << "Horsepower = " << e.horsepower << endl;
    }
};

int main() {
    Engine e;
    Car c;

    c.showEngine(e);
}
```

### ✔️ Key Insight

Friendship is **not reciprocal**.
Car can access Engine's private data,
BUT Engine **cannot** access Car's private data unless it is also declared friend.

---

# ✅ **Example 4 — Two Classes Becoming Friends**

This is different from example 3:

Here **both classes** are friends of each other.

```cpp
#include <iostream>
using namespace std;

class B; // forward declaration

class A {
private:
    int x = 10;

public:
    friend class B;  // B is friend of A
};

class B {
private:
    int y = 20;

public:
    friend class A;  // A is friend of B

public:
    void showBoth(A obj1, B obj2) {
        cout << obj1.x << " " << obj2.y;
    }
};

int main() {
    A a;
    B b;

    b.showBoth(a, b);
}
```

### ✔️ Both classes can access each other’s private data.

---

# 🚫 When NOT to Use Friend Classes?

Avoid friend classes if:

* You can use public getter/setter safely.
* The classes should not be tightly coupled.
* You are breaking encapsulation unnecessarily.

Friendship should be for *special cases*, not daily use.

---

# 🎉 Want more?

I can also show:

🔹 friend class + inheritance
🔹 friend class used in operator overloading
🔹 friend class in real-life project examples
🔹 comparison of friend functions vs friend classes

Just tell me!
