import pygal
import pandas as pd
df = pd.read_excel(pd.ExcelFile('esport.xlsx'))
line_chart = pygal.Bar(title=u'การเติบโตของกีฬา e - sport', x_title='ปี พ.ศ.',y_title='จำนวนเงิน(ล้าน)')
line_chart.x_labels = map(str, range(2550, 2560))
line_chart.add('รางวัลE-Sport', df['money'],label_rotation=20)
line_chart.render_to_file('money from esport.svg')
