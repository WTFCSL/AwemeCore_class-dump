//
//     Generated by private class-dump
//

@protocol BDPScreenCastManagerDelegate <NSObject>

@optional

- (void)bdp_screenCastManager:(id)arg0 onError:(id)arg1;
- (void)bdp_screenCastManager:(id)arg0 playStateChanged:(unsigned long long)arg1;
- (void)bdp_screenCastManagerWillShowControlView:(id)arg0;
- (void)bdp_screenCastManager:(id)arg0 didExitScreenCastWithState:(unsigned long long)arg1 currentTime:(double)arg2;
- (void)bdp_screenCastManager:(id)arg0 screenModeDidChange:(BOOL)arg1;
- (void)bdp_screenCastManager:(id)arg0 didSeekTo:(double)arg1;
- (void)bdp_screenCastManager:(id)arg0 progressUpdated:(double)arg1;
- (void)bdp_screenCastManagerDidStartPlay:(id)arg0;
- (void)bdp_screenCastManager:(id)arg0 controlTap:(unsigned long long)arg1;

@end