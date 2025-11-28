**GEO CALC – Geometric Calculator**

A simple, flexible, and user-friendly **C++ Programming Fundamentals project** that allows users to calculate the **Area** and **Perimeter** of six basic geometric shapes using an interactive console-based interface.

**Overview:**

GEO CALC is a **menu-driven geometric calculator** written in **a single C++ file** using basic programming concepts like loops, conditional statements, and functions.
The application guides the user step-by-step—from confirming the intent to calculate, choosing a shape, selecting an operation, confirming the calculation, entering values, and deciding whether to calculate again.

***The program is flexible***:

The user can **change the shape multiple times in a single iteration** before confirming the calculation.
The interface repeatedly confirms every major step to avoid mistakes.

*Supported Shapes:*

The calculator supports **six (6)** geometric shapes:

1. **Circle**
2. **Triangle**
3. **Rectangle**
4. **Square**
5. **Rhombus**
6. **Parallelogram**

For every shape, the user can choose between:

* **Area**
* **Perimeter**

**Program Flow (Step-by-Step)**

**1. Start Confirmation**

The application asks the user if they want to perform a geometric calculation.

**2. Shape Selection**

The user picks one of the six supported shapes.
✔ Shape can be changed multiple times before final confirmation.

**3. Operation Selection**

The user chooses what to calculate:

* **Area**, or
* **Perimeter**

**4. Calculation Confirmation**

Before proceeding, the program confirms the selected shape and operation.
If the user wants to change anything, the program returns to shape/operation selection.

**5. Input of Dimensions**

After confirmation, the user enters the required dimensions (radius, base, height, sides, diagonals, etc.).

**6. Output**

The program calculates and displays the **Area** or **Perimeter** with clear formatting.

**7. Continue Option**

After every calculation, the program asks if the user wants to:

* Perform **more calculations**, or
* Exit the application.

**Formulas Used**

**Circle:**

* Area = π × r²
* Perimeter = 2 × π × r

**Triangle:**

* Area = ½ × base × height
* Perimeter = a + b + c

**Rectangle:**

* Area = length × width
* Perimeter = 2 × (length + width)

**Square:**

* Area = side²
* Perimeter = 4 × side

**Rhombus:**

* Area = (d₁ × d₂) / 2
* Perimeter = 4 × side

**Parallelogram:**

* Area = base × height
* Perimeter = 2 × (base + side)

**Technologies Used:**

* **C++ (Basic / PF level):**
* Functions
* Loops (while / do-while)
* Conditional statements (if-else / switch)
* Standard console input/output

**How to Run:**

### Using Dev-C++ / CodeBlocks / VS

* Open the file `geo_calc.cpp`
* Compile and run the program

### Purpose of the Project:

This project was developed for a **Programming Fundamentals** course to practice:

* Logic building
* Problem solving
* Function usage
* Menu-driven programs
* Repeated user interaction
* Clean console interface design

## Future Enhancements (Optional)

* Add more geometric shapes
* Add color to console output
* Add formula display option
* Save calculation results to a file
* Add 3D shapes (Cube, Cylinder, Cone, Sphere…)

## License
This project is open for learning and educational use.
You may modify or extend it freely.
