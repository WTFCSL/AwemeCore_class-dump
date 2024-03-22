//
//     Generated by private class-dump
//

@protocol IESLiveBootloaderAdapter <NSObject>

- (BOOL)isSaaS;
- (void)recordIndex:(id)arg0 startStage:(unsigned long long)arg1;
- (void)recordIndex:(id)arg0 endStage:(unsigned long long)arg1;
- (void)recordIndex:(id)arg0 replaceIndex:(id)arg1 originDelete:(BOOL)arg2;
- (void)reportIndex:(id)arg0;
- (void)recordIndex:(id)arg0 metric:(id)arg1;
- (void)recordIndex:(id)arg0 category:(id)arg1;
- (void)recordIndex:(id)arg0 extra:(id)arg1;
- (void)trackComponentsLoadBeginWithLevel:(long long)arg0 roomId:(id)arg1 source:(id)arg2;
- (void)trackComponentsLoadEndWithLevel:(long long)arg0 roomId:(id)arg1 components:(id)arg2;
- (void)resetComponentsTrackData;
- (id)componentPlistConfigData;
- (long long)sceneWithRoom:(id)arg0;
- (BOOL)declineToSwitchToFullScreenWithRoom:(id)arg0;
- (id)entryWithContext:(id)arg0;
- (BOOL)isAcceptableRoomModel:(id)arg0;
- (BOOL)isRoomService:(id)arg0;
- (long long)showCartWithRoom:(id)arg0;
- (Class)componentClassWithComponentName:(id)arg0 isFullName:(BOOL)arg1;
- (id)createComponentWithClass:(Class)arg0 componentName:(id)arg1 room:(id)arg2 context:(id)arg3 trackContext:(id)arg4 attachingDIContext:(id)arg5;
- (Class)moduleClassWithModuleName:(id)arg0;
- (void)mountWithComponent:(id)arg0;
- (void)unmountWithComponent:(id)arg0;
- (void)interfaceOrientationChange:(long long)arg0 components:(id)arg1;
- (void)moduleNotExitAssertWithModuleName:(id)arg0;
- (void)removeIndex:(id)arg0;
- (void)clearAll;

@end