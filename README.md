# BankerAvoidance

<ins>_**Experiment name:**_</ins> Implementation of the Bankers  Algorithm (Avoidance)

<ins>_**Description:**_</ins>
This program implements the Banker's Algorithm to avoid deadlock in operating systems by ensuring a safe sequence of process execution. It first prompts the user to input the number of processes and resource types, then gathers the current allocation, maximum demand, and available resources matrices. Using these inputs, the program calculates the need matrix and iterates through each process to check if it can be safely executed with the available resources. If a process can be safely executed, the resources are released back to the pool, and the process is marked as finished. This process continues until all processes are either safely executed or the system is deemed unsafe. If all processes finish, the safe sequence is printed; otherwise, the system is not in a safe state.

<ins>_**Input**_</ins>
The input required for the provided  Bankers  Algorithm (Avoidance) code is as follows:
 	Number of Processes (n): The user enters 5 processes.
 	Number of Resources (m): The user enters 3 resource types.
 	Allocation Matrix (alloc): the matrix where each row indicates the resources currently allocated to each process.
 	Maximum Resource Matrix (max): The matrix where each row indicates the maximum resources each process might need.
 	Available Resources (avail): The array indicating the number of available resources of each type in the system.
This input allows the Banker's Algorithm to compute the need matrix and determine if a safe sequence of process execution exists, ensuring that the system remains in a safe state without deadlock.

<ins>_**Output**_</ins>
The output of the provided Bankers  Algorithm (Avoidance) code and the final result:
![image](https://github.com/simoon06/BankerAvoidance/assets/139492391/bcd393dc-8607-42aa-8455-4e9b3b7744d7)

