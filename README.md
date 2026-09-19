# C Bitwise Operators

A beginner-friendly C programming project focused on **Bitwise Operators and Bit Manipulation**.

## 🔹 Bitwise Operators

| Operator | Name        | Use              |         
| -------- | ----------- | ---------------- | 
| `&`      | AND         | Check/Clear bits |          
| `|`      | OR          | Set bits         |
| `^`      | XOR         | Toggle bits      |          
| `~`      | NOT         | Invert bits      |          
| `<<`     | Left Shift  | Shift bits left  |          
| `>>`     | Right Shift | Shift bits right |          

## 🔧 Bit Manipulation

Common operations:

```c
// Set bit
s = s | (1 << n);

// Clear bit
s = s & ~(1 << n);

// Check bit
s & (1 << n);

// Toggle bit
s = s ^ (1 << n);
```

## 📂 Programs

* `Set_6th_Bit.c`
* `Set_Clear_Bits.c`
* `Check_6th_Bit.c`
* `Toggle_6th_Bit.c`
* `Set_Alternate_Bits_Toggle.c`

## 🎯 Learning Outcomes

* Bitwise operators
* Binary and hexadecimal representation
* Bit shifting
* Bit masking
* Setting, clearing, checking and toggling bits

## 🛠️ Language

**C Programming**

## 📌 Applications

Used in **Embedded Systems, Microcontrollers, Registers, Device Drivers, and Firmware**.
