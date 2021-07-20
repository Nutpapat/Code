package demo;

public class CountryUtil {
	public static final String[] COUNTRY_LIST = {"<< Choose Country >>", "Thailand", "Japan", "China"};
	public static final String[] CAPITAL_LIST = {"", "Bangkok", "Tokyo", "Beijing"};
	
	public String getCountryName(int index) {
		// Instance Method: Get Country Name
		return COUNTRY_LIST[index];
	}
	
	public String getCapitalCity(String countryName) {
		// Instance Method: Get Capital City
		for (int i = 0; i < COUNTRY_LIST.length; i++) {
			if (COUNTRY_LIST[i] == countryName) {
				return CAPITAL_LIST[i];
			}
		}
		
		return "";
	}
}
