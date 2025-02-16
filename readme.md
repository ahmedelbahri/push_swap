# push_swap

**push_swap** is a project that implements an algorithm to sort a stack of integers using a minimal set of operations. The goal of the project is to practice algorithm optimization and work with low-level data structures in C. The project also includes a bonus feature that involves visualizing the sorting process.

---

## About

The **push_swap** project involves implementing a sorting algorithm that works with two stacks (`a` and `b`). The task is to sort stack `a` in ascending order, using only the following operations:

- `sa` (swap a): Swap the first two elements of stack `a`.
- `sb` (swap b): Swap the first two elements of stack `b`.
- `ss` (swap both): Swap the first two elements of both stacks.
- `pa` (push a): Take the top element from stack `b` and push it onto stack `a`.
- `pb` (push b): Take the top element from stack `a` and push it onto stack `b`.
- `ra` (rotate a): Shift all elements of stack `a` up by one, so that the first element becomes the last.
- `rb` (rotate b): Shift all elements of stack `b` up by one, so that the first element becomes the last.
- `rr` (rotate both): Shift all elements of both stacks up by one.
- `rra` (reverse rotate a): Shift all elements of stack `a` down by one, so that the last element becomes the first.
- `rrb` (reverse rotate b): Shift all elements of stack `b` down by one, so that the last element becomes the first.
- `rrr` (reverse rotate both): Shift all elements of both stacks down by one.

The goal is to sort stack `a` with the fewest operations possible.

---

## Installation

To install **push_swap**, follow these steps:

1. Clone this repository:
    ```bash
    git clone https://github.com/ahmedelbahri/push_swap.git
    cd push_swap
    ```

2. Compile the project:
    ```bash
    make
    ```

3. Optionally, to remove all compiled objects:
    ```bash
    make clean
    ```

4. To remove the executable:
    ```bash
    make fclean
    ```

5. To recompile the project after cleaning:
    ```bash
    make re
    ```

---

## Usage

To run the program, you can pass a series of integers to be sorted:

```bash
./push_swap 3 2 1
