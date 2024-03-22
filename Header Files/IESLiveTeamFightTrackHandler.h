//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveInteractionBattleFullLinkMonitor, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveTeamFightTrackHandler : NSObject {
    NSString *_requestPage;
    NSString *_finishReason;
    long long _finishFightTime;
    long long _finishUserId;
    long long _guestCntBeforeSwitchScene;
    long long _guestCntAfterSwitchScene;
    NSMutableDictionary *_createLoadTimestampDict;
    NSMutableDictionary *_startLoadTimestampDict;
    id<IESLiveRoomService> _roomModel;
    HTSEventContext *_trackContext;
    IESLiveInteractionBattleFullLinkMonitor *_monitor;
    double _clickStartTimestamp;
    long long _isCreateRecorded;
    long long _isStartRecorded;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveInteractionBattleFullLinkMonitor *monitor;
@property (nonatomic) double clickStartTimestamp;
@property (nonatomic) long long isCreateRecorded;
@property (nonatomic) long long isStartRecorded;
@property (copy, nonatomic) NSString *requestPage;
@property (retain, nonatomic) NSString *finishReason;
@property (nonatomic) long long finishFightTime;
@property (nonatomic) long long finishUserId;
@property (nonatomic) long long guestCntBeforeSwitchScene;
@property (nonatomic) long long guestCntAfterSwitchScene;
@property (retain, nonatomic) NSMutableDictionary *createLoadTimestampDict;
@property (retain, nonatomic) NSMutableDictionary *startLoadTimestampDict;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setFinishReason:(id)arg0;
- (id)finishReason;
- (id)roomModel;
- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (void)trackWithEvent:(id)arg0 extra:(id)arg1;
- (void)setClickStartTimestamp:(double)arg0;
- (double)clickStartTimestamp;
- (long long)finishUserId;
- (void)monitorWithName:(id)arg0 extra:(id)arg1 eventType:(unsigned long long)arg2;
- (void)setFinishUserId:(long long)arg0;
- (id)appendCommonExtra:(id)arg0;
- (void)monitorIMWithName:(id)arg0 message:(id)arg1 extra:(id)arg2;
- (void)monitorWithAPIPath:(id)arg0 requestTimestamp:(double)arg1 error:(id)arg2 response:(id)arg3 extra:(id)arg4;
- (void)monitorWithName:(id)arg0 extra:(id)arg1 eventType:(unsigned long long)arg2 metric:(id)arg3;
- (void)setGuestCntBeforeSwitchScene:(long long)arg0;
- (void)setGuestCntAfterSwitchScene:(long long)arg0;
- (id)initWithTrackContext:(id)arg0 room:(id)arg1 DIContext:(id)arg2;
- (id)userTypeStr;
- (id)startLoadTimestampDict;
- (void)setStartLoadTimestampDict:(id)arg0;
- (long long)guestCntBeforeSwitchScene;
- (long long)guestCntAfterSwitchScene;
- (void)cleanCreateDict;
- (void)recordCreateTimestampWithKey:(int)arg0;
- (void)recordStartTimestampWithKey:(int)arg0;
- (id)createFlexibleTeamFightExtraWithTeamfightInfo:(id)arg0;
- (long long)finishFightTime;
- (void)monitorStartTeamFightLoadDurationIfNeed;
- (void)recordCreateTimestampWithKey:(int)arg0 timestamp:(double)arg1;
- (void)recordStartTimestampWithKey:(int)arg0 timestamp:(double)arg1;
- (BOOL)isAnchorPartWithTeamInfos:(id)arg0;
- (void)setFinishFightTime:(long long)arg0;
- (id)statusStrWithStatus:(long long)arg0;
- (void)cleanStartDict;
- (id)createFlexibleTeamFightExtraWithTeamfightModel:(id)arg0;
- (id)statusStr;
- (id)createLoadTimestampDict;
- (void)setCreateLoadTimestampDict:(id)arg0;
- (long long)isCreateRecorded;
- (void)setIsCreateRecorded:(long long)arg0;
- (void)monitorCreateTeamFightLoadDurationIfNeed;
- (void)tryInsertCreateDuration:(id)arg0 withKey:(int)arg1;
- (double)relativeCreateTimestampWithKey:(int)arg0;
- (id)createKeyStrWithkey:(int)arg0;
- (long long)isStartRecorded;
- (void)setIsStartRecorded:(long long)arg0;
- (void)tryInsertStartDuration:(id)arg0 withKey:(int)arg1;
- (double)relativeStartTimestampWithKey:(int)arg0;
- (id)startKeyStrWithkey:(int)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end