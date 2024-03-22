//
//     Generated by private class-dump
//

@interface AWELiveShareHelper : NSObject

+ (void)shareWithInsideType:(long long)arg0 contentModel:(id)arg1 roomModel:(id)arg2;
+ (void)fetchQRCodeImageWithType:(long long)arg0 itemID:(id)arg1 completion:(id /* block */)arg2;
+ (void)openChatChannel:(id)arg0 withHeight:(double)arg1 cornerRadii:(double)arg2 showRecommond:(BOOL)arg3 fetchModel:(id /* block */)arg4 clickHandler:(id /* block */)arg5 inviteInfo:(id /* block */)arg6 shareUsersBlock:(id /* block */)arg7 dismissBlock:(id /* block */)arg8 showBlock:(id /* block */)arg9;
+ (void)inviteFriendsToJoinChatChannelV2:(id)arg0 inviteId:(id)arg1 roomType:(id)arg2 users:(id)arg3 context:(id)arg4;
+ (void)showSharePanelWithContentModel:(id)arg0 roomModel:(id)arg1 onViewController:(id)arg2;
+ (void)showPreLiveSharePanelWithContentModel:(id)arg0 roomModel:(id)arg1 onViewController:(id)arg2;
+ (void)shareLandscapeLiveWithContent:(id)arg0 roomModel:(id)arg1 withType:(id)arg2;
+ (BOOL)checkShareChannelAvailable:(long long)arg0 needToast:(BOOL)arg1;
+ (id)getShareModelWithRoom:(id)arg0 shareContent:(id)arg1;
+ (void)spliceImageShareWithModel:(id)arg0 content:(id)arg1 fromController:(id)arg2 dismissBlock:(id /* block */)arg3;
+ (void)openLiveBoardWithModel:(id)arg0 content:(id)arg1 fromController:(id)arg2 dismissBlock:(id /* block */)arg3;
+ (void)addTrackParamsToContentModel:(id)arg0;
+ (void)adjustMappedRoom:(id)arg0 withShareContent:(id)arg1;
+ (id)livesdkShareEventPageWithType:(long long)arg0;
+ (id)livesdkShareContentWithType:(long long)arg0;
+ (id)chatChannelMessageSchema:(id)arg0 roomModel:(id)arg1;
+ (id)getParamsWithSharedUsers:(id)arg0;

@end
