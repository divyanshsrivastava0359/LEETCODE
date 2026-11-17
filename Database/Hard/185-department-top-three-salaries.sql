-- ═══════════════════════════════════════════════════════
-- Problem: 185. Department Top Three Salaries
-- Difficulty: Hard
-- Topics: Database
-- Runtime: 1464 ms (Beats 24.4%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 17, 2026
-- Link: https://leetcode.com/problems/department-top-three-salaries/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
with RANKEDSALARY as (
    select 
    d.name as department,
    f.name as employee,
    f.salary as salary,
    dense_rank() over(
        partition by d.id
        order by f.salary desc
    ) as salary_rank
    from employee f
    join department d on 
    f.departmentid = d.id
)

select department , employee, salary
from RANKEDSALARY
where 
salary_rank<=3
