//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveVSControlModule : IESLiveModule <IESLiveVSControlModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isVSStreamVertical;
- (id)audienceBrightnessVolumeGestureRouter;
- (id)audienceBrightnessVolumeRouter;
- (id)liveSeekContainerRouter;
- (id)liveMultitabInterface;
- (long long)currentStreamDeviceStatus;
- (BOOL)isVSStreamVerticalDevicePortait;
- (BOOL)isVSStreamVerticalDeviceLandscape;
- (BOOL)isVSStreamHorizontalDevicePortait;
- (BOOL)isVSStreamHorizontalDeviceLandscape;
- (BOOL)isPhoneLandcape;
- (BOOL)isPadRotateLandscape;
- (BOOL)isLandcape;
- (BOOL)isPad;
- (BOOL)isPhone;
- (long long)currentInterfaceOrientation;

@end