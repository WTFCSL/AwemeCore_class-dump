//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSArray;
@protocol IESLCMessageHandlerProtocol;

@interface AWESocialCountNotificationManager : NSObject <AWESettingsComboRequestProtocol, AWEUserMessage, IESLCMessageHandlerService, AWEConcernFollowListUnreadCacheMessage, AWESocialCountNotificationManagerProtocol> {
    BOOL _isSwitchUser;
    double _lastSocialTimestamp;
    NSDictionary *_comboSocialRequestResult;
    NSString *_comboSocialRequestUserID;
    NSArray *_followTabNotices;
    long long _returnSource;
}

@property (nonatomic) double lastSocialTimestamp;
@property (copy, nonatomic) NSDictionary *comboSocialRequestResult;
@property (copy, nonatomic) NSString *comboSocialRequestUserID;
@property (copy, nonatomic) NSArray *followTabNotices;
@property (nonatomic) long long returnSource;
@property (nonatomic) BOOL isSwitchUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (void)_aweLazyRegisterStaticLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (id)settingsRequestParamsDictionary;
+ (id)sharedManager;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (id)followTabNotices;
- (long long)returnSource;
- (void)setComboSocialRequestUserID:(id)arg0;
- (void)setComboSocialRequestResult:(id)arg0;
- (void)fetchInteractSocialNotification:(id /* block */)arg0 isLongConnectionRequest:(BOOL)arg1 context:(id)arg2;
- (void)fetchInteractSocialCountNotification:(id /* block */)arg0 withLongConnectionNotificationType:(long long)arg1 context:(id)arg2;
- (BOOL)isSwitchUser;
- (void)setFollowTabNotices:(id)arg0;
- (void)setIsSwitchUser:(BOOL)arg0;
- (double)lastSocialTimestamp;
- (void)setLastSocialTimestamp:(double)arg0;
- (id)fetchInteractNotificationParams:(long long)arg0 targetAPI:(long long)arg1;
- (id)comboSocialRequestResult;
- (id)comboSocialRequestUserID;
- (void)processJsonObj:(id)arg0 withError:(id)arg1 fromSource:(long long)arg2 andCompletion:(id /* block */)arg3 isComboRequestResult:(BOOL)arg4 targetAPI:(long long)arg5 context:(id)arg6;
- (void)setReturnSource:(long long)arg0;
- (void)addHomepageFollowMonitorWithError:(id)arg0 source:(long long)arg1;
- (void)awe_configFollowTabChannelWithDict:(id)arg0;
- (void)setupFollowTabNotices:(id)arg0 time:(double)arg1 type:(long long)arg2 context:(id)arg3;
- (void)p_handleMessageWithObject:(id)arg0;
- (void)addReceiveLongLinkEvent:(id)arg0;
- (id)init;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;

@end
