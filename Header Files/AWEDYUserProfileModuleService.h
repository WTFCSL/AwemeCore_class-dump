//
//     Generated by private class-dump
//

@interface AWEDYUserProfileModuleService : AWEUserProfileModuleService

- (Class)aweUserHomeViewControllerClass;
- (Class)aweUserDetailViewControllerClass;
- (void)showProfileHeaderActionControllerWithUser:(id)arg0 params:(id)arg1 unfollowConfirmationBlock:(id /* block */)arg2;
- (void)showLocationEditLocationFromH5:(id /* block */)arg0;
- (void)directShowAvatarPickerWithEnterFrom:(id)arg0 isFirstReplace:(BOOL)arg1 enablePublishAvatarStory:(BOOL)arg2 trackInfo:(id)arg3;
- (id)profileHeaderActionController;
- (id)locationDisplayTextGenerator;
- (BOOL)isNewProfileUIStyle;

@end