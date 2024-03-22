//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAnchorGuideModule : IESLiveModule <IESLiveAnchorGuideService, IESLiveAnchorGuideModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isStartLiveRequesting;

- (id)provideServices;
- (id)announcementService;
- (id)agreementServiceInterface;
- (id)guidePromptRouter;
- (id)permissionApplyServiceInterface;
- (id)audioBackgroundService;
- (id)guideGameCPService;
- (id)anchorTimeSchedulePreference;
- (id)preAnnouncementInterface;
- (Class)anchorGuideABManager;
- (id)introductionServiceInterface;
- (BOOL)isStartLiveRequesting;
- (BOOL)isResumeRequestChecking;
- (id)chatroomResumeModel;
- (BOOL)canSetCameraActive;
- (id)getFansInfoPromptShowData;
- (void)handleCreateRoomError:(id)arg0;
- (id)getTrackSubscene:(long long)arg0;
- (void)updateWithRoom:(id)arg0 configModel:(id)arg1 readyToLive:(id /* block */)arg2 landscape:(BOOL)arg3;
- (void)setCameraActive:(BOOL)arg0;

@end