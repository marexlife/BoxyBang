from boxy_python.cloner import Cloner
from boxy_python import build


def main():
    cloner: Cloner = Cloner("ThirdParty")
    cloner.clone("likle", "cargs", "stable")
    build()

main()
