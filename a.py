for i in range(int(input())):
    a=input()
    print(("false","true")[sum(int(x)for x in a[0:3])== sum(int(x)for x in a[3:6])])