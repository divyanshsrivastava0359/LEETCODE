-- ═══════════════════════════════════════════════════════
-- Problem: 183. Customers Who Never Order
-- Difficulty: Easy
-- Topics: Database
-- Runtime: N/A (Beats 0.0%)
-- Memory: N/A (Beats 0.0%)
-- Submitted: Nov 14, 2026
-- Link: https://leetcode.com/problems/customers-who-never-order/
-- ═══════════════════════════════════════════════════════

# Write your MySQL query statement below
-- select c.name as customers 
-- from customers c 
-- where c.id not in (select customerid from orders);

select c.name as customers 
from customers c 
where c.id != all(c1.customerid)
 from orders c1;
