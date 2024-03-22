//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGuideLimitActionModel : MTLModel <MTLJSONSerializing> {
    BOOL _isAccumulation;
    long long _actionType;
    long long _accumulativeCount;
    long long _accumulativeExpire;
    long long _effectDuration;
}

@property (nonatomic) long long actionType;
@property (nonatomic) long long accumulativeCount;
@property (nonatomic) long long accumulativeExpire;
@property (nonatomic) long long effectDuration;
@property (nonatomic) BOOL isAccumulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)effectDuration;
- (void)setEffectDuration:(long long)arg0;
- (long long)accumulativeCount;
- (void)setAccumulativeCount:(long long)arg0;
- (long long)accumulativeExpire;
- (void)setAccumulativeExpire:(long long)arg0;
- (BOOL)isAccumulation;
- (void)setIsAccumulation:(BOOL)arg0;
- (void)setActionType:(long long)arg0;
- (long long)actionType;

@end
