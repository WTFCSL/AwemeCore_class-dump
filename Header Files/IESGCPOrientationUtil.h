//
//     Generated by private class-dump
//

@interface IESGCPOrientationUtil : NSObject

+ (void)forceUpdateToOrientationPortrait:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateSupportOrientationMaskPortrait:(id)arg0;
+ (void)updateSupportOrientationMaskLandscapeRight:(id)arg0;
+ (void)updateSupportOrientationMaskLandscapeLeft:(id)arg0;
+ (BOOL)isiPadAutoRotateMode:(id)arg0;
+ (void)commonRotationToOrientation:(long long)arg0 completion:(id /* block */)arg1;
+ (void)rotateToOrientation:(long long)arg0 diConext:(id)arg1 completion:(id /* block */)arg2;
+ (void)rotateToOrientation:(long long)arg0 diConext:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
+ (void)rotateToInterfaceOrientation:(long long)arg0 duration:(double)arg1 diConext:(id)arg2 completion:(id /* block */)arg3;
+ (long long)_interfaceOrientationFromGCPOrientation:(long long)arg0;
+ (void)_liveOrientationRotation:(long long)arg0 diContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)_commonOrientationRotation:(long long)arg0;
+ (void)forceUpdateToOrientationLandscape:(id)arg0 completion:(id /* block */)arg1;
+ (void)forceUpdateToOrientationLandscapeLeft:(id)arg0 completion:(id /* block */)arg1;
+ (void)rotateToInterfaceOrientation:(long long)arg0 diConext:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned long long)supportInterfaceOrientationMaskWithDIConext:(id)arg0;
+ (long long)interfaceOrientation;

@end