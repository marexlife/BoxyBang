from subprocess import run

def build():
    run(["cmake", ".", "-B", "build"])
    run(["cmake", "--build", "build"])
    run(["./build/Source/App/BoxyBang"])
