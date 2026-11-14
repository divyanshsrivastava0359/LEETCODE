-- ═══════════════════════════════════════════════════════
-- Problem: 184. Department Highest Salary
-- Difficulty: Medium
-- Topics: Database
-- Runtime: 530 ms (Beats 99.6%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 14, 2026
-- Link: https://leetcode.com/problems/department-highest-salary/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
select d.name as department,
f.name as employee,
f.salary as salary
 from employee f

join department d on 
f.departmentid = d.id

where(f.departmentid,f.salary) in (
    select departmentid , max(salary) from employee
    group by departmentid
);


