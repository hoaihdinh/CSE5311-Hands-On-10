# CSE5311-Hands-On-10
### To Compile:
```
cd implementation
make
```
### To Run:
```
./hash_table
```
### Output
```
>>> Hash Table <<<
Index	|	Key:Value List
0	|	[ NULL ]
1	|	[ NULL ]
2	|	[ NULL ]
3	|	[ NULL ]

Adding (3, 999) and (10, 998)
>>> Hash Table <<<
Index	|	Key:Value List
0	|	[ 10 : 998 ] -> [ NULL ]
1	|	[ NULL ]
2	|	[ NULL ]
3	|	[ 3 : 999 ] -> [ NULL ]

Adding keys 11-20 with values 997-988
>>> Hash Table <<<
Index	|	Key:Value List
0	|	[ 13 : 995 ] -> [ NULL ]
1	|	[ 18 : 990 ] -> [ NULL ]
2	|	[ 10 : 998 ] -> [ NULL ]
3	|	[ NULL ]
4	|	[ 15 : 993 ] -> [ NULL ]
5	|	[ 20 : 988 ] -> [ NULL ]
6	|	[ 12 : 996 ] -> [ NULL ]
7	|	[ NULL ]
8	|	[ 17 : 991 ] -> [ NULL ]
9	|	[ NULL ]
10	|	[ 14 : 994 ] -> [ NULL ]
11	|	[ 19 : 989 ] -> [ NULL ]
12	|	[ 11 : 997 ] -> [ NULL ]
13	|	[ 3 : 999 ] -> [ NULL ]
14	|	[ 16 : 992 ] -> [ NULL ]
15	|	[ NULL ]

Fetching key 3: 999
Fetching key 10: 998
Fetching key 20: 988
Removing key 20 and key 10
>>> Hash Table <<<
Index	|	Key:Value List
0	|	[ 13 : 995 ] -> [ NULL ]
1	|	[ 18 : 990 ] -> [ NULL ]
2	|	[ NULL ]
3	|	[ NULL ]
4	|	[ 15 : 993 ] -> [ NULL ]
5	|	[ NULL ]
6	|	[ 12 : 996 ] -> [ NULL ]
7	|	[ NULL ]
8	|	[ 17 : 991 ] -> [ NULL ]
9	|	[ NULL ]
10	|	[ 14 : 994 ] -> [ NULL ]
11	|	[ 19 : 989 ] -> [ NULL ]
12	|	[ 11 : 997 ] -> [ NULL ]
13	|	[ 3 : 999 ] -> [ NULL ]
14	|	[ 16 : 992 ] -> [ NULL ]
15	|	[ NULL ]

Removing keys 11-17
>>> Hash Table <<<
Index	|	Key:Value List
0	|	[ 18 : 990 ] -> [ NULL ]
1	|	[ NULL ]
2	|	[ NULL ]
3	|	[ NULL ]
4	|	[ NULL ]
5	|	[ 19 : 989 ] -> [ NULL ]
6	|	[ 3 : 999 ] -> [ NULL ]
7	|	[ NULL ]

```