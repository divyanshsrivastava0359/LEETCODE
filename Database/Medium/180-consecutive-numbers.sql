-- ═══════════════════════════════════════════════════════
-- Problem: 180. Consecutive Numbers
-- Difficulty: Medium
-- Topics: Database
-- Runtime: 516 ms (Beats 96.1%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 13, 2026
-- Link: https://leetcode.com/problems/consecutive-numbers/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
Select distinct l1.num as consecutivenums
from logs l1, logs l2,logs l3

where l1.id=l2.id-1 and 
l2.id=l3.id-1
and l1.num=l2.num and 
l2.num=l3.num;
