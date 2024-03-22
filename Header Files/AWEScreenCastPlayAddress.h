//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEScreenCastPlayAddress : MTLModel <MTLJSONSerializing> {
    NSString *_playUrl;
    NSString *_playBackUrl;
    NSString *_logoType;
    long long _width;
    long long _height;
    double _expiredTime;
}

@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *playBackUrl;
@property (copy, nonatomic) NSString *logoType;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) double expiredTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlayUrl:(id)arg0;
- (double)expiredTime;
- (void)setExpiredTime:(double)arg0;
- (id)logoType;
- (void)setLogoType:(id)arg0;
- (id)playUrl;
- (id)playBackUrl;
- (void)setPlayBackUrl:(id)arg0;
- (void).cxx_destruct;
- (long long)height;
- (void)setWidth:(long long)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;

@end
