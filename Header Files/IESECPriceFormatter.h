//
//     Generated by private class-dump
//

@interface IESECPriceFormatter : NSObject

+ (id)stringWithPrice:(id)arg0;
+ (id)_convertFenToYuan:(id)arg0;
+ (id)priceAttributedString:(id)arg0 integerFont:(id)arg1 decimalFont:(id)arg2;
+ (id)stringWithPrice:(id)arg0 decimalPlaces:(long long)arg1 roundingMode:(unsigned long long)arg2;
+ (id)priceAttributedString:(id)arg0 integerFont:(id)arg1 decimalFont:(id)arg2 decimalPlaces:(long long)arg3 roundingMode:(unsigned long long)arg4;
+ (BOOL)hasGapBetweenMinPrice:(id)arg0 andMaxPrice:(id)arg1;

@end
