//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWEPushExtraSiriSuggestConfigModel : MTLModel <MTLJSONSerializing> {
    BOOL _eligibleForHandoff;
    BOOL _eligibleForSearch;
    BOOL _eligibleForPrediction;
    long long _frequencyControlledCount;
    double _expireTime;
    NSDate *_date;
}

@property (nonatomic) long long frequencyControlledCount;
@property (nonatomic) BOOL eligibleForHandoff;
@property (nonatomic) BOOL eligibleForSearch;
@property (nonatomic) BOOL eligibleForPrediction;
@property (nonatomic) double expireTime;
@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)frequencyControlledCount;
- (void)setFrequencyControlledCount:(long long)arg0;
- (BOOL)eligibleForSearch;
- (BOOL)eligibleForHandoff;
- (void).cxx_destruct;
- (void)setDate:(id)arg0;
- (void)setEligibleForPrediction:(BOOL)arg0;
- (void)setEligibleForSearch:(BOOL)arg0;
- (id)date;
- (void)setEligibleForHandoff:(BOOL)arg0;
- (BOOL)eligibleForPrediction;
- (double)expireTime;
- (void)setExpireTime:(double)arg0;

@end
