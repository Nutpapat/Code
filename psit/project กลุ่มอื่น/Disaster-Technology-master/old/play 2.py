import pygal
import pandas as pd
df = pd.read_excel(pd.ExcelFile('Book1.xlsx'))
line_chart = pygal.Line(title=u'ปริมาณก๊าสคาร์บอนไดออกไซด์', x_title='ปี ค.ศ.',y_title='metric tons')
line_chart.x_labels = map(str, range(1960, 2013))
line_chart.add('CO2', df['gas'])
line_chart.render_to_file('gas.svg')
print("คาบอร์น")
