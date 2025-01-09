# Prob2 - ADT Parking System

This folder contains an Abstract Data Type (ADT) implementation of a parking system in C. The system calculates parking fees based on vehicle type and duration of parking, showcasing modular design and abstraction principles.

## File Structure

-   **Main Program**:

    -   `main.c`: The main program demonstrating the use of the Parking System ADT.
    -   `makefile`: Build script for compiling the program.
    -   `ParkingSystem.exe`: Executable file (if supported by your system).

-   **Include Files**:

    -   `parkingsys.h`: Header file defining the Parking System ADT and its associated functions.

-   **Library Files**:
    -   `parkingsys.c`: Implementation of the Parking System ADT functions.

## Features

1. **Parking Fee Calculation**:

    - Calculates fees based on the following rules:
      | Vehicle Type | First Hour | Subsequent Hours |
      |--------------|------------|------------------|
      | Motorcycle | 1000 | 1500 |
      | Car | 3000 | 3500 |

2. **Vehicle Type and Duration Validation**:

    - Ensures valid input for vehicle type (A: Motorcycle, B: Car).
    - Validates parking duration to be a positive integer.

3. **Menu Display**:

    - Provides a user-friendly menu for input and output.

4. **Modular Design**:
    - Uses a struct to represent parking data (`Parkir`), with encapsulated getter and setter functions.

## How to Run

1. Navigate to this folder.
2. Compile the program using the `make` command:
    ```bash
    make
    ```
3. Run the compiled program:
    ```bash
    ./ParkingSystem
    ```

## Additional Notes

-   This Parking System ADT demonstrates the use of modular programming, encapsulation, and abstraction in C.
-   The system includes robust input validation to ensure accurate calculations and user-friendly operation.
-   For any questions or further enhancements, feel free to contribute or reach out via GitHub.

---

Explore the ADT Parking System to deepen your understanding of abstract data types and modular programming in C!
