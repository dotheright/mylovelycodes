#!/usr/bin/env python

def break_word (stuff):
    """This function will break up  the words for us """
    words =stuff.split(" ")
    return words

def sort_words(words):
    """ this function will sort all words """
    return  sorted(words);

def print_the_first_word(words) :
    """ print the  first  word"""
    first_word= words.pop(0)
    print first_word

def print_the_last_word(words) :
    """ print the  last word"""
    last_word= words.pop(-1)
    print last_word

def sort_the_sentence(sentence):
    """ sort the words of the sentence """
    words =break_word(sentence)
    return sort_words(words)

def print_the_first_and_last(sentence):
    """print the first and the last word of the sentence"""
    words =break_word(sentence)
    print_the_first_word(words)
    print_the_last_word(words)

def print_the_first_and_the_last_sort(sentence):
    words=break_word(sentence)
    sort_words(words);
    print_the_first_word(words)
    print_the_last_word(words)

def  main():
    sentence ="mary has a little lamb"
    print "stentence is",sentence
    words =break_word(sentence)
    print "break_word is :",words
    print "sort_words is:",sort_words(words)
    print "print_the_first_word is:",print_the_first_word(words)
    print "print_the_last_word is:",print_the_last_word(words)
    print "sort_the_sentence is:",sort_the_sentence(sentence)
    print "print_the_first_and_last is:",print_the_first_and_last(sentence)
    print "print_the_first_and_the_last_sort is:",print_the_first_and_the_last_sort(sentence)

if __name__ == '__main__':
    main()
