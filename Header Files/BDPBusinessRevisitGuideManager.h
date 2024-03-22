//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableSet;

@interface BDPBusinessRevisitGuideManager : NSObject <BDPContainerLifeCycleMessage, BDPBusinessRevisitGuideManager> {
    NSMutableDictionary *_jumpSchemaAfterExitMap;
    NSMutableSet *_canShowPopupUniqueIdSet;
    NSMutableSet *_rebootingUniqueIdSet;
    NSMutableDictionary *_idToContextMap;
    NSMutableDictionary *_alreadyUploadDict;
    NSMutableSet *_showingGuideUniqueIdSet;
}

@property (retain, nonatomic) NSMutableDictionary *jumpSchemaAfterExitMap;
@property (retain, nonatomic) NSMutableSet *canShowPopupUniqueIdSet;
@property (retain, nonatomic) NSMutableSet *rebootingUniqueIdSet;
@property (retain, nonatomic) NSMutableDictionary *idToContextMap;
@property (retain, nonatomic) NSMutableDictionary *alreadyUploadDict;
@property (retain, nonatomic) NSMutableSet *showingGuideUniqueIdSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)applicationEnterWithUniqueID:(id)arg0;
- (void)applicationExitWithUniqueID:(id)arg0;
- (void)viewDidLoad:(id)arg0 uniqueID:(id)arg1;
- (void)viewDidAppear:(id)arg0 uniqueID:(id)arg1;
- (void)viewDidDisappear:(id)arg0 uniqueID:(id)arg1;
- (id)initService;
- (BOOL)tryToMarkShouldShowGuideByAction:(unsigned long long)arg0 appID:(id)arg1;
- (void)tryToShowRevisitGuideWithUniqueID:(id)arg0 judgeCompletion:(id /* block */)arg1 guideDismissCompletion:(id /* block */)arg2;
- (BOOL)isShowingGuideForUniqueID:(id)arg0;
- (void)updateRevisitDataForUniqueID:(id)arg0;
- (void)updateLocalRevisitDataForUniqueID:(id)arg0 eventParams:(id)arg1;
- (void)markUpdateInfoWithUniqueID:(id)arg0 imageUrl:(id)arg1 title:(id)arg2 subTitle:(id)arg3 forPath:(id)arg4 taskID:(id)arg5;
- (void)markUpdateInfoValidUniqueID:(id)arg0 taskID:(id)arg1;
- (id)idToContextMap;
- (id)canShowPopupUniqueIdSet;
- (BOOL)isCurrentAppLoadByRestart:(id)arg0;
- (BOOL)isUserLoginWithAppID:(id)arg0;
- (id)rebootingUniqueIdSet;
- (id)showingGuideUniqueIdSet;
- (id)alreadyUploadDict;
- (id)jumpSchemaAfterExitMap;
- (void)p_showRevisitGuideWithUniqueID:(id)arg0 completion:(id /* block */)arg1;
- (void)p_trackShowWithRevistGuideController:(id)arg0;
- (void)p_trackCloseWithRevistGuideController:(id)arg0;
- (void)setJumpSchemaAfterExitMap:(id)arg0;
- (void)setCanShowPopupUniqueIdSet:(id)arg0;
- (void)setRebootingUniqueIdSet:(id)arg0;
- (void)setIdToContextMap:(id)arg0;
- (void)setAlreadyUploadDict:(id)arg0;
- (void)setShowingGuideUniqueIdSet:(id)arg0;
- (void).cxx_destruct;

@end
