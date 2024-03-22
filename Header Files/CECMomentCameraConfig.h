//
//     Generated by private class-dump
//

@class NSString, CECMomentCameraSettings;

@interface CECMomentCameraConfig : NSObject <NSMutableCopying> {
    BOOL _useFrontCameraByDefault;
    BOOL _beautyDefaultOpen;
    BOOL _rememberCameraBeauty;
    BOOL _momentFilterEnable;
    BOOL _momentFilterShowFilterHintText;
    BOOL _closeFriendsV2Enable;
    BOOL _momentCameraVideoEnable;
    BOOL _momentCameraPublishPrivacyEnabled;
    BOOL _momentCameraPublishPrivacyPartSeeEnabled;
    BOOL _momentBrushModeEnable;
    BOOL _momentPublishBrushEditEnable;
    BOOL _momentTextModeEnable;
    BOOL _momentPublishTextEditEnable;
    BOOL _waterFallEnable;
    BOOL _nleUseVEPublic;
    BOOL _syncMultiCaptureEnable;
    BOOL _multiCameraFlashEnable;
    BOOL _isShootToMomentCamera;
    BOOL _hasFeedEntrance;
    BOOL _isShowEffectAndAbulm;
    BOOL _isSupportTextMode;
    BOOL _enableSideslipProp;
    BOOL _enableSwitchCameraMode;
    BOOL _rememberMomentCameraMode;
    BOOL _useMultiCameraModeByDefault;
    BOOL _enableDetectFaceToast;
    BOOL _isLandingToFriendTabAfterPublish;
    BOOL _isLandingToMomentFeedAfterPublish;
    BOOL _isLandingToRecorderMoment;
    BOOL _isStayMomentCameraAfterPublish;
    BOOL _isLandingToMessageTabAfterPublishMomentText;
    BOOL _enableCameraScale;
    BOOL _isHideOtherTab;
    BOOL _useDetailFeed;
    BOOL _enableNewVersionMomentCamera;
    BOOL _enableFriendMomentNewVersion;
    BOOL _enableFriendMomentForNotes;
    BOOL _enableCatureRatioForNewMoment;
    BOOL _rememberCaptureRatio;
    BOOL _enableSKIIEmbededMainRecorder;
    BOOL _enableSupportExchangeForMoment;
    BOOL _enableSupportExchangeForRecorder;
    BOOL _isMomentCameraSupportUploadLivePhoto;
    BOOL _isHitExchangeImage;
    BOOL _isNotHitExchangeImage;
    BOOL _mergeCameraTempaltes;
    BOOL _enableEditUserSettings;
    CECMomentCameraSettings *_settings;
    unsigned long long _captureRatio;
    long long _draftExpirationTimeInMinutes;
    long long _draftMaxCount;
    long long _draftMaxRetryTimes;
    double _defaultRearScaleFactor;
    double _defaultFrontScaleFactor;
    long long _captureWidth;
    long long _defaultCameraPosition;
    long long _momentAlbumTimeThresholdOfDay;
    long long _videoTextGuideCount;
    long long _maxRecordTime;
    long long _momentCameraIoCOption;
    NSString *_momentLogoString;
    NSString *_openFlashTimeString;
    long long _countdownDuration;
    long long _momentCaptureRatioForRecord;
    unsigned long long _newMomentLandingStrategy;
    unsigned long long _mainRecorderMomentPublishLandingStrategy;
    unsigned long long _landingMode;
}

