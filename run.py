from boxy_python import Cloner, build


def main():
    cloner: Cloner = Cloner("ThirdParty")
    cloner.clone("likle", "cargs", "stable")
    build()

main()
