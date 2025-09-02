import re

def rc_to_ex(cell):
    cell=cell[1:]  # remove 'R'
    row, col=cell.split('C')
    row=int(row)
    col=int(col)
    letter=''
    while col>0:
        col-=1
        letter = chr(col % 26 + ord('A')) + letter
        col//=26
    return f"{letter}{row}"

def ex_to_rc(cell):
    letter=''
    number=''

    for ch in cell:
        if ch.isalpha():
            letter+=ch
        else:
            number+=ch
    row=int(number)

    col=0
    for ch in letter:
        col=(col*26) +(ord(ch)-ord('A')+1)

    return f"R{row}C{col}"

def convert(cell):
    if re.match(r'^R\d+C\d+$', cell):  # safer check for R1C1 format
        return rc_to_ex(cell)
    else:
        return ex_to_rc(cell)
    
n=int(input())

for _ in range(n):
    cell=input().strip()
    print(convert(cell))
