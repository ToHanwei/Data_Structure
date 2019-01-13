线性表
==============
## 线性表及其实现
* 多项式的表示
** 数组形式储存
*** 顺序数组储存
*** 结构数组储存
** 线性表形式储存
* 什么是线性表
    由同种类型数据元素构成有序序列的线性结构
** 表中元素个数称为线性表的长度
** 线性表没有元素时，称为空表
** 表起始位置称表头，结束位置称表尾
## 线性表的顺序储存实现
    利用数组的连续存储空间顺序存放线性表的各元素
## 线性表的链式存储实现
    不要求逻辑上相邻的两个元素物理上也相邻；通过“链”建立起数据元素之间的逻辑关系
    插入、删除不需要移动数据元素，只需要修改链
    插入：
    （1）先构造一个新的结点，用s指向：
    （2）再找到链表的第i-1个结点，用p指向；
    （3）然后修改指针，插入结点（P之后插入新结点是s)
    