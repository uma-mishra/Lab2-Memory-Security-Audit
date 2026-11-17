# Lab 2 - C Memory Management Security Audit

## Objective
Identify, analyse and fix memory management vulnerabilities in C programs.

## Vulnerabilities
1. Unchecked malloc() return value
2. Heap use-after-free
3. Double-free

## Project Structure
- original/: Original vulnerable C programs
- fixed/: Corrected C programs
- evidence/: AddressSanitizer and GDB results
- report/: Error classification

## Testing
- GCC compilation
- AddressSanitizer
- GDB debugging

## Results
All three corrected programs executed successfully without AddressSanitizer errors.
GDB verification completed successfully.

