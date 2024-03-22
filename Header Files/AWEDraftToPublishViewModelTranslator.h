//
//     Generated by private class-dump
//

@interface AWEDraftToPublishViewModelTranslator : NSObject

+ (void)retrievePublishModuleFromDraft:(id)arg0 isEdit:(BOOL)arg1 skipLoadVideo:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)retrievePublishModuleFromDraft:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
+ (void)p_retrievePublishModuleFromDraft:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
+ (void)p_logDraftLoadStageBeginWithRetrieveFlag:(id)arg0 stage:(id)arg1;
+ (id)_loadPublishViewModelFromDraft:(id)arg0 context:(id)arg1;
+ (void)p_logDraftLoadStage:(id)arg0 isSuccess:(BOOL)arg1 logString:(id)arg2;
+ (void)p_trackErrorWithDraftId:(id)arg0 action:(id)arg1 error:(id)arg2;
+ (void)p_asyncRecoverResourceForDraft:(id)arg0 publishViewModel:(id)arg1;
+ (void)p_trackLoadSucceedWithDraftId:(id)arg0;
+ (void)p_loadNLEIfNeededWithdraftId:(id)arg0 publishViewModel:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
+ (void)p_restorePublishViewModel:(id)arg0 draftID:(id)arg1 completion:(id /* block */)arg2;
+ (void)p_redownloadMusicIfNeededWithDraft:(id)arg0 publishViewModel:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
+ (void)_loadVideoDataFromFile:(id)arg0 retry:(long long)arg1 completion:(id /* block */)arg2;
+ (id)recoverQueue;
+ (void)p_useNLEURSProgressiveRenderWithPublishViewModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)p_handleUserEditMusicForAdvanceEditDraft:(id)arg0 publishModel:(id)arg1 nleEditor:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
+ (void)retrievePublishModuleFromDraft:(id)arg0 isEdit:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)retrievePublishModelFromDraftId:(id)arg0 isEdit:(BOOL)arg1 skipLoadVideo:(BOOL)arg2 completion:(id /* block */)arg3;

@end