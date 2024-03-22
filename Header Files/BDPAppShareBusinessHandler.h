//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAppShareBusinessHandler : NSObject <BDPShareEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedHandler;

- (void)defaultShareWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)tokenShareWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)shareAppInCustomizedChannel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)handleShareBussinessForChannel:(id)arg0 withParams:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3;
- (void)shareAppInLive:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (id)parseErrorWithError:(id)arg0 model:(id)arg1;
- (void)videoShareWithParams:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)addMissionInfoWithUniqueID:(id)arg0 shareModel:(id)arg1;
- (void)anchorShareWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)trackWithShareError:(id)arg0 channel:(id)arg1 uniqueID:(id)arg2;
- (void)publishCompletedWithModel:(id)arg0 uniqueID:(id)arg1 result:(long long)arg2 channel:(id)arg3 error:(id)arg4 info:(id)arg5 callback:(id /* block */)arg6;
- (void)showUserBlockedToastWithUniqueID:(id)arg0 resultModel:(id)arg1 actionCompletion:(id /* block */)arg2;
- (void)afterTalentAnchorRequestSuccessWithResultModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)talentAnchorSharWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)handleBCTypeWithResult:(id)arg0 uniqueID:(id)arg1;
- (BOOL)isPoiInfoValid:(id)arg0;
- (BOOL)videoPermissionABPassListWithPrepareModel:(id)arg0 uniqueID:(id)arg1;
- (void)videoShareInAppAnchorWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)videoShareInPOIAnchorWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)promiseLoginWithAppID:(id)arg0 completion:(id /* block */)arg1;
- (id)setAnchorDismissWithExtraParams:(id)arg0;
- (void)checkPublishContextWithPrepareModel:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)startSpecialShareWithPrepareModel:(id)arg0 resultModel:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3;
- (id)checkVideoPathWithModel:(id)arg0 uniqueID:(id)arg1;

@end
