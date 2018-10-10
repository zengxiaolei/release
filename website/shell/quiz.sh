#!/bin/bash

while getopts "b:h" ARG; do
    case $ARG in
    b)
        BASE64=$OPTARG;
        ;;
    h|?)
        echo "pass.sh usage:";
        echo -e "\t-h\thelp info";
        exit 1;
        ;;
    esac
done

if [[ ! $BASE64 ]]; then
    mkdir -p /tmp/.sor;
    BASE64="/tmp/.sor/quiz";
fi

if [ -d $BASE64 ]; then
    if [ -d $BASE64/launch/_boot_ ]; then
        # if [ -d $BASE64/cfg ]; then
        #     rm -rf $BASE64/cfg;
        # fi
        mkdir -p $BASE64/cfg;
        for FILE_PATH in $BASE64/launch/_boot_/*; do
            FILE=${FILE_PATH##*/};
            base64 $FILE_PATH >$BASE64/cfg/${FILE%.*}.cfg;
        done
        cp -f $BASE64/../../xml2json/xml2json.py $BASE64/cfg;
    fi

    if [ -d $BASE64.launch ]; then
        rm -rf $BASE64.launch;
    fi
    mkdir $BASE64.launch;
    if [ -d $BASE64/cfg ]; then
        for FILE_PATH in $BASE64/cfg/*; do
            FILE=${FILE_PATH##*/};
            base64 -d $FILE_PATH >$BASE64.launch/${FILE%.*}.launch;
        done
    else
        QUIZ_ERROR="CFG_MISSING";
        echo -e "\033[31m[ERROR] [`date +%s.%N`]: quiz.sh $QUIZ_ERROR \033[0m";
        exit 2;
    fi
    if [ -f $BASE64/param/.cfg ]; then
        python $BASE64/cfg/xml2json.py -t json2xml -o $BASE64.launch/boot.launch $BASE64/param/.cfg --launch;
    fi
fi