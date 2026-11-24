-- ═══════════════════════════════════════════════════════
-- Problem: 1179. Game Play Analysis I
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 519 ms (Beats 68.0%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 24, 2026
-- Link: https://leetcode.com/problems/game-play-analysis-i/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
Select l.player_id , min(event_date) as first_login
from Activity l
group by player_id;
