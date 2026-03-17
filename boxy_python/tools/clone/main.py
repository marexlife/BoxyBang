from cloner import Cloner


def main():
    cloner: Cloner = Cloner("ThirdParty")
    cloner.clone("likle", "cargs", "stable")

main()