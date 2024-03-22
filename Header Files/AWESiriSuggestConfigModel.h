//
//     Generated by private class-dump
//

@class NSString, AWEUserActivityModel;

@interface AWESiriSuggestConfigModel : MTLModel <MTLJSONSerializing> {
    long long _frequencyControlledCount;
    AWEUserActivityModel *_userActivityModel;
}

@property (nonatomic) long long frequencyControlledCount;
@property (retain, nonatomic) AWEUserActivityModel *userActivityModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userActivityConfigDictionaryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)frequencyControlledCount;
- (id)userActivityModel;
- (void)setFrequencyControlledCount:(long long)arg0;
- (void)setUserActivityModel:(id)arg0;
- (void).cxx_destruct;

@end