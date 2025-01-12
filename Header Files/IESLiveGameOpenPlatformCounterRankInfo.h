//
//     Generated by private class-dump
//

@class NSString, IESLiveGameOpenPlatformCounterRuleRuleInfo, NSArray;

@interface IESLiveGameOpenPlatformCounterRankInfo : NSObject {
    long long _type;
    NSString *_counter_id;
    long long _left_time;
    long long _total_time;
    IESLiveGameOpenPlatformCounterRuleRuleInfo *_rule;
    NSArray *_top_contributors;
    NSArray *_points;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *counter_id;
@property (nonatomic) long long left_time;
@property (nonatomic) long long total_time;
@property (retain, nonatomic) IESLiveGameOpenPlatformCounterRuleRuleInfo *rule;
@property (copy, nonatomic) NSArray *top_contributors;
@property (copy, nonatomic) NSArray *points;

+ (id)modelWithCountInfo:(id)arg0;

- (id)counter_id;
- (void)setCounter_id:(id)arg0;
- (void)setTop_contributors:(id)arg0;
- (void)setLeft_time:(long long)arg0;
- (long long)left_time;
- (void)setTotal_time:(long long)arg0;
- (long long)total_time;
- (id)top_contributors;
- (void).cxx_destruct;
- (id)points;
- (long long)type;
- (void)setRule:(id)arg0;
- (void)setType:(long long)arg0;
- (id)rule;
- (void)setPoints:(id)arg0;

@end
