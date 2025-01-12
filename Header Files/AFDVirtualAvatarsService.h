//
//     Generated by private class-dump
//

@class NSString;

@interface AFDVirtualAvatarsService : HTSService <AFDVirtualAvatarsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)profileExtensionAreaCardControllerClass;
- (BOOL)isFeedVideoPlayerUseDynamicAvatar;
- (id)reallyVirtualAvatarModelForCurrentOwnUser:(id)arg0;
- (BOOL)isVirtualAvatarsEnabled;
- (void)launchSetup;
- (void)openFriendsVirtualAvatarsCollectionVCWithUserModels:(id)arg0;
- (void)openFriendsVirtualAvatarsCollectionVCWithUserModels:(id)arg0 withExtraParams:(id)arg1;
- (void)checkNeedShowSwitchToVirtualAvatarTip;
- (id)currentUsedEmotionTextForUserModel:(id)arg0;
- (id)currentUsedEmotionIconUrlForUserModel:(id)arg0;
- (BOOL)isHaveEmotionForUserModel:(id)arg0;
- (void)setVirtualAvatarLocalModelWith:(id)arg0 avatarImageFilePath:(id)arg1 version:(long long)arg2 emotionText:(id)arg3 emotionIcon:(id)arg4;
- (id)reallyVirtualEmotionModelForCurrentOwnUser:(id)arg0;
- (id)virtualEmotionForCurrentOwnUser:(id)arg0;
- (void)getVirtualAvatarDuetFriendsListDataWithCompletion:(id /* block */)arg0;
- (BOOL)needUseVirtualAvatarEmotionForUserModel:(id)arg0;
- (BOOL)hasVirtualCharacterForUser:(id)arg0;
- (void)preloadVirtualAvatarCollectionViewFriendsListDataWhenIMOnlineContactRefresh;
- (id)cloneXVirtualAvatarRenderingPlaceholderURL;
- (id)cloneXVirtualAvatarRenderingPlaceholderImage;
- (void)showVirtualAvatarProfileActionSheet;
- (void)endVirtualCharacterEmotionWithCompletion:(id /* block */)arg0;
- (id)cloneXUnabledToast;

@end
