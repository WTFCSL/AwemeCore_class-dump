//
//     Generated by private class-dump
//

@interface AWEVideoDraftManager : NSObject

+ (long long)draftCount;
+ (unsigned long long)sizeOfDrafts;
+ (unsigned long long)sizeOfDeleteDrafts;
+ (BOOL)transitionStatusPendingDeleteWithDraftID:(id)arg0 duration:(long long)arg1 scene:(id)arg2;
+ (BOOL)hasDraft;
+ (void)setCacheDirPathWithID:(id)arg0;
+ (id)retrieveWithDraftId:(id)arg0;
+ (id)retrieveWithItemId:(id)arg0;
+ (id)retrieveBasicDrafts;
+ (unsigned long long)sizeOfDrafts:(id)arg0;
+ (void)retrieveNewestDraftCoverWithCompletion:(id /* block */)arg0;
+ (id)retrieveDrafts;
+ (void)clearAllAbandonedResources;
+ (void)clearUnreferencedVideoResourceFile;
+ (id)retrieveEditBackUps;
+ (void)markDraftSourceWithID:(id)arg0 trackParams:(id)arg1;
+ (BOOL)transitionStatusNormalWithDraftID:(id)arg0;
+ (BOOL)hasPublishBackUp;
+ (void)markAllPublishBackupAsDraft;
+ (id)retrieveBasicDraftWithDraftId:(id)arg0;
+ (void)saveInfoStickerPath:(id)arg0 draftID:(id)arg1 completion:(id /* block */)arg2;
+ (id)retrieveDraftCoverWithDraftID:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (BOOL)draftExistWithID:(id)arg0;
+ (BOOL)transitionBackupToPendingDeleteIfNeededWithDraftID:(id)arg0 scene:(id)arg1;
+ (void)blockBackupPopupWithID:(id)arg0;
+ (BOOL)saveDraft:(id)arg0 error:(id *)arg1;
+ (id)draftSerialQueue;
+ (unsigned long long)sizeWithDraftID:(id)arg0;
+ (void)archiveDraftsToZipFile:(id)arg0 withCompletion:(id /* block */)arg1;
+ (BOOL)saveProjectDrafts:(id)arg0 error:(id *)arg1;
+ (void)autoClearAllAbandonedResources;
+ (BOOL)extendExpireTimeWithDraftID:(id)arg0 duration:(long long)arg1;
+ (void)trackDBPerformanceEndWithInterval:(double)arg0 func:(id)arg1 operation:(unsigned long long)arg2;
+ (void)trackDBFailedWithFunction:(id)arg0 operation:(unsigned long long)arg1 error:(id)arg2;
+ (id)cleanDirtyDataForDraft:(id)arg0;
+ (void)restoreExtensionModelsFromDrafts:(id)arg0;
+ (void)restoreExtensionModelsFromDraft:(id)arg0;
+ (void)deleteDraftResourcesWithID:(id)arg0 completion:(id /* block */)arg1;
+ (void)removeObjectInDraftSizeMapWithID:(id)arg0;
+ (BOOL)deleteDraftDBModelWithID:(id)arg0 error:(id *)arg1;
+ (void)removeDraftResourceMonitorWithDraftID:(id)arg0;
+ (void)removeBlockBackupPopupRecorderWithID:(id)arg0;
+ (id)draftSizeMapCopy;
+ (void)p_updateDraftSizeMapWithID:(id)arg0 size:(unsigned long long)arg1;
+ (void)setDraftSizeMap:(id)arg0;
+ (BOOL)isDraftDirectory:(id)arg0;
+ (BOOL)hasACCViewControllerInViewStack;
+ (BOOL)hasACCViewControllerInViewStackOf:(id)arg0;
+ (id)stringWithOperation:(unsigned long long)arg0;
+ (BOOL)copyDraftFiles:(id)arg0;
+ (id)draftMonitorInfoWithDraftIds:(id)arg0;
+ (id)noNildictionaryBy:(id)arg0;
+ (id)p_dictionValueShouldBeExcludedWhenNil:(id)arg0;
+ (id)p_arrayValueShouldBeExcludedWhenNil:(id)arg0;
+ (id)businessDataWithDraft:(id)arg0 error:(id *)arg1;
+ (id)retrieveProjectDraftWithDraftID:(id)arg0;
+ (id)retrieveProjectDraftWithDraftID:(id)arg0 uuid:(id)arg1;
+ (void)clearAllEditBackUpsWithCaller:(id)arg0 exceptDraft:(id)arg1;
+ (BOOL)deleteDraftWithID:(id)arg0 error:(id *)arg1;
+ (BOOL)deleteBackupWithID:(id)arg0 error:(id *)arg1;
+ (void)updateDraftSizeMapWithID:(id)arg0 size:(unsigned long long)arg1;
+ (id)recursiveLock;

@end