import xml.etree.ElementTree as ET

tree = ET.ElementTree(file='books.xml')

root = tree.getroot()
print(root.tag, root.attrib)