@property (retain, nonatomic) CECMomentCameraSettings *settings;
@property (nonatomic) unsigned long long captureRatio;
@property (nonatomic) long long draftExpirationTimeInMinutes;
@property (nonatomic) long long draftMaxCount;
@property (nonatomic) long long draftMaxRetryTimes;
@property (nonatomic) double defaultRearScaleFactor;
@property (nonatomic) BOOL useFrontCameraByDefault;
@property (nonatomic) double defaultFrontScaleFactor;
@property (nonatomic) long long captureWidth;
@property (nonatomic) BOOL beautyDefaultOpen;
@property (nonatomic) BOOL rememberCameraBeauty;
@property (nonatomic) long long defaultCameraPosition;
@property (nonatomic) BOOL momentFilterEnable;
@property (nonatomic) BOOL momentFilterShowFilterHintText;
@property (nonatomic) BOOL closeFriendsV2Enable;
@property (nonatomic) BOOL momentCameraVideoEnable;
@property (nonatomic) long long momentAlbumTimeThresholdOfDay;
@property (nonatomic) BOOL momentCameraPublishPrivacyEnabled;
@property (nonatomic) BOOL momentCameraPublishPrivacyPartSeeEnabled;
@property (nonatomic) BOOL momentBrushModeEnable;
@property (nonatomic) BOOL momentPublishBrushEditEnable;
@property (nonatomic) long long videoTextGuideCount;
@property (nonatomic) long long maxRecordTime;
@property (nonatomic) BOOL momentTextModeEnable;
@property (nonatomic) BOOL momentPublishTextEditEnable;
@property (nonatomic) BOOL waterFallEnable;
@property (nonatomic) BOOL nleUseVEPublic;
@property (nonatomic) long long momentCameraIoCOption;
@property (nonatomic) BOOL syncMultiCaptureEnable;
@property (nonatomic) BOOL multiCameraFlashEnable;
@property (nonatomic) BOOL isShootToMomentCamera;
@property (nonatomic) BOOL hasFeedEntrance;
@property (nonatomic) BOOL isShowEffectAndAbulm;
@property (nonatomic) BOOL isSupportTextMode;
@property (copy, nonatomic) NSString *momentLogoString;
@property (copy, nonatomic) NSString *openFlashTimeString;
@property (nonatomic) BOOL enableSideslipProp;
@property (nonatomic) BOOL enableSwitchCameraMode;
@property (nonatomic) BOOL rememberMomentCameraMode;
@property (nonatomic) BOOL useMultiCameraModeByDefault;
@property (nonatomic) BOOL enableDetectFaceToast;
@property (nonatomic) BOOL isLandingToFriendTabAfterPublish;
@property (nonatomic) BOOL isLandingToMomentFeedAfterPublish;
@property (nonatomic) BOOL isLandingToRecorderMoment;
@property (nonatomic) BOOL isStayMomentCameraAfterPublish;
@property (nonatomic) BOOL isLandingToMessageTabAfterPublishMomentText;
@property (nonatomic) BOOL enableCameraScale;
@property (nonatomic) BOOL isHideOtherTab;
@property (nonatomic) long long countdownDuration;
@property (nonatomic) BOOL useDetailFeed;
@property (nonatomic) BOOL enableNewVersionMomentCamera;
@property (nonatomic) BOOL enableFriendMomentNewVersion;
@property (nonatomic) BOOL enableFriendMomentForNotes;
@property (nonatomic) BOOL enableCatureRatioForNewMoment;
@property (nonatomic) long long momentCaptureRatioForRecord;
@property (nonatomic) BOOL rememberCaptureRatio;
@property (nonatomic) unsigned long long newMomentLandingStrategy;
@property (nonatomic) unsigned long long mainRecorderMomentPublishLandingStrategy;
@property (nonatomic) BOOL enableSKIIEmbededMainRecorder;
@property (nonatomic) BOOL enableSupportExchangeForMoment;
@property (nonatomic) BOOL enableSupportExchangeForRecorder;
@property (nonatomic) BOOL isMomentCameraSupportUploadLivePhoto;
@property (nonatomic) unsigned long long landingMode;
@property (nonatomic) BOOL isHitExchangeImage;
@property (nonatomic) BOOL isNotHitExchangeImage;
@property (nonatomic) BOOL mergeCameraTempaltes;
@property (nonatomic) BOOL enableEditUserSettings;

+ (id)sharedInstance;

