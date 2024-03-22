//
//     Generated by private class-dump
//

@class NSString;

@interface AWELocationSubmitTracker : NSObject <AWELocationSubmitTrackerProtocol> {
    BOOL _alertViewIsOn;
    BOOL _locationSubmitIsOn;
    BOOL _needAppPopup;
    BOOL _currentVideoIsAds;
    long long _videoPlayMaxCount;
}

@property (nonatomic) long long videoPlayMaxCount;
@property (nonatomic) BOOL locationSubmitIsOn;
@property (nonatomic) BOOL needAppPopup;
@property (nonatomic) BOOL currentVideoIsAds;
@property (nonatomic) BOOL alertViewIsOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)p_ifLocationAlertShowed;
- (BOOL)p_ifSystemLocationAlertShowed;
- (void)setCurrentVideoIsAds:(BOOL)arg0;
- (BOOL)currentVideoIsAds;
- (BOOL)needAppPopup;
- (void)showLocationAlert;
- (void)showSystemLocationAlert;
- (void)p_setLocationAlertShowed;
- (void)setAlertViewIsOn:(BOOL)arg0;
- (void)p_setSystemLocationAlertShowed;
- (void)addVideoPlayedCount:(id)arg0 isAds:(BOOL)arg1;
- (BOOL)userHasAuthrizedLocation;
- (BOOL)alertViewIsOn;
- (long long)videoPlayMaxCount;
- (void)setVideoPlayMaxCount:(long long)arg0;
- (BOOL)locationSubmitIsOn;
- (void)setLocationSubmitIsOn:(BOOL)arg0;
- (void)setNeedAppPopup:(BOOL)arg0;
- (id)init;

@end