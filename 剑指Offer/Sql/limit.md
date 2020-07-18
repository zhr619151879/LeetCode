**limit x offset y 代表查询x个值、跳过y个值**

* 找到语文成绩第二的成绩

```mysql
select distinct 成绩  
from 成绩表
where 课程='语文'
order by 课程,成绩 desc
limit 1,1;
```

