//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAIDraftPushBoxImpl : NSObject <AWEAIDraftPushBoxProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAIDoingInnerNotificationWithCover:(id)arg0;
- (void)showAIDoneInnerNotificationWithDraft:(id)arg0 title:(id)arg1 cover:(id)arg2 touchedHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)showDialogWithDraftId:(id)arg0 headingContent:(id)arg1 cover:(id)arg2 clickActionBlock:(id /* block */)arg3 completion:(id /* block */)arg4;

@end