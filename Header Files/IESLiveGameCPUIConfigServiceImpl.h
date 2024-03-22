//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameCPUIConfigServiceImpl : NSObject <IESGCPLiveUIConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isiPadAutoRotateMode;
- (void)updateSupportOrientationMaskLandscapeLeft;
- (void)updateSupportOrientationMaskLandscapeRight;
- (void)updateSupportOrientationMaskPortrait;
- (BOOL)enableUpdateOrientationInLiveScene;
- (void)forceUpdateToOrientationProtraitWithCompletion:(id /* block */)arg0;
- (void)forceUpdateToOrientationLandscapeWithCompletion:(id /* block */)arg0;
- (void)forceUpdateToOrientationLandscapeLeftWithCompletion:(id /* block */)arg0;

@end