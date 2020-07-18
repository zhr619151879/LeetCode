

### 1

![](/Users/zhuhaoran/Library/Application Support/typora-user-images/image-20200518152319461.png)

* 将表自连接

```sql
select a.Name as Employee
from Employee a join Employee b on a.ManagerId = b.Id
where a.Salary > b.Salary;
```