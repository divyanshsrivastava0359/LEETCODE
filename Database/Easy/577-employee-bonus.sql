-- ═══════════════════════════════════════════════════════
-- Problem: 577. Employee Bonus
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 842 ms (Beats 95.7%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 24, 2026
-- Link: https://leetcode.com/problems/employee-bonus/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
select l.name , k.bonus
from Employee l 
left join  bonus k on l.empid=k.empid
where bonus<1000 or bonus is null;
