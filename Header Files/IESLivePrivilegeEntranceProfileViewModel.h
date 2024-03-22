//
//     Generated by private class-dump
//

@class NSString, HTSLiveSubscribeInfoResponse_Data, NSNumber, IESLiveCombineSubject;

@interface IESLivePrivilegeEntranceProfileViewModel : IESLiveCubeViewModel <IESLiveFansGroupActions> {
    BOOL _showingFansClubUrgeAnimation;
    BOOL _expiredShouldGuide;
    BOOL _isAnchor;
    NSString *_fansclubState;
    NSString *_vipState;
    NSNumber *_showFansclubGuide;
    NSNumber *_showVIPGuide;
    NSNumber *_fansclubLevel;
    NSNumber *_enableShowAnimation;
    NSNumber *_roomFansclubDataReady;
    NSNumber *_roomVIPDataReady;
    IESLiveCombineSubject *_showParticipateUrgeSubject;
    HTSLiveSubscribeInfoResponse_Data *_subscribeInfo;
}

@property (nonatomic) BOOL expiredShouldGuide;
@property (retain, nonatomic) NSString *fansclubState;
@property (retain, nonatomic) NSString *vipState;
@property (retain, nonatomic) NSNumber *showFansclubGuide;
@property (retain, nonatomic) NSNumber *showVIPGuide;
@property (retain, nonatomic) NSNumber *fansclubLevel;
@property (retain, nonatomic) NSNumber *enableShowAnimation;
@property (retain, nonatomic) NSNumber *roomFansclubDataReady;
@property (retain, nonatomic) NSNumber *roomVIPDataReady;
@property (nonatomic) BOOL showingFansClubUrgeAnimation;
@property (retain, nonatomic) HTSLiveSubscribeInfoResponse_Data *subscribeInfo;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveCombineSubject *showParticipateUrgeSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (id)subscribeInfo;
- (void)setSubscribeInfo:(id)arg0;
- (void)bindService;
- (void)didFansGroupEntryInfoRequestFinish:(BOOL)arg0 fansGroupEntryInfo:(id)arg1;
- (void)didReceiveHTSLiveFansclubMessage:(id)arg0;
- (id)fansclubLevel;
- (void)setFansclubState:(id)arg0;
- (id)fansclubState;
- (id)enableShowAnimation;
- (id)showFansclubGuide;
- (void)setShowFansclubGuide:(id)arg0;
- (void)setFansclubLevel:(id)arg0;
- (id)roomFansclubDataReady;
- (void)setRoomFansclubDataReady:(id)arg0;
- (void)setEnableShowAnimation:(id)arg0;
- (id)vipState;
- (void)setVipState:(id)arg0;
- (id)roomVIPDataReady;
- (void)setRoomVIPDataReady:(id)arg0;
- (id)showVIPGuide;
- (void)setShowVIPGuide:(id)arg0;
- (void)handleVIPUpdateInfo:(id)arg0 fromType:(long long)arg1;
- (void)handleFollowEvent;
- (void)setExpiredShouldGuide:(BOOL)arg0;
- (BOOL)expiredShouldGuide;
- (id)initWithAnchorTag:(BOOL)arg0;
- (BOOL)enableVIPEntrance;
- (id)trackVIPStatus;
- (BOOL)showingFansClubUrgeAnimation;
- (id)showParticipateUrgeSubject;
- (void)onParticipateUrgeStart;
- (void)onParticipateUrgeEnd;
- (void)showFansGuideIfNeededWithModel:(id)arg0;
- (void)startJoinFansClubGuideIfNeededWithModel:(id)arg0;
- (void)handleFansclubMessage:(id)arg0;
- (void)setShowingFansClubUrgeAnimation:(BOOL)arg0;
- (void)setShowParticipateUrgeSubject:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)dealloc;

@end