//
//     Generated by private class-dump
//

@interface BDPAppVideoPublishHandler : NSObject

+ (id)shareHandler;

- (long long)validStartIndex:(long long)arg0;
- (void)handleBCTypeWithResult:(id)arg0 uniqueID:(id)arg1;
- (BOOL)isPoiInfoValid:(id)arg0;
- (void)promiseLoginWithAppID:(id)arg0 completion:(id /* block */)arg1;
- (id)setAnchorDismissWithExtraParams:(id)arg0;
- (id)checkVideoPathWithModel:(id)arg0 uniqueID:(id)arg1;
- (id)findAnchorType:(id)arg0 error:(id *)arg1;
- (id)checkAnchorInfoValid:(id)arg0 spuId:(id)arg1 poiInfo:(id)arg2;
- (id)getBlockList:(id)arg0;
- (id)generateModelWithParam:(id)arg0 uniqueID:(id)arg1;
- (void)videoSceneGetUserInfo:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)videoSceneRequestServerAndCheckModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)updateModelMentionNickName:(id)arg0 nicknameInfo:(id)arg1;
- (void)updateModelMentionUid:(id)arg0 openID:(id)arg1 uid:(id)arg2;
- (void)updateModelBeforeRequest:(id)arg0 uniqueID:(id)arg1;
- (id)parseErrorWithError:(id)arg0 query:(id)arg1;
- (BOOL)videoMountShouldShowBlockToast:(id)arg0 serverError:(id)arg1;
- (void)videoSceneCheckComplete:(id)arg0 error:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3;
- (void)showUserBlockedToastWithUniqueID:(id)arg0 videoPublishModel:(id)arg1 actionCompletion:(id /* block */)arg2;
- (id)checkModelAfterRequest:(id)arg0 originStickerID:(id)arg1 originCutID:(id)arg2;
- (void)trackEventVideoPublishFail:(id)arg0 error:(id)arg1 errorType:(id)arg2 additionalInfo:(id)arg3 model:(id)arg4;
- (void)videoSceneLaunch:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (id)getPOIAnchorAttachError:(id)arg0;
- (void)videoSceneCompletedWithModel:(id)arg0 uniqueID:(id)arg1 result:(long long)arg2 error:(id)arg3 info:(id)arg4 callback:(id /* block */)arg5;
- (void)videoMountLaunch:(id)arg0 serverError:(id)arg1 ignoreMission:(BOOL)arg2 uniqueID:(id)arg3 callback:(id /* block */)arg4;
- (id)videoMountErrorWithModel:(id)arg0 andError:(id)arg1;
- (void)trackEventForUserBlockedToast:(id)arg0 model:(id)arg1;
- (id)getVideoPermissionABWithModel:(id)arg0;
- (void)clearInvalidMentions:(id)arg0;
- (void)addMissionInfoWithModel:(id)arg0 uniqueID:(id)arg1;
- (id)getCustomStickersInput:(id)arg0 uniqueId:(id)arg1;
- (id)getTextStickersInput:(id)arg0 uniqueId:(id)arg1;
- (id)getMentionStickersInput:(id)arg0 uniqueId:(id)arg1;
- (id)getMentionMarks:(id)arg0 uniqueId:(id)arg1;
- (id)getHashTagStickersInput:(id)arg0 uniqueId:(id)arg1;
- (id)getHashtagMarkers:(id)arg0 uniqueId:(id)arg1;
- (void)handleVideoScene:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)handleVideoMountWithParams:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;

@end