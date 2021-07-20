import pygal
import pandas as pd
df = pd.read_excel(pd.ExcelFile('money from football.xlsx'))
line_chart = pygal.Bar(title=u'รายได้ของนักฟุตบอลเฉพาเงินเดือนต่อปี ประจำปี 2016', x_title='รายชื่อนักฟุตบอล',y_title='จำนวนเงิน')
line_chart.x_labels = map(str, ['Cristiano Ronaldo', 'Lionel Messi', 'Zlatan Ibrahimović', 'Gareth Bale', 'Neymar Jr'])
line_chart.add('รายได้', df['money'])
line_chart.render_to_file('money from football.svg')
