-- ═══════════════════════════════════════════════════════
-- Problem: 197. Rising Temperature
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 462 ms (Beats 81.3%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 20, 2026
-- Link: https://leetcode.com/problems/rising-temperature/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
select l.id from weather l
inner join weather k
on datediff(l.recorddate, k.recorddate)=1
where
l.temperature > k.temperature;  



