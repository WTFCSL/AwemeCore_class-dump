//
//     Generated by private class-dump
//

@interface BDWebKitUtil : NSObject

+ (BOOL)checkWebContentBlank:(id)arg0 withBlankColor:(id)arg1;
+ (id)contentTypeOfExtension:(id)arg0;
+ (id)rangeDataForVideo:(id)arg0 withRequest:(id)arg1 withResponseHeaders:(id)arg2;
+ (BOOL)_newCheckWebContentBlank:(id)arg0 withBlankColor:(id)arg1;
+ (BOOL)_oldCheckWebContentBlank:(id)arg0 withBlankColor:(id)arg1;
+ (struct BlankDetectRGBData_t { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })fetchCompareColor:(char *)arg0 withWidth:(unsigned long long)arg1 withHeight:(unsigned long long)arg2 withBlankColor:(id)arg3;
+ (id)prefixMatchesInString:(id)arg0 withPattern:(id)arg1;

@end
