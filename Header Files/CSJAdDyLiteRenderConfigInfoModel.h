//
//     Generated by private class-dump
//

@class NSString;

@interface CSJAdDyLiteRenderConfigInfoModel : CSJBasicModel {
    long long _pre_request_ad_num;
    long long _reward_task_goal;
    long long _reward_task_type;
    NSString *_reward_text;
    long long _reward_time;
}

@property (nonatomic) long long pre_request_ad_num;
@property (nonatomic) long long reward_task_goal;
@property (nonatomic) long long reward_task_type;
@property (copy, nonatomic) NSString *reward_text;
@property (nonatomic) long long reward_time;

- (long long)reward_time;
- (long long)pre_request_ad_num;
- (void)setPre_request_ad_num:(long long)arg0;
- (long long)reward_task_goal;
- (void)setReward_task_goal:(long long)arg0;
- (long long)reward_task_type;
- (void)setReward_task_type:(long long)arg0;
- (id)reward_text;
- (void)setReward_text:(id)arg0;
- (void)setReward_time:(long long)arg0;
- (void).cxx_destruct;

@end
