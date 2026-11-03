-- ═══════════════════════════════════════════════════════
-- Problem: 177. Nth Highest Salary
-- Difficulty: Medium
-- Topics: Database
-- Runtime: 592 ms (Beats 23.0%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 3, 2026
-- Link: https://leetcode.com/problems/nth-highest-salary/
-- ═══════════════════════════════════════════════════════

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  Declare m int;
  set m=n-1;
  RETURN (
      # Write your MySQL query statement below.
      Select distinct salary from Employee order by salary desc
      limit 1 offset m
  );
END
