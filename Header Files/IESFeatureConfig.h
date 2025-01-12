//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSSet;

@interface IESFeatureConfig : NSObject {
    BOOL _enableCloudScore;
    BOOL _enable;
    BOOL _excludeThis;
    BOOL _isReal;
    long long _range;
    long long _range_app;
    NSDictionary *_extraConfigDict;
    NSSet *_subtype;
    NSString *_subTypeStr;
}

@property (retain, nonatomic) NSString *subTypeStr;
@property (nonatomic) BOOL enableCloudScore;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long range;
@property (nonatomic) long long range_app;
@property (nonatomic) BOOL excludeThis;
@property (nonatomic) BOOL isReal;
@property (retain, nonatomic) NSDictionary *extraConfigDict;
@property (retain, nonatomic) NSSet *subtype;

- (BOOL)isReal;
- (void)setIsReal:(BOOL)arg0;
- (BOOL)containSubType:(id)arg0;
- (void)setEnableCloudScore:(BOOL)arg0;
- (BOOL)excludeThis;
- (void)setExcludeThis:(BOOL)arg0;
- (id)extraConfigDict;
- (void)setSubTypeStr:(id)arg0;
- (id)parseSubtype:(id)arg0;
- (id)subTypeStr;
- (BOOL)enableCloudScore;
- (long long)range_app;
- (void)setRange_app:(long long)arg0;
- (void)setExtraConfigDict:(id)arg0;
- (BOOL)enable;
- (id)subtype;
- (void).cxx_destruct;
- (void)setRange:(long long)arg0;
- (long long)range;
- (void)setSubtype:(id)arg0;
- (void)setEnable:(BOOL)arg0;
- (id)initWithJSONDict:(id)arg0;

@end
