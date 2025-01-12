//
//     Generated by private class-dump
//

@class NSArray;

@interface AWESearchDeduplicationConfigModel : AWEBaseApiModel {
    long long _resultTriggerTime;
    long long _detailTriggerTime;
    NSArray *_deduplicationTargets;
}

@property (nonatomic) long long resultTriggerTime;
@property (nonatomic) long long detailTriggerTime;
@property (retain, nonatomic) NSArray *deduplicationTargets;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)resultTriggerTime;
- (void)setResultTriggerTime:(long long)arg0;
- (long long)detailTriggerTime;
- (void)setDetailTriggerTime:(long long)arg0;
- (id)deduplicationTargets;
- (void)setDeduplicationTargets:(id)arg0;
- (void).cxx_destruct;

@end
