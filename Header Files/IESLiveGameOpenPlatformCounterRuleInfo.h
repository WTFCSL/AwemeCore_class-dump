//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLiveGameOpenPlatformCounterRuleInfo : NSObject {
    long long _link_state;
    NSArray *_duration_choices;
    NSArray *_rules;
}

@property (nonatomic) long long link_state;
@property (copy, nonatomic) NSArray *duration_choices;
@property (copy, nonatomic) NSArray *rules;

+ (id)modelWithCounterConfig:(id)arg0;

- (void)setLink_state:(long long)arg0;
- (void)setDuration_choices:(id)arg0;
- (long long)link_state;
- (id)duration_choices;
- (void).cxx_destruct;
- (void)setRules:(id)arg0;
- (id)rules;

@end
