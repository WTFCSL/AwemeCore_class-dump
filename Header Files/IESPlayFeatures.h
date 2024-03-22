//
//     Generated by private class-dump
//

@class IESHistoryFeedFeatureInfoHelper;

@interface IESPlayFeatures : NSObject {
    long long _maxHistoryCount;
    IESHistoryFeedFeatureInfoHelper *_featureInfoHelper;
}

@property (nonatomic) long long maxHistoryCount;
@property (retain, nonatomic) IESHistoryFeedFeatureInfoHelper *featureInfoHelper;

- (void)trackEvent:(unsigned long long)arg0 withParams:(id)arg1;
- (BOOL)fillFeatures:(id)arg0 withConfig:(id)arg1 inputData:(id)arg2;
- (long long)maxHistoryCount;
- (void)setMaxHistoryCount:(long long)arg0;
- (BOOL)fillTrackInfoWithModel:(id)arg0 aid:(id)arg1;
- (id)getRealValuesForKey:(id)arg0 withAid:(id)arg1;
- (id)featureInfoHelper;
- (void)setFeatureInfoHelper:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
