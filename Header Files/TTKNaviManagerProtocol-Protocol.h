//
//     Generated by private class-dump
//

@protocol TTKNaviManagerProtocol <NSObject>

+ (unsigned long long)effectPluginChannelID;
+ (void)increaseAutoSyncCount;
+ (void)onSendPostToEdit:(id)arg0 completion:(id /* block */)arg1;
+ (void)markShownNaviIntroPage;
+ (double)cacheTimeoutDuration;
+ (long long)autoSyncToDaily;
+ (id)updateAvatarBizParams;
+ (void)markCurrentAutoSync:(BOOL)arg0;
+ (void)onSendPostToQuickStory:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)enableSnapshotAsPlaceholder;
+ (BOOL)hasShownNaviIntroPageBefore;
+ (BOOL)disableMigrateSecUserIdFunc;
+ (long long)classTabType;
+ (void)duetWithUser:(id)arg0;
+ (void)log:(id)arg0;
+ (void)setupContext;
+ (id)panelName;

@end
