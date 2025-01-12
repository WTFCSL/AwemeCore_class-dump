//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDUGLuckyCatRewardVideoAdXBridgeModel : BDUGLuckyBridgeModel {
    NSString *_taskId;
    NSString *_taskKey;
    NSString *_amount;
    NSString *_adRit;
    NSString *_adAliasPosition;
    NSString *_scene;
    NSNumber *_needReward;
    NSNumber *_needSdkReward;
    NSString *_token;
}

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *adRit;
@property (copy, nonatomic) NSString *adAliasPosition;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *needReward;
@property (retain, nonatomic) NSNumber *needSdkReward;
@property (copy, nonatomic) NSString *token;

+ (id)JSONKeyPathsByPropertyKey;

- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (id)adRit;
- (id)adAliasPosition;
- (id)needReward;
- (void)setAdRit:(id)arg0;
- (void)setAdAliasPosition:(id)arg0;
- (void)setNeedReward:(id)arg0;
- (id)needSdkReward;
- (void)setNeedSdkReward:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (id)dictionaryValue;
- (id)taskId;
- (id)scene;
- (id)amount;
- (void)setAmount:(id)arg0;
- (void)setTaskId:(id)arg0;

@end
