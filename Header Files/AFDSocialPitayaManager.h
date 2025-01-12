//
//     Generated by private class-dump
//

@class NSString, AFDSocialPitayaShareInfo, AWEProgressLoadingView, AWEAwemeModel, AFDFrequencyExitRule;

@interface AFDSocialPitayaManager : NSObject <AWEPublishTaskMessage, AFDSocialPitayaManagerProtocol, AWEAlertProtocol> {
    BOOL _isRequestOnAir;
    BOOL _enableShowPostReflowAfterPublish;
    BOOL _isOnShare;
    BOOL _willResignActive;
    AWEAwemeModel *_currentAweme;
    AFDFrequencyExitRule *_exitRule;
    AFDFrequencyExitRule *_showExitRule;
    AWEProgressLoadingView *_loadingView;
    AFDSocialPitayaShareInfo *_currentSocialPitayaShareInfo;
    NSString *_noticeFollowAwemeID;
    long long _firstShareRewardNumber;
    NSString *_firstShareRewardSchema;
}

@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) AWEProgressLoadingView *loadingView;
@property (retain, nonatomic) AFDFrequencyExitRule *exitRule;
@property (retain, nonatomic) AFDFrequencyExitRule *showExitRule;
@property (nonatomic) BOOL enableShowPostReflowAfterPublish;
@property (retain, nonatomic) AFDSocialPitayaShareInfo *currentSocialPitayaShareInfo;
@property (retain, nonatomic) NSString *noticeFollowAwemeID;
@property (nonatomic) BOOL isOnShare;
@property (nonatomic) long long firstShareRewardNumber;
@property (retain, nonatomic) NSString *firstShareRewardSchema;
@property (nonatomic) BOOL willResignActive;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showSocialPitayaShareListPanelWithAweme:(id)arg0 shareInfo:(id)arg1 enterFrom:(id)arg2 enterMethod:(id)arg3 onClose:(id /* block */)arg4;
+ (void)showSocialPitayaShareTokenWithAweme:(id)arg0 config:(id)arg1 previousType:(long long)arg2;
+ (void)addReflowFollowAutoDismissTimesWithTaskType:(unsigned long long)arg0;
+ (void)clearStorageAfterActionWithTaskType:(unsigned long long)arg0;
+ (long long)postReflowStyleWithTaskType:(unsigned long long)arg0;
+ (BOOL)isLandingOnFriendTab;
+ (id)storageKeyWithName:(id)arg0;
+ (void)showSocialPitayaShareTokenWithAweme:(id)arg0 config:(id)arg1 previousType:(long long)arg2 onClose:(id /* block */)arg3;
+ (void)showSocialPitayaShareListPanelWithAweme:(id)arg0 isMainPlazaAfterPost:(BOOL)arg1 shareInfo:(id)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4 onClose:(id /* block */)arg5;
+ (id)currentTabName;
+ (id)contextWithAweme:(id)arg0 taskType:(long long)arg1 taskStatus:(long long)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4;
+ (void)requestPanelTitleWithAweme:(id)arg0 isMainPlazaAfterPost:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)showPostReflowWithAweme:(id)arg0 shareInfo:(id)arg1 enterFrom:(id)arg2 onClose:(id /* block */)arg3;
+ (void)showDiggCollectToTargetMainPlazaAlertWithAweme:(id)arg0 shareInfo:(id)arg1 enterFrom:(id)arg2 onClose:(id /* block */)arg3;
+ (void)jsbShowSocialPitayaShareListPanelWithAweme:(id)arg0 taskType:(long long)arg1 taskStatus:(long long)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4 tokenShareConfig:(id)arg5;
+ (id)sharedInstance;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (BOOL)isRequestOnAir;
- (id)currentAweme;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)onAppDidBecomeActive;
- (void)dismissLoadingView;
- (void)markReflowTokenIsOnShare;
- (BOOL)enableShowSocialPitayaPostReflow;
- (void)setCurrentAweme:(id)arg0;
- (id)exitRule;
- (void)setExitRule:(id)arg0;
- (void)setIsOnShare:(BOOL)arg0;
- (BOOL)isOnShare;
- (id)showExitRule;
- (void)triggerActivityStartWithAwemeID:(id)arg0 taskType:(unsigned long long)arg1 taskStatus:(unsigned long long)arg2;
- (void)onApplicationDidBecomeActive:(id)arg0;
- (void)onApplicationWillResignActive:(id)arg0;
- (BOOL)enableShowPostReflowAfterPublish;
- (id)currentSocialPitayaShareInfo;
- (void)setNoticeFollowAwemeID:(id)arg0;
- (id)noticeFollowAwemeID;
- (BOOL)shouldTriggerActivityStartWithTaskType:(unsigned long long)arg0 taskStatus:(unsigned long long)arg1;
- (void)setFirstShareRewardNumber:(long long)arg0;
- (void)setFirstShareRewardSchema:(id)arg0;
- (void)setCurrentSocialPitayaShareInfo:(id)arg0;
- (void)setEnableShowPostReflowAfterPublish:(BOOL)arg0;
- (void)setWillResignActive:(BOOL)arg0;
- (long long)firstShareRewardNumber;
- (id)firstShareRewardSchema;
- (void)addNoticeUserID:(id)arg0 awemeID:(id)arg1;
- (id)socialPitayaFollowAwemeID;
- (void)clearNoticeFollowAwemeID;
- (void)fetchSocialPitayaTokenWithAweme:(id)arg0 shareScene:(id)arg1 taskType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (BOOL)enableOpenThirdPlatformApp;
- (void)showDebugSnackbarWithTaskType:(unsigned long long)arg0;
- (void)showDebugSocialPitayaShareTokenWithTaskType:(unsigned long long)arg0;
- (void)showDebugSocialPitayaShareListPanelWithTaskType:(unsigned long long)arg0;
- (id)addPitayaActivityToken:(id)arg0;
- (void)setShowExitRule:(id)arg0;
- (BOOL)willResignActive;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
