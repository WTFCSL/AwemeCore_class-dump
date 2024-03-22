//
//     Generated by private class-dump
//

@protocol AFDUserProfileService <AFDService, AFDUserProfilePostWorkGuide>

- (id)fansSearchManager;
- (void)openProfileAvatarPreviewControllerWithUser:(id)arg0 placeholderImage:(id)arg1 avatarImage:(id)arg2 fromContext:(id)arg3 isPureMode:(BOOL)arg4 trackPramras:(id)arg5;
- (void)trackRemoveFriendsEventWithTrackType:(unsigned long long)arg0 referString:(id)arg1 userID:(id)arg2 enterMethod:(id)arg3 otherTrackParams:(id)arg4;
- (id)diggProfileView;
- (void)diggProfile:(id)arg0 actionType:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)expandDiggViewIfNeeded;
- (BOOL)enableShowDigg:(id)arg0;
- (void)postFromPostWorkGuide;
- (id)titleForAddFriendsButton;
- (Class)awePrivatePostsViewControllerClass;
- (Class)awePrivateSharedPostsViewControllerClass;
- (id)privatePostsViewControllerWithTargetUser:(id)arg0;
- (id)templateArtistViewControllerWithTargetUser:(id)arg0;
- (id)contactFriendsSearchManager;
- (id)contactSearchManager;
- (id)remarkNameManager;
- (id)remarkNameAlert:(id)arg0;
- (Class)remarkNameManagerClass;
- (id)attributedStringWithIntroducePlaceholder:(id)arg0 isYYLabel:(BOOL)arg1;
- (BOOL)shouldShowBottomDiggBubble:(id)arg0;
- (void)trackProfileLikeShow:(id)arg0;
- (void)saveFShareTaskToken:(id)arg0;
- (BOOL)hasFShareTaskCurrentDay;
- (void)tryLoadFShareTaskRedPocket;
- (void)saveUserProfileEnterFrom;
- (BOOL)checkNeedForceLandLikeTab;
- (long long)diggProfileBottomBubbleType;
- (id)createEmptyRecommendViewControllerWithUserID:(id)arg0;
- (BOOL)shouldShowText;

@end
