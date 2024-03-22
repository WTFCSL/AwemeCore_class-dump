//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveMultiLinkerTeamTaskModel : NSObject {
    float _rewardBuffMultiple;
    float _onlyOneFinishRewardBuffMultiple;
    int _rewardType;
    int _targetType;
    float _currentRewardBuffMultiple;
    long long _noticeShowDuration;
    long long _taskDuration;
    long long _taskRemianTime;
    long long _rewardRemianTime;
    long long _tipsBeginShowTime;
    long long _noticeBeginShowTime;
    long long _taskBeginTime;
    long long _taskEndTime;
    long long _rewardResultShowTime;
    NSString *_targetCountStr;
    NSString *_countStillNeededStr;
    NSString *_rewardScoreStr;
    NSString *_progressBlurText;
}

@property (nonatomic) float rewardBuffMultiple;
@property (nonatomic) float onlyOneFinishRewardBuffMultiple;
@property (nonatomic) int rewardType;
@property (nonatomic) int targetType;
@property (nonatomic) long long noticeShowDuration;
@property (nonatomic) long long taskDuration;
@property (nonatomic) long long taskRemianTime;
@property (nonatomic) long long rewardRemianTime;
@property (nonatomic) long long tipsBeginShowTime;
@property (nonatomic) long long noticeBeginShowTime;
@property (nonatomic) long long taskBeginTime;
@property (nonatomic) long long taskEndTime;
@property (nonatomic) long long rewardResultShowTime;
@property (copy, nonatomic) NSString *targetCountStr;
@property (copy, nonatomic) NSString *countStillNeededStr;
@property (copy, nonatomic) NSString *rewardScoreStr;
@property (nonatomic) float currentRewardBuffMultiple;
@property (copy, nonatomic) NSString *progressBlurText;

- (void)setRewardType:(int)arg0;
- (int)rewardType;
- (void)setTaskDuration:(long long)arg0;
- (long long)taskDuration;
- (long long)taskEndTime;
- (void)setTaskEndTime:(long long)arg0;
- (float)rewardBuffMultiple;
- (id)progressBlurText;
- (float)currentRewardBuffMultiple;
- (id)targetCountStr;
- (long long)taskBeginTime;
- (void)setTaskBeginTime:(long long)arg0;
- (float)onlyOneFinishRewardBuffMultiple;
- (void)setRewardBuffMultiple:(float)arg0;
- (void)setTipsBeginShowTime:(long long)arg0;
- (void)setNoticeBeginShowTime:(long long)arg0;
- (void)setOnlyOneFinishRewardBuffMultiple:(float)arg0;
- (long long)noticeBeginShowTime;
- (void)setNoticeShowDuration:(long long)arg0;
- (id)integerValueTransformToString:(long long)arg0;
- (void)setTargetCountStr:(id)arg0;
- (void)setCountStillNeededStr:(id)arg0;
- (void)setProgressBlurText:(id)arg0;
- (void)setCurrentRewardBuffMultiple:(float)arg0;
- (void)setRewardResultShowTime:(long long)arg0;
- (void)setRewardScoreStr:(id)arg0;
- (void)resolveTeamTaskConfig:(id)arg0;
- (void)resolveTeamTaskInfo:(id)arg0;
- (long long)noticeShowDuration;
- (long long)taskRemianTime;
- (void)setTaskRemianTime:(long long)arg0;
- (long long)rewardRemianTime;
- (void)setRewardRemianTime:(long long)arg0;
- (long long)tipsBeginShowTime;
- (long long)rewardResultShowTime;
- (id)countStillNeededStr;
- (id)rewardScoreStr;
- (void).cxx_destruct;
- (int)targetType;
- (void)setTargetType:(int)arg0;

@end