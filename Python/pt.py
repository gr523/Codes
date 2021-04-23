def root(remote):
    db="DBMS - CSE 4307"
    ds="DS - CSE 4303"
    try:
        x = remote.split('/')
        root = eval(x[0])+'/'
        remote=root+"".join(x[1:])
        return remote
    except:
        return "0"

def main():

    remote="ds/Books"
    local="./"
    
    x = root(remote)
    if x!="0":
        print(x)

main()

