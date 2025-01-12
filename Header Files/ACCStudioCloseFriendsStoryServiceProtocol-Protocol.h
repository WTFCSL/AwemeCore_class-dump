//
//     Generated by private class-dump
//

@protocol ACCStudioCloseFriendsStoryServiceProtocol <NSObject>

- (BOOL)shouldShowGuide;
- (BOOL)forbidYoungForPublishing;
- (BOOL)isDarkColor:(id)arg0;
- (BOOL)isYoungerThan24;
- (id)guideTitle:(id)arg0;
- (id)guideSubtitle;
- (void)guideDidShow;
- (id)publishButtonTitleWithPublishModel:(id)arg0;
- (BOOL)isCloseFriendsSelectedWithPublishModel:(id)arg0;
- (BOOL)isFriendsSelectedWithPublishModel:(id)arg0;
- (BOOL)needUpdatePublistButtonStyleWithPublishModel:(id)arg0;
- (void)cachePrivacyInfoWithPublishModel:(id)arg0;
- (void)updatePrivacyInfoWithLastCacheIfNeeded:(id)arg0;
- (BOOL)lastPrivacyTypeIsCloseFriends;
- (BOOL)lastPrivacyTypeIsFriends;
- (BOOL)shouldUpdatePrivacyTypeWithLastCache:(id)arg0;
- (void)updatePrivacyInfoUseFriendVisibleToPublishModel:(id)arg0;

@end
