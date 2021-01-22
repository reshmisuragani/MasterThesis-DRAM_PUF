#!/usr/bin/env python
# coding: utf-8

# In[1]:


import os
cwd = os.getcwd()
f = open(r"C:\Users\reshm\dpuf\G02_25control\G02_1_1_28800sec.bin", "rb")
num = list(f.read())
b = ''.join('{:08b}'.format(c) for c in num)
print(num)


# In[ ]:




