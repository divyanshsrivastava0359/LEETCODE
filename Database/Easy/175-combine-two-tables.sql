-- ═══════════════════════════════════════════════════════
-- Problem: 175. Combine Two Tables
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 507 ms (Beats 28.9%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 3, 2026
-- Link: https://leetcode.com/problems/combine-two-tables/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
Select p.firstname,p.lastname ,a.city,a.state
from person p
left join Address a
on p.personid = a.personid; 
