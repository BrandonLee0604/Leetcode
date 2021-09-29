--
-- @lc app=leetcode.cn id=262 lang=mysql
--
-- [262] 行程和用户
--

-- @lc code=start
# Write your MySQL query statement below
-- @lc code=end
select t.Request_at as 'Day',
Round(
    SUM(
			IF(t.Status = 'completed',0,1)
		)/
    Count(t.Status), 2
) 'Cancellation Rate'
from Trips t
inner join Users u1
on t.Client_Id = u1.Users_Id 
inner join Users u2
on t.Driver_Id = u2.Users_Id
where u1.Banned = 'No' and u2.Banned = 'No' and t.Request_at between '2013-10-01' and '2013-10-03'
group by t.Request_at
order by t.Request_at