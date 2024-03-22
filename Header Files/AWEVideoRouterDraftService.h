//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEVideoRouterDraftServiceDependencis;

@interface AWEVideoRouterDraftService : NSObject <AWEStudioDraftService> {
    BOOL _showDraftPopView;
    id<AWEVideoRouterDraftServiceDependencis> _dependencies;
}

@property (nonatomic) BOOL showDraftPopView;
@property (retain, nonatomic) id<AWEVideoRouterDraftServiceDependencis> dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;
+ (BOOL)ignorePublishPageForModel:(id)arg0;

- (id)aAWEStudioGlobalConfig;
- (BOOL)handleDraftMigrateQRCodeString:(id)arg0;
- (id)trackEnterFrom;
- (id)startWithDraft:(id)arg0 isBackup:(BOOL)arg1;
- (id)startWithBackUpIfNeed;
- (id)startWithDraft:(id)arg0 isBackup:(BOOL)arg1 modifyPublishModelBlock:(id /* block */)arg2 showLoadingView:(BOOL)arg3;
- (id)startWithDraft:(id)arg0 isBackup:(BOOL)arg1 destinationPage:(long long)arg2 publishViewModelBuilt:(id /* block */)arg3;
- (id)startWithDraft:(id)arg0 isBackup:(BOOL)arg1 modifyPublishModelBlock:(id /* block */)arg2;
- (id)startWithDraft:(id)arg0 publishModel:(id)arg1 publishModelError:(id)arg2;
- (id)tryMusicAgainWithDraft:(id)arg0 modifyPublishModelBlock:(id /* block */)arg1;
- (id)reshootWithInputData:(id)arg0;
- (id)saveDraftWithSegmentedClipModel:(id)arg0 publishViewModel:(id)arg1 extraDict:(id)arg2;
- (BOOL)currentShowDraftBackUpView;
- (void)shootAgainFromBottomSnackBarWithDraftId:(id)arg0 content:(id)arg1 modifyPublishModel:(id /* block */)arg2 extraAction:(id /* block */)arg3 onClose:(id /* block */)arg4;
- (id)p_createRetrieveContext;
- (double)delayLoadingViewIfNeeded:(BOOL)arg0 draft:(id)arg1;
- (void)p_startWithDraft:(id)arg0 isBackup:(BOOL)arg1 publishModel:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)p_fixWrongBackupModel:(id)arg0 attributes:(id)arg1;
- (void)removeTemplateWithPublishModel:(id)arg0;
- (id)canvasAdaptor;
- (void)trackEenterPublisherWithDraft:(id)arg0 enterMethod:(id)arg1 publishModel:(id)arg2;
- (void)setShowDraftPopView:(BOOL)arg0;
- (BOOL)showDraftPopView;
- (void)startWithDraft:(id)arg0 isBackup:(BOOL)arg1 publishModel:(id)arg2 error:(id)arg3 destPage:(long long)arg4 completion:(id /* block */)arg5;
- (void).cxx_destruct;
- (id)dependencies;
- (void)setDependencies:(id)arg0;

@end