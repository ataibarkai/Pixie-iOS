#Instructions for Setup of Pixie Development Environment on a Fresh Mac Installation

- Dependencies
    - Xcode + command line utilities
        - This should (as of OS X Yosemite) install appropriate versions of flex and bison (see below) -- so all dependencies should be met.
    - Flex version 2.5.35
        - run ```flex --version```
        - Yosemite comes with Flex 2.5.35
        - If installation is missing: Install flex from source - version 2.5.35
            - Note: Macports version is 2.5.37 - and does **not** work well with Pixie (problem during make)
    - Bison version 2.X
        - Yosemite comes pre-built with bison 2.3

- Cross-compile Pixie
    - ```cd``` into ```Pixie-iOS/Pixie``` directory
    - run  ```./build_for_ios.sh```
        - if getting permission errors, run as sudo, but this would only happen if a previous run as a sudo corrupted the permissions.
    - when build completes, ```cd``` into ```Pixie-iOS/Pixie/output``` and run ```./merge-to-one-lib.sh```
    - The final file should be in ```Pixie-iOS/Pixie/output/final-output/pixie_all-universal.a```


- To use in an iOS project
    - drag-and-drop pixie_all-universal.a into project (copy files)
        - make sure it’s linked