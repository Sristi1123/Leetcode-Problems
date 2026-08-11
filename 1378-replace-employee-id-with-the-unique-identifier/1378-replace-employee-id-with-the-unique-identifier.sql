# Write your MySQL query statement below
SELECT e.unique_id, a.name FROM Employees a LEFT JOIN EmployeeUNI e ON e.id=a.id;