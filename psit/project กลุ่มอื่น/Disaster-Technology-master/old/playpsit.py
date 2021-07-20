import pygal
line_chart = pygal.Bar(title=u'การเติบโตของกีฬา e - sport', x_title='ปี พ.ศ.',y_title='จำนวนเงิน(ล้าน)')
line_chart.x_labels = map(str, range(2550, 2560))
line_chart.add('รางวัลE-Sport', [6.718132, 6.856000,3.708852, 5.784825, 10.090133, 13.818587,21.990598,37.123436,66.228502,96.165345],label_rotation=20)
line_chart.render_to_file('play.svg')
print("การเติบโตของกีฬา")
