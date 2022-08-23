f = open('file_text.txt','r',encoding='utf-8')
f_new = open('file_text_bak.txt','w',encoding='utf-8')

for line in f:
    if "scanf_s" in line:
        line = line.replace('scanf')
    f_new.write(line)

f.close()
f_new.close()
