# LAB 2: C MEMORY MANAGEMENT SECURITY AUDIT

**Student:** Umamishra

## 1. Objective
To identify memory management vulnerabilities in C programs, analyse their security impact, implement secure corrections and verify the corrections using AddressSanitizer and GDB.

## 2. Vulnerability Analysis

### 2.1 Unchecked malloc() Return Value
The original program does not check whether malloc() successfully allocates memory before dereferencing the returned pointer.

Security impact: A failed allocation can cause a NULL pointer dereference and application crash, resulting in denial of service.

Correction: Check whether the returned pointer is NULL before accessing it.

### 2.2 Heap Use-After-Free
The original program accesses a pointer after its allocated memory has been released using free().

Security impact: Undefined behaviour, possible information disclosure, memory corruption or arbitrary code execution.

Correction: Complete all memory operations before calling free() and set the pointer to NULL.

### 2.3 Double-Free
The original program calls free() twice on the same pointer.

Security impact: Heap corruption, application crashes and potentially arbitrary code execution.

Correction: Release allocated memory exactly once and set the pointer to NULL.

## 3. Secure Implementation
Three corrected C programs were created:
- snippet1_fixed.c
- snippet2_fixed.c
- snippet3_fixed.c

Each corrected program checks memory allocation before use and avoids invalid memory operations.

## 4. Testing and Verification

The corrected programs were compiled using GCC with AddressSanitizer enabled.

Compiler options:
- -g
- -fsanitize=address
- -fno-omit-frame-pointer

All three corrected programs executed successfully without AddressSanitizer errors.

## 5. Original Program Analysis

AddressSanitizer identified:
- Snippet 1: Unchecked allocation was not automatically detected.
- Snippet 2: Heap-use-after-free.
- Snippet 3: Double-free.

## 6. Debugging
GDB was used to inspect program execution and verify the corrected program.

## 7. Conclusion
The three memory management vulnerabilities were analysed and corrected. AddressSanitizer confirmed clean execution of all corrected programs. The project demonstrates secure memory allocation, usage and deallocation practices in C.
