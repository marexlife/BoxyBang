from subprocess import run
from boxy_python.utils import soft_mkdir

class Cloner:
    clone_dir: str

    def __init__(self, clone_dir: str) -> None:
        self.clone_dir = clone_dir
        
        soft_mkdir(self.clone_dir)

    def clone(self, maintainer: str, project: str, branch: str) -> None:
        project_path = f"{self.clone_dir}/{project}"

        soft_mkdir(project_path)
        print(f"project_path is: '{project_path}'")
        run(["git","clone", f"github.com/{maintainer}/{project}.git", "--branch", branch, project_path])

