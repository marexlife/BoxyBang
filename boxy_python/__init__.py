from subprocess import run
from os import mkdir

def soft_mkdir(name: str):
    try:
        mkdir(name)
    except:
        pass

class Cloner:
    clone_dir: str

    def __init__(self, clone_dir: str) -> None:
        self.clone_dir = clone_dir
        soft_mkdir(self.clone_dir)

    def clone(self, maintainer: str, project: str, branch: str) -> None:
        project_path = f"{self.clone_dir}/{project}"

        soft_mkdir(project_path)
        run(["git","clone", f"github.com/{maintainer}/{project}.git", "--branch", branch, project_path])

def build():
    run(["cmake", ".", "-B", "build"])
    run(["cmake", "--build", "build"])
    run(["./build/Source/App/BoxyBang"])
