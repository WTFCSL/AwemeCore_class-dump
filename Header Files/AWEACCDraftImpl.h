//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCDraftImpl : NSObject <ACCDraftProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)draftCount;
- (BOOL)isOnDraftBoxPage;
- (void)clearUnreferencedResourcesWithDraftID:(id)arg0 withCaller:(id)arg1;
- (BOOL)transitionStatusPendingDeleteWithDraftID:(id)arg0 duration:(long long)arg1 scene:(id)arg2;
- (BOOL)hasDraft;
- (void)saveDraftWithPublishViewModel:(id)arg0 video:(id)arg1 backup:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setCacheDirPathWithID:(id)arg0;
- (void)saveDraftWithPublishViewModel:(id)arg0 video:(id)arg1 completion:(id /* block */)arg2;
- (void)saveDraftWithPublishViewModel:(id)arg0 video:(id)arg1 backup:(BOOL)arg2 presaveHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)transitionStatusNormalByUserWithDraftID:(id)arg0 launchFrom:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)clearUnreferencedResourcesOfBackupDraft:(id)arg0 withCaller:(id)arg1;
- (void)updateCoverImageWithViewModel:(id)arg0 editService:(id)arg1 sequenceEditService:(id)arg2 completion:(id /* block */)arg3;
- (id)retrieveWithDraftId:(id)arg0;
- (void)retrieveNewestDraftCoverWithCompletion:(id /* block */)arg0;
- (id)retrieveDrafts;
- (id)retrieveEditBackUps;
- (BOOL)transitionStatusNormalWithDraftID:(id)arg0;
- (BOOL)hasPublishBackUp;
- (void)markAllPublishBackupAsDraft;
- (id)retrieveBasicDraftWithDraftId:(id)arg0;
- (void)copyDraftFrom:(id)arg0 scene:(id)arg1 completion:(id /* block */)arg2;
- (void)saveInfoStickerPath:(id)arg0 draftID:(id)arg1 completion:(id /* block */)arg2;
- (void)_slidesCaptureFrameWithEditService:(id)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 atIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)p_captureFrame:(id)arg0 time:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2 completion:(id /* block */)arg3;
- (void)recordCopyedDraftID:(id)arg0 withFromID:(id)arg1;
- (void)removeRedundantDraftCopyed:(id)arg0;
- (id)retrieveDraftCoverWithDraftID:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)transitionBackupToPendingDeleteIfNeededWithDraftID:(id)arg0 scene:(id)arg1;
- (void)blockBackupPopupWithID:(id)arg0;
- (void)trackSaveDraftWithViewModel:(id)arg0 from:(id)arg1;
- (void)showSaveDraftToastIfNeededWithViewModel:(id)arg0;
- (void)updateCoverImageWithViewModel:(id)arg0 editService:(id)arg1 completion:(id /* block */)arg2;
- (id)fromIDWithDraftID:(id)arg0;
- (BOOL)containsDraftWithID:(id)arg0;
- (id)draftUpdateNotificationName;
- (id)draftShouldScrollToTopKey;
- (id)draftIDKey;
- (id)readVideoDataFromPath:(id)arg0 error:(id *)arg1;

@end
