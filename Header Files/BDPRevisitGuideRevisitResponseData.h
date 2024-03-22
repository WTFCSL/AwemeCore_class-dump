//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDPRevisitGuideRevisitResponseData : BDPBasePluginModel {
    double _guidance_interval;
    double _real_time_interval;
    NSArray *_conditions;
    NSArray *_award_conditions;
    NSString *_biz_extra;
    long long _remain_count;
}

@property (nonatomic) double guidance_interval;
@property (nonatomic) double real_time_interval;
@property (copy, nonatomic) NSArray *conditions;
@property (copy, nonatomic) NSArray *award_conditions;
@property (copy, nonatomic) NSString *biz_extra;
@property (nonatomic) long long remain_count;

- (long long)remain_count;
- (id)biz_extra;
- (id)award_conditions;
- (double)guidance_interval;
- (double)real_time_interval;
- (void)setGuidance_interval:(double)arg0;
- (void)setReal_time_interval:(double)arg0;
- (void)setAward_conditions:(id)arg0;
- (void)setBiz_extra:(id)arg0;
- (void)setRemain_count:(long long)arg0;
- (void).cxx_destruct;
- (id)conditions;
- (void)setConditions:(id)arg0;

@end