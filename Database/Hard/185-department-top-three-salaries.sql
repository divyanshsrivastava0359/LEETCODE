-- ═══════════════════════════════════════════════════════
-- Problem: 185. Department Top Three Salaries
-- Difficulty: Hard
-- Topics: Database
-- Runtime: 854 ms (Beats 96.3%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 17, 2026
-- Link: https://leetcode.com/problems/department-top-three-salaries/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
with ranks as (Select 
d.name as Department,
f.name as Employee,
f.salary as Salary, dense_rank() over(
    partition by d.id
    order by f.salary desc
) salary_rank
from Employee f

join department d on
f.departmentid=d.id 
)

select 
department,employee,salary
from ranks
where salary_rank<=3
