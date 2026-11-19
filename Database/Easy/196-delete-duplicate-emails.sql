-- ═══════════════════════════════════════════════════════
-- Problem: 196. Delete Duplicate Emails
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 808 ms (Beats 80.2%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 19, 2026
-- Link: https://leetcode.com/problems/delete-duplicate-emails/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
delete 
l 
from person l 
inner join person k
where l.email=k.email
and 
l.id>k.id;
