//
//     Generated by private class-dump
//

@class NSString, AWELockTimeUnPasswordViewController;

@interface AWETeenU14TimeLockDecisionTask : NSObject <AWETeenAntiAddictionDecisionTaskProtocol> {
    BOOL _timeLockShowing;
    double _lastUseTS;
    AWELockTimeUnPasswordViewController *_timeLockVC;
    unsigned long long _originOrientationMask;
}

@property (nonatomic) BOOL timeLockShowing;
@property (nonatomic) double lastUseTS;
@property (retain, nonatomic) AWELockTimeUnPasswordViewController *timeLockVC;
@property (nonatomic) unsigned long long originOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)originOrientationMask;
- (void)setOriginOrientationMask:(unsigned long long)arg0;
- (BOOL)onGoing;
- (BOOL)triggerTask;
- (BOOL)willOnGoingWithinFiveMinutes;
- (void)restoreOriginOrientation;
- (BOOL)timeLockShowing;
- (unsigned long long)todaysTimeLockLimit;
- (void)clearLockTimeIfNeeded;
- (void)showTimeLockIfNeeded;
- (void)dismissTimeLockIfNeeded;
- (void)setTimeLockShowing:(BOOL)arg0;
- (void)setTimeLockVC:(id)arg0;
- (id)timeLockVC;
- (void)setLastUseTS:(double)arg0;
- (double)lastUseTS;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)taskID;
- (void)dealloc;

@end
