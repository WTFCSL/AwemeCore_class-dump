//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLandscapeEnterInnerLiveServiceAdapterImpl : IESLiveBaseAdapter <IESLiveLandscapeEnterInnerLiveServiceAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLandscapeInnerLiveEnter;
- (BOOL)enableLandscapePreviewState;
- (void)recordOrientationBeforePushVC:(long long)arg0;
- (void)checkAutoRotateIfNeed;

@end