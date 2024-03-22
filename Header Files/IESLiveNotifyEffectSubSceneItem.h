//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESLiveNotifyEffectFrequencyConfig;

@interface IESLiveNotifyEffectSubSceneItem : MTLModel <MTLJSONSerializing> {
    NSString *_key;
    IESLiveNotifyEffectFrequencyConfig *_frequencyConfig;
    long long _maxShowTimes;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) IESLiveNotifyEffectFrequencyConfig *frequencyConfig;
@property (nonatomic) long long maxShowTimes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)frequencyConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setMaxShowTimes:(long long)arg0;
- (long long)maxShowTimes;
- (id)frequencyConfig;
- (void)setFrequencyConfig:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;

@end