"""Number_of_foreigner_travel_to_thailand_in_rains_season"""
import pandas as pd
import matplotlib.pyplot as plt
import pygal
def main():
    """7 land mass foreigner travel to thailand between 2013 to 2018 in rains_season"""
    lis_y = []
    lis_x = [2013, 2014, 2015, 2016, 2017, 2018]
    check = 0
    data = pd.read_csv('data.csv')
    group = data.groupby(['Season'])
    dataframe = group.get_group('rains')
    year2013 = dataframe[dataframe['Year'] == 2013]
    year2014 = dataframe[dataframe['Year'] == 2014]
    year2015 = dataframe[dataframe['Year'] == 2015]
    year2016 = dataframe[dataframe['Year'] == 2016]
    year2017 = dataframe[dataframe['Year'] == 2017]
    year2018 = dataframe[dataframe['Year'] == 2018]
    lis_eastasia = ea(year2013, year2014, year2015, year2016, year2017, year2018, lis_y, check)
    lis_y = []
    lis_europe = er(year2013, year2014, year2015, year2016, year2017, year2018, lis_y, check)
    lis_y = []
    lis_america = am(year2013, year2014, year2015, year2016, year2017, year2018, lis_y, check)
    lis_y = []
    lis_southasia = sa(year2013, year2014, year2015, year2016, year2017, year2018, lis_y, check)
    lis_y = []
    lis_oceania = oc(year2013, year2014, year2015, year2016, year2017, year2018, lis_y, check)
    lis_y = []
    lis_middleeast = me(year2013, year2014, year2015, year2016, year2017, year2018, lis_y, check)
    lis_y = []
    lis_africa = af(year2013, year2014, year2015, year2016, year2017, year2018, lis_y, check)
    lis_y = []
    chart = pygal.StackedLine(dots_size=1.75, legend_at_bottom=True, interpolate='cubic', fill=True)
    chart.title ='ปริมาณชาวต่างชาติที่เข้าประเทศไทยตอนฤดูฝนช่วง 6 ปี'
    chart.x_title = 'ปี'
    chart.y_title = 'จำนวนชาวต่างชาติ (หน่วย10ล้าน)'
    chart.y_labels = ([0, 10000000])
    chart.render_to_file('sales_genre.svg')
def af(year2013, year2014, year2015, year2016, year2017, year2018, var, check):
    """return africa point (list)"""
    for i in year2013.Africa:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2014.Africa:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2015.Africa:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2016.Africa:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2017.Africa:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2018.Africa:
        check += int(i)
    var.append(check)
    check = 0
    return list(var)
def me(year2013, year2014, year2015, year2016, year2017, year2018, var, check):
    """return middle_east point (list)"""
    for i in year2013.MiddleEast:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2014.MiddleEast:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2015.MiddleEast:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2016.MiddleEast:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2017.MiddleEast:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2018.MiddleEast:
        check += int(i)
    var.append(check)
    check = 0
    return list(var)
def oc(year2013, year2014, year2015, year2016, year2017, year2018, var, check):
    """return oceania point (list)"""
    for i in year2013.Oceania:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2014.Oceania:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2015.Oceania:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2016.Oceania:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2017.Oceania:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2018.Oceania:
        check += int(i)
    var.append(check)
    check = 0
    return list(var)
def sa(year2013, year2014, year2015, year2016, year2017, year2018, var, check):
    """return south_asia point (list)"""
    for i in year2013.SouthAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2014.SouthAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2015.SouthAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2016.SouthAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2017.SouthAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2018.SouthAsia:
        check += int(i)
    var.append(check)
    check = 0
    return list(var)
def am(year2013, year2014, year2015, year2016, year2017, year2018, var, check):
    """return america point (list)"""
    for i in year2013.America:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2014.America:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2015.America:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2016.America:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2017.America:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2018.America:
        check += int(i)
    var.append(check)
    check = 0
    return list(var)
def er(year2013, year2014, year2015, year2016, year2017, year2018, var, check):
    """return europe point (list)"""
    for i in year2013.Europe:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2014.Europe:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2015.Europe:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2016.Europe:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2017.Europe:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2018.Europe:
        check += int(i)
    var.append(check)
    check = 0
    return list(var)
def ea(year2013, year2014, year2015, year2016, year2017, year2018, var, check):
    """return east_asia point (list)"""
    for i in year2013.EastAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2014.EastAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2015.EastAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2016.EastAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2017.EastAsia:
        check += int(i)
    var.append(check)
    check = 0
    for i in year2018.EastAsia:
        check += int(i)
    var.append(check)
    check = 0
    return list(var)
main()