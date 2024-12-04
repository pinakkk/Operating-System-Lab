# Operating System Lab

This repository contains practical implementations of key Operating System concepts, such as file and directory manipulation, process management, multithreading, and synchronization techniques. It is aimed at helping learners understand and apply OS fundamentals through hands-on experiments.

## Table of Contents

### Experiment 3: File Manipulation
- Append
- Create and Open
- Delete using `unlink`
- `lseek` Read
- Read/Write Console
- Read/Write File
- Rename
- `stat` System Call

### Experiment 4: Directory Manipulation
- Create Directory
- `getcwd`, `chdir`, `rmdir`
- `opendir`, `readdir`, `closedir`

### Experiment 5: Process Management
- `execv`
- Kill Child Process
- Make Child Process
- Make Orphan Process
- Make Zombie Process

### Experiment 6: Multithreaded Processes
- Thread Creation
- Passing Values to Threads
- Communication Between Threads and Main Function

### Experiment 7: Semaphore and Mutex
- Synchronization Techniques Using Semaphores

## Prerequisites
- **Programming Language**: C/C++
- **Compiler**: GCC or equivalent
- **OS Requirements**: Linux/Unix system for system call compatibility

## Usage Instructions
1. Clone the repository:
   ```
   git clone https://github.com/pinakkk/Operating-System-Lab.git
   ```

2. Navigate to the specific experiment directory:
    ```
    cd Operating-System-Lab/<Experiment-Folder>
    ```

3. Compile the code:
    ```
    gcc <filename>.c -o <outputname>
    ```

4. Run the executable:
    ```
    ./<outputname>
    ```

## Contributions
Contributions are welcome! Follow these steps:

- Fork this repository.
- Create a new branch for your feature.
- Submit a pull request for review.
