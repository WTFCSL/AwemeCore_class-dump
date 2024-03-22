//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyC2AutoPlayModel : MTLModel <MTLJSONSerializing> {
    BOOL _enableAutoPlay;
    long long _autoPlayAffectTime;
}

@property (nonatomic) BOOL enableAutoPlay;
@property (nonatomic) long long autoPlayAffectTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableAutoPlay;
- (void)setEnableAutoPlay:(BOOL)arg0;
- (long long)autoPlayAffectTime;
- (void)setAutoPlayAffectTime:(long long)arg0;

@end
