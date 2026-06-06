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

## Project Structure

```text
Healthcare-Management-System/
│
├── main.c
├── headers.h
  ├── struct.c
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
└── README.md
```

## Project Files

* `hsptl_project.c` – Main menu and program execution
* `headers.h` - Contains all the headers files in file to make mutlifile compilation easy
* `struct.c` – Structure declarations and function prototypes
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

## Output images

### Login details

<img width="550" height="418" alt="image" src="https://github.com/user-attachments/assets/5add97f8-d174-40ab-b01d-5879b4e6b722" />

### Printing all Patient Details

<img width="502" height="685" alt="image" src="https://github.com/user-attachments/assets/23ff048a-5878-4a55-9129-c1006837f54f" />

### Booking an Appointment

<img width="537" height="372" alt="image" src="https://github.com/user-attachments/assets/1f1e8536-15fe-4fab-85bc-4f7b460da3eb" />


## Concepts Demonstrated

* Dynamic Memory Allocation
* Linked List Operations
* File Handling
* Structures
* String Manipulation

## Future Enhancements

* Admin Dashboard
* Password Encryption
* Appointment Scheduling
* Billing Management
* Doctor Management Module
