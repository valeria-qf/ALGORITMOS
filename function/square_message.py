def show_message(*message, w=0, h=0):
    for o in message:
        m = list(o)
        if(w==0 and h==0):
            w = len(m) + 10
            h = len(m) + 3

        aux = 0
        min = (w-len(m))//2
        max = (w-len(m))//2 + len(m)

        for i in range(0, h):
            for j in range(0, w):
                if(i==0 and j==0):
                    print("+", end="")
                elif(i==h-1 and j==0):
                    print("+", end="")
                elif(i==0 and j==w-1):
                    print("+")
                elif(i==h-1 and j==w-1):
                    print("+")
                elif(i==0 or i==h-1):
                    print("-", end="")
                elif(j==0):
                    print("|", end="")
                elif(j==w-1):
                    print("|")
                elif(i==h//2):
                    if(j>min and j<=max):
                        print(m[aux], end="")
                        aux+=1
                    else:
                        print(" ", end="")
                else:
                    print(" ", end="")
            

show_message('Hello World!',w=5, h=3)