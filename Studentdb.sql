-- Create Database
CREATE DATABASE Student;
USE Student;

-- Create Table
CREATE TABLE studentinfo (
    StudentID INT PRIMARY KEY AUTO_INCREMENT,
    StudentName VARCHAR(100),
    Section CHAR(1),
    Faculty VARCHAR(50),
    Age INT
);

-- Insert Data
INSERT INTO studentinfo (StudentName, Section, Faculty, Age) VALUES
('Alice Brown', 'A', 'Science', 17),
('Bob White', 'B', 'Arts', 16),
('Charlie Green', 'C', 'Commerce', 18),
('Diana Blue', 'A', 'Science', 15),
('Evan Black', 'B', 'Arts', 19);

-- Display Roll Number and Faculty for Age >16
SELECT StudentID, Faculty FROM studentinfo WHERE Age > 16;
