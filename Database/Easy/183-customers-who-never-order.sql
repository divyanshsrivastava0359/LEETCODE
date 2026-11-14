-- ═══════════════════════════════════════════════════════
-- Problem: 183. Customers Who Never Order
-- Difficulty: Easy
-- Topics: Database
-- Runtime: 448 ms (Beats 99.6%)
-- Memory: 0B (Beats 100.0%)
-- Submitted: Nov 14, 2026
-- Link: https://leetcode.com/problems/customers-who-never-order/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
select c.name as customers 
from customers c 
where c.id not in (select customerid from orders);
