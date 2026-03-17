from os import mkdir
from subprocess import run


def build():
    run(["cmake", ".", "-B", "build"])
    run(["cmake", "--build", "build"])
    run(["./build/Source/App/BoxyBang"])

def soft_mkdir(name: str):
    try:
        mkdir(name)
    except:
        pass
