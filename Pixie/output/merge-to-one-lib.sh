#!/bin/sh
# build.sh

pwd=`pwd`
export AR=$(xcrun -sdk iphoneos -find ar)

merge_libfiles()
{
        DIR=$1
        LIBNAME=$2
 
        cd $DIR
        for i in `find . -name "*.a"`; do
                $AR -x $i
        done
        $AR -r $LIBNAME *.o
        rm -rf *.o __*
        cd -
}

merge_libfiles ./arm64/lib pixie_all-arm64.a
merge_libfiles ./armv7/lib pixie_all-armv7.a
merge_libfiles ./armv7s/lib pixie_all-armv7s.a
merge_libfiles ./i386/lib pixie_all-i386.a
merge_libfiles ./x86_64/lib pixie_all-x86_64.a

mkdir -p "all"
mkdir -p "final-output"

# move all "pixie_all-" libs to ./all folder
find . -type f -name "pixie_all*" -exec mv {} ./all/ \;

# delete previous FAT binary
rm ./final-output/pixie_all-universal.a

# merge all "pixie_all-" libs to a universal FAT binary
lipo -create ./all/*.a -output ./final-output/pixie_all-universal.a

# delete all temporary "pixie_all-" libs in ./all
rm  ./all/*.a