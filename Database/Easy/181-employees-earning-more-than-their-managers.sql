-- ═══════════════════════════════════════════════════════
-- Problem: 181. Employees Earning More Than Their Managers
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 490 ms (Beats 30.3%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 14, 2026
-- Link: https://leetcode.com/problems/employees-earning-more-than-their-managers/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
SELECT 
EMP1.NAME AS EMPLOYEE
FROM EMPLOYEE EMP1,EMPLOYEE EMP2
WHERE EMP1.MANAGERID =EMP2.ID
AND EMP1.SALARY > EMP2.SALARY;
