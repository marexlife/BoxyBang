from os import mkdir

def soft_mkdir(name: str):
    try:
        mkdir(name)
    except:
        pass
