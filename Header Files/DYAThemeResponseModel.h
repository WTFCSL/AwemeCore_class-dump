//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface DYAThemeResponseModel : MTLModel <MTLJSONSerializing> {
    NSArray *_themeLists;
    long long _guideMaxCountLimit;
    long long _guideLimitResetPeriod;
    long long _themeResetPeriod;
}

@property (copy, nonatomic) NSArray *themeLists;
@property (nonatomic) long long guideMaxCountLimit;
@property (nonatomic) long long guideLimitResetPeriod;
@property (nonatomic) long long themeResetPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)themeListsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)themeLists;
- (void)setThemeLists:(id)arg0;
- (long long)guideMaxCountLimit;
- (void)setGuideMaxCountLimit:(long long)arg0;
- (long long)guideLimitResetPeriod;
- (void)setGuideLimitResetPeriod:(long long)arg0;
- (long long)themeResetPeriod;
- (void)setThemeResetPeriod:(long long)arg0;
- (void).cxx_destruct;

@end
