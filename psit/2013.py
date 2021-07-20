"""2013"""
import pandas as pd
import pygal
def main():
    """render"""
    data = pd.read_csv("2013.csv")
    birth_sheet.index = birth_sheet["Country Name"]
    line_graph = pygal.Bar()
    line_graph.title = 'จำนวนประเทศที่เข้ามาท่องเที่ยว'
    line_graph.x_labels = map(str, range(1960, 2016))
    line_graph.add('China', birth_sheet.loc)
    line_graph.add('Thailand', birth_sheet.loc)
    line_graph.add('Japan', birth_sheet.loc)
    line_graph.add('United States', birth_sheet.loc)
    line_graph.render_to_file('2013.svg')
main()