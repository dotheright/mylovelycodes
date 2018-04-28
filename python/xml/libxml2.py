
import sys

import libxml2

xml_path = sys.argv[1]

doc = libxml2.parseFile(xml_path)
for book in doc.xpathEval('/books/book'):
    print book.content
doc.freeDoc()
