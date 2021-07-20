import pygal
import pandas as pd
df = pd.read_excel(pd.ExcelFile('for2.xlsx'))
line_chart = pygal.Line(title=u'พื้นที่ป่าในแอฟริกา', x_title='ปี ค.ศ.',y_title='ha')
line_chart.x_labels = map(str, [1990,2000,2005,2010])
line_chart.add('ปริมาณป่า', df['for'])
line_chart.render_to_file('for2.svg')
