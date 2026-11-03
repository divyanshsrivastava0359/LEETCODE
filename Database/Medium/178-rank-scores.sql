-- ═══════════════════════════════════════════════════════
-- Problem: 178. Rank Scores
-- Difficulty: Medium
-- Topics: Database
-- Runtime: 2778 ms (Beats 5.0%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 3, 2026
-- Link: https://leetcode.com/problems/rank-scores/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
Select score,dense_rank() over(order by score desc) as 'rank'
from scores 
order by score desc;

-- dense_rank() is used to compare previous rank to current rank in ordered way 
-- we use dense_rank() here as in desc score order column to see and compare it 

