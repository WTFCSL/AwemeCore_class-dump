//
//     Generated by private class-dump
//

@protocol AWEFeedDynamicCardManagerProtocol <NSObject>

@optional

- (void)container:(id)arg0 didRecieveError:(id)arg1;
- (void)container:(id)arg0 viewDidAppearWithContext:(id)arg1 onFirstScreen:(BOOL)arg2;
- (void)container:(id)arg0 viewDidDisappearWithContext:(id)arg1;
- (void)container:(id)arg0 viewHasBecomeActiveWithContext:(id)arg1;
- (void)container:(id)arg0 viewHasEnterBackgroundWithContext:(id)arg1;
- (void)container:(id)arg0 resetWithContext:(id)arg1;
- (void)container:(id)arg0 hasReadyWithContext:(id)arg1;
- (void)container:(id)arg0 willDisplayWithContext:(id)arg1 onFirstScreen:(BOOL)arg2;
- (void)container:(id)arg0 videoPlayWithContext:(id)arg1;
- (void)container:(id)arg0 beforeUpdateData:(id)arg1 extraParams:(id)arg2;
- (void)container:(id)arg0 afterUpdateData:(id)arg1 extraParams:(id)arg2;
- (void)containerViewDidStartLoading:(id)arg0;
- (void)container:(id)arg0 containerViewDidLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)container:(id)arg0 containerViewDidFinishLoadWithURL:(id)arg1;

@end
