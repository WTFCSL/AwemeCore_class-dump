//
//     Generated by private class-dump
//

@interface AWEVideoBackupPopupHandler : NSObject

+ (BOOL)isTeenModeEnabled;
+ (void)showAIDoingInnerNotificationWithCover:(id)arg0;
+ (void)showAIDoneInnerNotificationWithDraft:(id)arg0 title:(id)arg1 cover:(id)arg2 touchedHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)showDialogWithDraftId:(id)arg0 headingContent:(id)arg1 cover:(id)arg2 clickActionBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)coverWithDraft:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (void)showWithDraft:(id)arg0 cover:(id)arg1 completion:(id /* block */)arg2;
+ (void)trackSaveDraftEventWithDraft:(id)arg0 params:(id)arg1;
+ (void)showInnerNotificationWithDraft:(id)arg0 cover:(id)arg1 completion:(id /* block */)arg2;
+ (void)p_saveActionWithDraft:(id)arg0 completion:(id /* block */)arg1 isCrash:(BOOL)arg2;
+ (void)p_editActionWithDraft:(id)arg0 completion:(id /* block */)arg1;
+ (void)p_cancelActionWithDraft:(id)arg0 completion:(id /* block */)arg1;
+ (void)p_trackPopupClickPosition:(id)arg0;
+ (void)showPopUpWithDraft:(id)arg0 flowControlModelStep:(long long)arg1 completion:(id /* block */)arg2;
+ (void)p_enterEditPageWithDraft:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)draftResourcesExist:(id)arg0;

@end