-- ═══════════════════════════════════════════════════════
-- Problem: 184. Department Highest Salary
-- Difficulty: Medium
-- Topics: Database
-- Runtime: N/A (Beats 0.0%)
-- Memory: N/A (Beats 0.0%)
-- Submitted: Nov 14, 2026
-- Link: https://leetcode.com/problems/department-highest-salary/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
SELECT 
D.NAME AS DEPARTMENT,
E.NAME AS EMPLOYEE,
E.SALARY AS SALARY 
FROM EMPLOYEE E 

JOIN DEPARTMENT D ON 
E.DEPARTMENTID= D.ID 

WHERE(E.DEPARTMENTID,E.SALARY) IN 
(
    SELECT DEPARTMENTID, MAX(SALARY)
    FROM EMPLOYEE
    GROUP BY DEPARTMENTID
);


