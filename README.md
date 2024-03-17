# Hospital-Data-Management-System

This program is the solution to the following problem:

Al-Minhas hospital wants to store the records of its patient in a file .The record includes the following information’s, patient name, his/her age, status (whether he/she is inpatient (who requires stay at hospital for care) or outpatient. The program should implement the following features using functions (Make as many functions as possible):
1.	Write a function to create an empty text file, in which the first line will be hard coded with the following labels: Name, Age, Status (In/Out) and Disease and for the next lines read all these details of patients (maximum 20 patients records can be read) from user and store it in the space/s separated format under the headings as follows:
Note: you can manually adjust spaces in the file

Sample run:
Input number of patients you want to add (1-20):4
Input Name, Age, Status, Disease (separated by space): Sarmad  40    In   Dengue
Input Name, Age, Status, Disease (separated by space): Zaheer    65   Out   Malaria
Input Name, Age, Status, Disease (separated by space): Daniyal   45   In    Typhoid
Input Name, Age, Status, Disease (separated by space): Kamal   60  In   Tuberculosis

Patients.txt
Name      Age     Status       Disease
Sarmad     40        In             Dengue
Zaheer      65        Out          Malaria
Daniyal     45         In            Typhoid
Kamal        60         In            Tuberculosis

2.	Write a function to separate the records of all the in-patients and out-patients by creating two separate files for each as follows:

In.txt
Name    Age     Status       Disease
Sarmad   40         In             Dengue
Daniyal   45         In            Typhoid
Kamal     60         In             Tuberculosis
Out.txt
Name    Age     Status       Disease
Zaheer    65        Out          Malaria

3.	Write a function that reads a particular disease name from user and returns the count of all the patients suffering from that disease.

Sample run:
Input disease name: Typhoid
Total Typhoid patients are: 1

Input disease name: Cancer
Sorry No Record Found.
