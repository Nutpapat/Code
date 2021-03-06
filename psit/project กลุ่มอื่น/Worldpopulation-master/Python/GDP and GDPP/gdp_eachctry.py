"""
GDP each ctry
"""
import pandas as pd
import pygal

def gdp():
    ctry = input()
    gdp_sheet = pd.read_csv("gdp.csv", encoding = 'UTF-8')
    gdp_sheet.index = gdp_sheet["Country Name"]
    from pygal.style import NeonStyle
    NeonStyle = NeonStyle(
    background='transparent',
    colors=('#FF0000', '#f1be54', '#76FC00', '#3280ee'),
    )
    line_chart = pygal.Line(fill=True, interpolate='cubic', style=NeonStyle, width=1000, x_label_rotation=90)
    line_chart.title = 'Gross Domestic Products of {} (in %)'.format(ctry)
    line_chart.x_labels = map(str, range(1961, 2017))
    line_chart.value_formatter = lambda x: "%.2f" %x + "%"
    if ctry == 'China':
        line_chart.add('China', gdp_sheet.loc["China"][5:61])
    elif ctry == 'Thailand':
        line_chart.add('Thailand', gdp_sheet.loc["Thailand"][5:61])
    elif ctry == 'Japan':
        line_chart.add('Japan', gdp_sheet.loc["Japan"][5:61])
    elif ctry == 'United States':
        line_chart.add('United States', gdp_sheet.loc["United States"][5:61])
    else:
        print('not found')
    line_chart.render_to_file('chart.svg'.format(ctry))
gdp()
