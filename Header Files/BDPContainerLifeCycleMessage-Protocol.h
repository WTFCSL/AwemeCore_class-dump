//
//     Generated by private class-dump
//

@protocol BDPContainerLifeCycleMessage <NSObject>

@optional

- (void)applicationEnterWithUniqueID:(id)arg0;
- (void)applicationExitWithUniqueID:(id)arg0;
- (void)applicationEnterBackGroundWithUniqueID:(id)arg0;
- (void)applicationEnterForeGroundWithUniqueID:(id)arg0;
- (void)viewDidLoad:(id)arg0 uniqueID:(id)arg1;
- (void)viewWillAppear:(id)arg0 uniqueID:(id)arg1;
- (void)viewDidAppear:(id)arg0 uniqueID:(id)arg1;
- (void)viewWillDisappear:(id)arg0 uniqueID:(id)arg1;
- (void)beforeViewDidDisappear:(id)arg0 uniqueID:(id)arg1;
- (void)viewDidDisappear:(id)arg0 uniqueID:(id)arg1;
- (void)viewWillLayoutSubviews:(id)arg0 uniqueID:(id)arg1;
- (void)applicationInterruptionStateChange:(BOOL)arg0 uniqueID:(id)arg1;

@end