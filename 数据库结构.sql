use studentsdb;
create table student_info
(s_number char(4) not null primary key,
s_name char(8) not null ,
s_sex char(2) null,
s_birthday date null,
s_localhost varchar(50) null
);
-- drop table curriculum ;
create table curriculum
(c_number char(4) not null primary key,
c_name varchar(50) null,
c_credits int null);

create table grade(
g_s_number char(4) not null,
g_c_number char(4) not null,
g_score int null,
primary key(g_s_number,g_c_number)
);
insert into student_info values("0001","张青平","男","2000-10-01","衡阳市东风路77号");
insert into student_info values("0002","刘东阳","男","1998-12-09","东阳市八一北路33号"),
						("0003","马晓夏","女","1995-05-12","长岭市五一路763号"),
						("0004","钱忠理","男","1994-09-23","滨海市洞庭大道279号"),
						("0005","孙海洋","男","1995-04-03","长岛市解放路27号"),
						("0006","郭小斌","男","1997-11-10","南山市红旗路113号"),
						("0007","肖月玲","女","1996-12-07","东方市南京路11号"),
						("0008","张玲珑","女","1997-12-24","滨江市新建路97号");
insert into curriculum values("0001","计算机应用基础","2"),
							 ("0002","C语言程序设计","2"),
							 ("0003","数据库原理及应用","2"),
							 ("0004","英语","4"),
							 ("0005","高等数学","4");
							
insert into grade values("0001","0001",80),
						("0001","0002",91),
						("0001","0003",88),
						("0001","0004",85),
						("0001","0005",77),
						("0002","0001",73),
						("0002","0002",68),
						("0002","0003",80),
						("0002","0004",79),
						("0002","0005",73),
						("0003","0001",84),
						("0003","0002",92),
						("0003","0003",81),
						("0003","0004",82),
						("0003","0005",75);
					
show tables;
select * from curriculum ;
update curriculum set c_name=null;

desc grade;
alter table grade modify column g_score decimal(5,2) null;
select * from grade;

desc student_info;
alter table student_info add column remark varchar(50) null;

create database studb;
create table stu select * from studentsdb.student_info;
use studb;
show tables;
desc stu;
select * from stu;
delete from stu where s_number="0004";
update stu set s_localhost="滨江市新建路109号" where s_number="0002"; 
alter table stu drop column remark;
