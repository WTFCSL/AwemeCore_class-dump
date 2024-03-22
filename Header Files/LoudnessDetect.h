//
//     Generated by private class-dump
//

@class NSString;

@interface LoudnessDetect : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (BOOL)canShowAlert;
- (BOOL)isPlayingSound;
- (void)checkLoudness:(BOOL)arg0 volume:(double)arg1;
- (void)isWearingEarPhone:(id /* block */)arg0;
- (BOOL)needsToCheck;
- (void)checkTurnDown;
- (void)checkLoudness;
- (void)showLoudnessInAppPushView;
- (void)resetShowCount;
- (BOOL)canStart;
- (BOOL)showAlert;

@end