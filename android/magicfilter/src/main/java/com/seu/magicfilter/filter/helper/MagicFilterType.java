package com.seu.magicfilter.filter.helper;

public class MagicFilterType {	
	public static final int NONE = 0x00;
	
	public static final int FILTER_FAIRYTALE = NONE + 1;
	
	public static final int FILTER_SUNRISE = FILTER_FAIRYTALE + 1;
	public static final int FILTER_SUNSET = FILTER_SUNRISE + 1;
	public static final int FILTER_WHITECAT = FILTER_SUNSET + 1;
	public static final int FILTER_BLACKCAT = FILTER_WHITECAT + 1;
	
	public static final int FILTER_SWEETS = FILTER_BLACKCAT + 1;
	
	public static final int FILTER_ROMANCE = FILTER_SWEETS + 1;
	public static final int FILTER_SAKURA = FILTER_ROMANCE + 1;
	public static final int FILTER_WARM = FILTER_SAKURA + 1;
	
	public static final int FILTER_ANTIQUE = FILTER_WARM + 1;
	public static final int FILTER_NOSTALGIA = FILTER_ANTIQUE + 1;
	
	public static final int FILTER_CALM = FILTER_NOSTALGIA + 1;
	public static final int FILTER_LATTE = FILTER_CALM + 1;
	public static final int FILTER_TENDER = FILTER_LATTE + 1;
	
	public static final int FILTER_COOL = FILTER_TENDER + 1;
	
	public static final int FILTER_EMERALD = FILTER_COOL + 1;
	public static final int FILTER_EVERGREEN = FILTER_EMERALD + 1;
		
	public static final int FILTER_CRAYON = FILTER_EVERGREEN + 1;
	public static final int FILTER_SKETCH = FILTER_CRAYON + 1;
	
	public static final int FILTER_AMARO = FILTER_SKETCH + 1;
	public static final int FILTER_BRANNAN = FILTER_AMARO + 1;
	public static final int FILTER_BROOKLYN = FILTER_BRANNAN + 1;
	public static final int FILTER_EARLYBIRD = FILTER_BROOKLYN + 1;
	public static final int FILTER_FREUD = FILTER_EARLYBIRD + 1;
	public static final int FILTER_HEFE = FILTER_FREUD + 1;
	public static final int FILTER_HUDSON = FILTER_HEFE + 1;
	public static final int FILTER_INKWELL = FILTER_HUDSON + 1;
	public static final int FILTER_KEVIN = FILTER_INKWELL + 1;
	public static final int FILTER_LOMO = FILTER_KEVIN + 1;
	public static final int FILTER_N1977 = FILTER_LOMO + 1;
	public static final int FILTER_NASHVILLE = FILTER_N1977 + 1;
	public static final int FILTER_PIXAR = FILTER_NASHVILLE + 1;
	public static final int FILTER_RISE = FILTER_PIXAR + 1;
	public static final int FILTER_SIERRA = FILTER_RISE + 1;
	public static final int FILTER_SUTRO = FILTER_SIERRA + 1;
	public static final int FILTER_TOASTER2 = FILTER_SUTRO + 1;
	public static final int FILTER_VALENCIA = FILTER_TOASTER2 + 1;
	public static final int FILTER_WALDEN = FILTER_VALENCIA + 1;
	public static final int FILTER_XPROII = FILTER_WALDEN + 1;
	
	public static final int FILTER_END = FILTER_XPROII;

	//whiteskin
	public static final int WHITESKIN_BEAUTY = FILTER_XPROII + 1;
	public static final int WHITESKIN_SKINWHITEN = WHITESKIN_BEAUTY + 1;
	public static final int WHITESKIN_HEALTHY = WHITESKIN_SKINWHITEN + 1;
	public static final int WHITESKIN_END = WHITESKIN_HEALTHY;


	public static final int CONTRAST = WHITESKIN_HEALTHY + 1;
	public static final int BRIGHTNESS = CONTRAST + 1;
	public static final int EXPOSURE = BRIGHTNESS + 1;
	public static final int HUE = EXPOSURE + 1;
	public static final int SATURATION = HUE + 1;
	public static final int SHARPEN = SATURATION + 1;
	
	public static final int IMAGE_ADJUST = SHARPEN + 1;
}
