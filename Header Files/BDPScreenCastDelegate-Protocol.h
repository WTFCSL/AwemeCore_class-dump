//
//     Generated by private class-dump
//

@protocol BDPScreenCastDelegate <NSObject>

@optional

- (void)bdp_screenCastPlugin:(id)arg0 onError:(id)arg1;
- (void)bdp_screenCastPlugin:(id)arg0 didFindCastDevice:(id)arg1;
- (void)bdp_screenCastPlugin:(id)arg0 didConnectToCastDevice:(id)arg1;
- (void)bdp_screenCastPlugin:(id)arg0 playStateChanged:(unsigned long long)arg1;
- (void)bdp_screenCastPlugin:(id)arg0 progressChanged:(id)arg1;

@end