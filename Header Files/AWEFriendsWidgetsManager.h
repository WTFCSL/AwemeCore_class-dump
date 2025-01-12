//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFriendsWidgetsManager : NSObject <AWEUserMessage, HTSAppLifeCycle, AWEDigitalWellbeingMessage, AFDCloseFriendsMessage, IESIMLoginManagerMessage, AWEFriendsWidgetsManagerProtocol> {
    BOOL _needDelayTransfer;
    NSString *_delayTransferCID;
    long long _delayTransferConvType;
}

@property (nonatomic) BOOL needDelayTransfer;
@property (retain, nonatomic) NSString *delayTransferCID;
@property (nonatomic) long long delayTransferConvType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userDefaultsKeyForWidgetsType:(unsigned long long)arg0;
+ (id)kindStringForWidgetType:(unsigned long long)arg0;
+ (id)userDefaultsDictForWidgetType:(unsigned long long)arg0;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishUpdateAwemeUser;
- (void)didUpdateUserOnLaunch;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)updateUserDefaultsForStartShootWidgetWithUserModel:(id)arg0;
- (void)setNeedTransferToChatWithConversationID:(id)arg0 conversationType:(long long)arg1;
- (void)transferToChatIfNeeded;
- (void)updateUserDefaultsWithDict:(id)arg0 forWidgetType:(unsigned long long)arg1;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)didXTTTokenChanged;
- (void)onboardingTimeUpdated;
- (void)p_updateUserInfoForWidgets;
- (id)userDefaultsKeyForWidgetsType:(unsigned long long)arg0;
- (void)synchronizeCookiesWithExtension;
- (void)synchronizeTokenWithExtension;
- (void)setNeedDelayTransfer:(BOOL)arg0;
- (void)setDelayTransferCID:(id)arg0;
- (void)setDelayTransferConvType:(long long)arg0;
- (BOOL)needDelayTransfer;
- (id)delayTransferCID;
- (long long)delayTransferConvType;
- (id)localizeForWidgetType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setup;
- (void)dealloc;

@end
