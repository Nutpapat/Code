import pygal
import pandas as pd
df = pd.read_excel(pd.ExcelFile('pop.xlsx'))
line_chart = pygal.Line(title=u'ปริมาณแรดในแอฟริกาใต้', x_title='ปี ค.ศ.',y_title='จำนวน')
line_chart.x_labels = map(str, range(1997, 2011))
line_chart.add('ปริมาณแรด', df['pop'])
line_chart.render_to_file('pop.svg')
