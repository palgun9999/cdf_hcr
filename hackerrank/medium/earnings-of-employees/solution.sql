/*
Enter your query here.
*/
SELECT max(salary*months) ,count(*)  from employee
where (salary*months)=(
    SELECT max(salary*months) from employee);
