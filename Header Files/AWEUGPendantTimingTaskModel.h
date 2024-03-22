//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEUGPendantTimingTaskModel : MTLModel <MTLJSONSerializing> {
    BOOL _isParticipate;
    BOOL _hasVideoTask;
    BOOL _finishAll;
    long long _completedCount;
    long long _rewardCount;
    NSString *_videoTaskId;
    NSString *_rewardText;
    NSDictionary *_videoTaskDetailInfo;
}

@property (nonatomic) BOOL isParticipate;
@property (nonatomic) BOOL hasVideoTask;
@property (nonatomic) BOOL finishAll;
@property (nonatomic) long long completedCount;
@property (nonatomic) long long rewardCount;
@property (copy, nonatomic) NSString *videoTaskId;
@property (copy, nonatomic) NSString *rewardText;
@property (copy, nonatomic) NSDictionary *videoTaskDetailInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)rewardCount;
- (void)setRewardCount:(long long)arg0;
- (void)setRewardText:(id)arg0;
- (id)rewardText;
- (BOOL)hasVideoTask;
- (BOOL)finishAll;
- (id)videoTaskDetailInfo;
- (BOOL)isParticipate;
- (void)setIsParticipate:(BOOL)arg0;
- (void)setHasVideoTask:(BOOL)arg0;
- (void)setFinishAll:(BOOL)arg0;
- (void)setCompletedCount:(long long)arg0;
- (id)videoTaskId;
- (void)setVideoTaskId:(id)arg0;
- (void)setVideoTaskDetailInfo:(id)arg0;
- (void).cxx_destruct;
- (long long)completedCount;

@end