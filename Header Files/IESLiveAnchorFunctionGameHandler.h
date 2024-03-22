//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAnchorFunctionGameHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleInteractIDs;

- (void)_goProphet:(id)arg0 params:(id)arg1;
- (BOOL)supportFunctionItem:(id)arg0;
- (BOOL)shouldShowFunctionItem:(id)arg0 localLiveSceneType:(unsigned long long)arg1 interactiveScene:(unsigned long long)arg2;
- (BOOL)functionItemIsRunning:(id)arg0;
- (void)functionItemDidClick:(id)arg0 params:(id)arg1;
- (void)functionItemWillDisplay:(id)arg0;
- (void)functionItemDidEndDisplay:(id)arg0;
- (void)_goWGameX:(id)arg0 params:(id)arg1;
- (void)_goAnchorPlayTogether:(id)arg0 params:(id)arg1;

@end