//
//     Generated by private class-dump
//

@class NSDictionary;

@interface JSONValueTransformer : NSObject {
    NSDictionary *_primitivesNames;
}

@property (readonly, nonatomic) NSDictionary *primitivesNames;

+ (Class)classByResolvingClusterClasses:(Class)arg0;

- (float)floatFromObject:(id)arg0;
- (id)__NSDictionaryFromNSArray:(id)arg0;
- (id)NSMutableStringFromNSString:(id)arg0;
- (id)NSMutableArrayFromNSArray:(id)arg0;
- (id)NSMutableDictionaryFromNSDictionary:(id)arg0;
- (id)NSSetFromNSArray:(id)arg0;
- (id)NSMutableSetFromNSArray:(id)arg0;
- (id)JSONObjectFromNSSet:(id)arg0;
- (id)JSONObjectFromNSMutableSet:(id)arg0;
- (id)BOOLFromNSNumber:(id)arg0;
- (id)BOOLFromNSString:(id)arg0;
- (id)JSONObjectFromBOOL:(id)arg0;
- (float)floatFromNSString:(id)arg0;
- (float)floatFromNSNumber:(id)arg0;
- (id)NSNumberFromfloat:(float)arg0;
- (id)NSNumberFromNSString:(id)arg0;
- (id)NSStringFromNSNumber:(id)arg0;
- (id)NSDecimalNumberFromNSString:(id)arg0;
- (id)NSStringFromNSDecimalNumber:(id)arg0;
- (id)NSURLFromNSString:(id)arg0;
- (id)JSONObjectFromNSURL:(id)arg0;
- (id)__NSDateFromNSString:(id)arg0;
- (id)__JSONObjectFromNSDate:(id)arg0;
- (id)NSDateFromNSNumber:(id)arg0;
- (id)NSTimeZoneFromNSString:(id)arg0;
- (id)JSONObjectFromNSTimeZone:(id)arg0;
- (id)__NSMutableDictionaryFromNSArray:(id)arg0;
- (id)primitivesNames;
- (id)UIColorFromNSString:(id)arg0;
- (id)JSONObjectFromUIColor:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)importDateFormatter;

@end