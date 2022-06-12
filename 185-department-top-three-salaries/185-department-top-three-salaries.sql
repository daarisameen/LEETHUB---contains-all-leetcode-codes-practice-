# Write your MySQL query statement below
WITH cte AS
(
SELECT e.salary Salary, d.name Department, e.name Employee,
DENSE_RANK() OVER(PARTITION BY d.name ORDER BY e.salary DESC ) AS DenseRanks_salary
from employee e
LEFT JOIN department d
ON e.departmentId = d.id
)
SELECT cte.Department, cte.Employee, cte.Salary
FROM cte
WHERE cte.DenseRanks_salary <= 3;