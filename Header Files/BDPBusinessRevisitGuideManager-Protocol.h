//
//     Generated by private class-dump
//

@protocol BDPBusinessRevisitGuideManager <BDPService>

- (BOOL)tryToMarkShouldShowGuideByAction:(unsigned long long)arg0 appID:(id)arg1;
- (void)tryToShowRevisitGuideWithUniqueID:(id)arg0 judgeCompletion:(id /* block */)arg1 guideDismissCompletion:(id /* block */)arg2;
- (BOOL)isShowingGuideForUniqueID:(id)arg0;
- (void)updateRevisitDataForUniqueID:(id)arg0;
- (void)updateLocalRevisitDataForUniqueID:(id)arg0 eventParams:(id)arg1;
- (void)markUpdateInfoWithUniqueID:(id)arg0 imageUrl:(id)arg1 title:(id)arg2 subTitle:(id)arg3 forPath:(id)arg4 taskID:(id)arg5;
- (void)markUpdateInfoValidUniqueID:(id)arg0 taskID:(id)arg1;

@end
