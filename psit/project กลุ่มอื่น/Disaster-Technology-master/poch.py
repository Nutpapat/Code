import pygal
import pandas as pd
df = pd.read_excel(pd.ExcelFile('RHINO_2000_2014.xlsx'))
line_chart = pygal.Line(title=u'ปริมาณแรดที่ถูกล่า', x_title='ปี ค.ศ.',y_title='จำนวน')
line_chart.x_labels = map(str, range(2000, 2015))
line_chart.add('ปริมาณแรดที่ถูกล่า', df['kill'])
line_chart.add('ปริมาณแรดที่ถูกล่า', [7,6,25,22,10,13,24,13,83,122,333])
line_chart.render_to_file('poch.svg')
