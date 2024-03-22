//
//     Generated by private class-dump
//

@class NSString;

@interface AFDPureModePageTrackHelper : NSObject <AWEPureModePageTrackHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackPinchZoomExitWithAweme:(id)arg0 enterFrom:(id)arg1 referString:(id)arg2 duration:(double)arg3 exitMethod:(long long)arg4;
+ (void)trackLandscapeEntranceShowWithAweme:(id)arg0 referString:(id)arg1;
+ (void)trackPinchChangeCompilationWithAweme:(id)arg0 enterMethod:(id)arg1;
+ (void)trackChangeSpeedModeWithAweme:(id)arg0 enterFrom:(id)arg1 speedValue:(double)arg2 logExtraDict:(id)arg3;
+ (void)trackRequestAPIDuration:(double)arg0 apiName:(id)arg1 isInitFetch:(BOOL)arg2;
+ (id)contentTypeForAweme:(id)arg0;
+ (void)trackEnterPinchDuration:(double)arg0 method:(id)arg1;
+ (void)trackExitPinchDuration:(double)arg0 method:(id)arg1;
+ (void)trackPinchViewDuration:(long long)arg0 awemeModel:(id)arg1 enterFrom:(id)arg2 readCount:(long long)arg3 extraParams:(id)arg4;
+ (void)trackEnterSmallWindowModeWithEnterMethod:(id)arg0 contentType:(id)arg1;
+ (void)trackSmallWindowModeDuration:(long long)arg0 enterMethod:(id)arg1 contentType:(id)arg2;
+ (void)trackCloseSmallWindowMode:(BOOL)arg0;
+ (void)trackFastSkipInterval:(double)arg0 isSmallWindow:(BOOL)arg1 isPinchBackground:(BOOL)arg2;
+ (void)trackSmallWindowSnackbarShow;
+ (void)trackSmallWindowSnackbarClick;
+ (void)trackEnterPinchBackgroundMode;
+ (void)trackClickProgressBarWithAweme:(id)arg0 referString:(id)arg1 isPlaying:(BOOL)arg2 isSlideBack:(BOOL)arg3 seekDuration:(double)arg4 finished:(BOOL)arg5 isPinchBackground:(BOOL)arg6;
+ (void)trackPinchBackgroundModeDuration:(long long)arg0 isSmallWindow:(BOOL)arg1;
+ (id)transferExitMethodToString:(long long)arg0;
+ (id)longPressParamsWithEnterMethod:(id)arg0 eventName:(id)arg1;
+ (void)trackLandscapeEntranceByClick:(BOOL)arg0 withAweme:(id)arg1 referString:(id)arg2 currentPlayTime:(double)arg3 videoDuration:(double)arg4;

@end
