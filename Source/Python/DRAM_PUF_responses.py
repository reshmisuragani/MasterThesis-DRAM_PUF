#!/usr/bin/env python
# coding: utf-8

# In[6]:


import os
cwd = os.getcwd()
f = open(r"output1.txt", "rb")
num = list(f.read())
b = ''.join('{:08b}'.format(c) for c in num)
print(num)
#for x in num:
#    print(hex(x))


# In[ ]:





# In[ ]:




