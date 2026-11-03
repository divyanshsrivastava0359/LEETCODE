-- ═══════════════════════════════════════════════════════
-- Problem: 177. Nth Highest Salary
-- Difficulty: Medium
-- Topics: Database
-- Runtime: 654 ms (Beats 15.2%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 3, 2026
-- Link: https://leetcode.com/problems/nth-highest-salary/
-- ═══════════════════════════════════════════════════════

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE M INT;
  SET M=N-1;
  RETURN (
     SELECT DISTINCT SALARY FROM EMPLOYEE 
     ORDER BY SALARY DESC
     LIMIT 1 OFFSET M

  );
END