- (unsigned long long)captureRatio;
- (void)setCaptureRatio:(unsigned long long)arg0;
- (void)setMaxRecordTime:(long long)arg0;
- (long long)maxRecordTime;
- (BOOL)enableSupportExchangeForMoment;
- (BOOL)isNotHitExchangeImage;
- (BOOL)enableNewVersionMomentCamera;
- (unsigned long long)landingMode;
- (BOOL)enableEditUserSettings;
- (void)setDraftExpirationTimeInMinutes:(long long)arg0;
- (void)setDraftMaxCount:(long long)arg0;
- (void)setDraftMaxRetryTimes:(long long)arg0;
- (void)setUseFrontCameraByDefault:(BOOL)arg0;
- (void)setRememberCameraBeauty:(BOOL)arg0;
- (void)setDefaultCameraPosition:(long long)arg0;
- (void)setWaterFallEnable:(BOOL)arg0;
- (void)setMomentCameraIoCOption:(long long)arg0;
- (void)setEnableSwitchCameraMode:(BOOL)arg0;
- (void)setRememberMomentCameraMode:(BOOL)arg0;
- (void)setUseMultiCameraModeByDefault:(BOOL)arg0;
- (void)setMomentFilterEnable:(BOOL)arg0;
- (void)setMomentFilterShowFilterHintText:(BOOL)arg0;
- (void)setIsSupportTextMode:(BOOL)arg0;
- (void)setSyncMultiCaptureEnable:(BOOL)arg0;
- (void)setMultiCameraFlashEnable:(BOOL)arg0;
- (void)setEnableSideslipProp:(BOOL)arg0;
- (void)setNleUseVEPublic:(BOOL)arg0;
- (void)setIsShowEffectAndAbulm:(BOOL)arg0;
- (void)setOpenFlashTimeString:(id)arg0;
- (void)setCountdownDuration:(long long)arg0;
- (void)setIsShootToMomentCamera:(BOOL)arg0;
- (void)setHasFeedEntrance:(BOOL)arg0;
- (void)setIsStayMomentCameraAfterPublish:(BOOL)arg0;
- (void)setIsLandingToMessageTabAfterPublishMomentText:(BOOL)arg0;
- (void)setIsLandingToFriendTabAfterPublish:(BOOL)arg0;
- (void)setIsLandingToMomentFeedAfterPublish:(BOOL)arg0;
- (void)setEnableCameraScale:(BOOL)arg0;
- (void)setIsHideOtherTab:(BOOL)arg0;
- (void)setDefaultRearScaleFactor:(double)arg0;
- (void)setEnableCatureRatioForNewMoment:(BOOL)arg0;
- (void)setNewMomentLandingStrategy:(unsigned long long)arg0;
- (void)setEnableNewVersionMomentCamera:(BOOL)arg0;
- (void)setEnableFriendMomentNewVersion:(BOOL)arg0;
- (void)setEnableFriendMomentForNotes:(BOOL)arg0;
- (void)setEnableSupportExchangeForMoment:(BOOL)arg0;
- (void)setIsMomentCameraSupportUploadLivePhoto:(BOOL)arg0;
- (void)setEnableSupportExchangeForRecorder:(BOOL)arg0;
- (void)setMergeCameraTempaltes:(BOOL)arg0;
- (void)setRememberCaptureRatio:(BOOL)arg0;
- (void)setDefaultFrontScaleFactor:(double)arg0;
- (void)setEnableSKIIEmbededMainRecorder:(BOOL)arg0;
- (void)setLandingMode:(unsigned long long)arg0;
- (void)setEnableEditUserSettings:(BOOL)arg0;
- (void)setIsLandingToRecorderMoment:(BOOL)arg0;
- (void)setMainRecorderMomentPublishLandingStrategy:(unsigned long long)arg0;
- (void)setMomentCaptureRatioForRecord:(long long)arg0;
- (BOOL)isHitExchangeImage;
- (long long)draftExpirationTimeInMinutes;
- (long long)draftMaxCount;
- (BOOL)isShootToMomentCamera;
- (BOOL)enableSupportExchangeForRecorder;
- (long long)draftMaxRetryTimes;
- (BOOL)mergeCameraTempaltes;
- (BOOL)momentFilterEnable;
- (BOOL)enableSwitchCameraMode;
- (BOOL)isSupportTextMode;
- (BOOL)enableCatureRatioForNewMoment;
- (BOOL)hasFeedEntrance;
- (BOOL)momentCameraPublishPrivacyPartSeeEnabled;
- (BOOL)isShowEffectAndAbulm;
- (BOOL)enableSKIIEmbededMainRecorder;
- (long long)defaultCameraPosition;
- (BOOL)syncMultiCaptureEnable;
- (long long)momentCameraIoCOption;
- (BOOL)nleUseVEPublic;
- (long long)momentAlbumTimeThresholdOfDay;
- (BOOL)rememberCameraBeauty;
- (BOOL)beautyDefaultOpen;
- (BOOL)momentCameraVideoEnable;
- (void)setCaptureWidth:(long long)arg0;
- (void)setBeautyDefaultOpen:(BOOL)arg0;
- (void)setCloseFriendsV2Enable:(BOOL)arg0;
- (void)setMomentCameraVideoEnable:(BOOL)arg0;
- (void)setMomentAlbumTimeThresholdOfDay:(long long)arg0;
- (void)setMomentCameraPublishPrivacyEnabled:(BOOL)arg0;
- (void)setMomentCameraPublishPrivacyPartSeeEnabled:(BOOL)arg0;
- (void)setVideoTextGuideCount:(long long)arg0;
- (double)defaultRearScaleFactor;
- (double)defaultFrontScaleFactor;
- (BOOL)useFrontCameraByDefault;
- (long long)captureWidth;
- (BOOL)closeFriendsV2Enable;
- (BOOL)momentCameraPublishPrivacyEnabled;
- (BOOL)momentBrushModeEnable;
- (void)setMomentBrushModeEnable:(BOOL)arg0;
- (BOOL)momentPublishBrushEditEnable;
- (void)setMomentPublishBrushEditEnable:(BOOL)arg0;
- (long long)videoTextGuideCount;
- (BOOL)momentTextModeEnable;
- (void)setMomentTextModeEnable:(BOOL)arg0;
- (BOOL)momentPublishTextEditEnable;
- (void)setMomentPublishTextEditEnable:(BOOL)arg0;
- (BOOL)isMomentCameraSupportUploadLivePhoto;
- (BOOL)rememberCaptureRatio;
- (void)setMomentLogoString:(id)arg0;
- (void)setEnableDetectFaceToast:(BOOL)arg0;
- (void)setUseDetailFeed:(BOOL)arg0;
- (BOOL)momentFilterShowFilterHintText;
- (BOOL)waterFallEnable;
- (BOOL)multiCameraFlashEnable;
- (id)momentLogoString;
- (id)openFlashTimeString;
- (BOOL)enableSideslipProp;
- (BOOL)rememberMomentCameraMode;
- (BOOL)useMultiCameraModeByDefault;
- (BOOL)enableDetectFaceToast;
- (BOOL)isLandingToFriendTabAfterPublish;
- (BOOL)isLandingToMomentFeedAfterPublish;
- (BOOL)isLandingToRecorderMoment;
- (BOOL)isStayMomentCameraAfterPublish;
- (BOOL)isLandingToMessageTabAfterPublishMomentText;
- (BOOL)enableCameraScale;
- (BOOL)isHideOtherTab;
- (long long)countdownDuration;
- (BOOL)useDetailFeed;
- (BOOL)enableFriendMomentNewVersion;
- (BOOL)enableFriendMomentForNotes;
- (long long)momentCaptureRatioForRecord;
- (unsigned long long)newMomentLandingStrategy;
- (unsigned long long)mainRecorderMomentPublishLandingStrategy;
- (void)setIsHitExchangeImage:(BOOL)arg0;
- (void)setIsNotHitExchangeImage:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)settings;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end