-- ═══════════════════════════════════════════════════════
-- Problem: 182. Duplicate Emails
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 471 ms (Beats 26.2%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 2, 2026
-- Link: https://leetcode.com/problems/duplicate-emails/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
select email as EMAIL 
from person 
group by email
having count(email)>1;
