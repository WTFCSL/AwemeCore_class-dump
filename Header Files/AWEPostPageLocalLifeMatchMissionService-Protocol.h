//
//     Generated by private class-dump
//

@protocol AWEPostPageLocalLifeMatchMissionService <AWEPostPageBaseService>

@property (nonatomic) long long cleanLocalLifeMatchMissionSignal;

@optional

- (BOOL)isLocalLifeMatchMissionFromTask;
- (void)trackCommonMissionEventWithEventType:(long long)arg0 missionState:(long long)arg1;
- (void)trackLifeMissionEventWithEventType:(long long)arg0 idx:(long long)arg1 hasTask:(BOOL)arg2;
- (long long)cleanLocalLifeMatchMissionSignal;
- (void)setCleanLocalLifeMatchMissionSignal:(long long)arg0;
- (id)taskID;

@end