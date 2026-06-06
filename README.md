# Healthcare-Management-System-using-C-Programming

## Overview

**Healthcare Management System** is a C-based application designed to manage patient records efficiently. It includes features such as user authentication, appointment booking, patient search, record modification, deletion, and file-based data storage using linked lists and file handling concepts. 

## Features

* User Login and Signup Authentication
* Book Patient Appointments
* Display All Patient Records
* Search Patient Details by Appointment Number
* Search Patient Details by Name, Doctor, or Disease
* Modify Existing Patient Records
* Delete Patient Records
* Save Patient Records to File
* Load Patient Records from File at Startup

## Technologies Used

* C Programming
* Structures
* Singly Linked List
* File Handling
* Multi-file Programming

## Files Structure
Hospital-Management-System/
│
├── hsptl_project.c
├── struct.h
├── load.c
├── bookapp.c
├── save.c
├── delete.c
├── modify.c
├── search.c
├── print.c
├── password.c
├── hospital.txt
├── password.txt

## Project Files

* `hsptl_project.c` – Main menu and program execution
* `struct.h` – Structure declarations and function prototypes
* `load.c` – Load patient data from file
* `bookapp.c` – Book appointment functionality
* `print.c` – Display patient records
* `search.c` – Search patient details
* `modify.c` – Modify patient records
* `delete.c` – Delete patient records
* `save.c` – Save patient records to file
* `password.c` – Login and Signup module

## Compilation

```bash
gcc hsptl_project.c -o hospital
```

## Execution

```bash
./hospital
```

## Data Storage

* `hospital.txt` stores patient records.
* `password.txt` stores user login credentials.

## Concepts Demonstrated

* Dynamic Memory Allocation
* Linked List Operations
* File Handling
* Structures
* String Manipulation
* Modular Programming

## Future Enhancements

* Admin Dashboard
* Password Encryption
* Appointment Scheduling
* Billing Management
* Doctor Management Module
