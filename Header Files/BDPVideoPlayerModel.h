//
//     Generated by private class-dump
//

@class NSString, NSDictionary, BDPVideoPlayerSizeModel, NSNumber;

@interface BDPVideoPlayerModel : BDPBasePluginModel <BDPDirectionPanGestureRecognizerProtocol> {
    BOOL _autoplay;
    BOOL _loop;
    BOOL _muted;
    BOOL _shouldDisableUserScreenRecord;
    BOOL _enablePlayInBackground;
    BOOL _hide;
    BOOL _autoPauseIfNavigate;
    BOOL _autoPauseIfOpenNative;
    BOOL _isFullScreen;
    BOOL _preRollAdIsAllowedInLive;
    BOOL _enableProgressGesture;
    BOOL _vslideGesture;
    BOOL _vslideGestureInFullscreen;
    BOOL _enablePlayGesture;
    BOOL _controls;
    BOOL _showFullscreenBtn;
    BOOL _showMuteBtn;
    BOOL _showPlayBtn;
    BOOL _showPlaybackRateBtn;
    BOOL _showCastingButton;
    BOOL _showScreenLockButton;
    BOOL _showProgress;
    BOOL _showBottomProgress;
    BOOL _enableDarkWaterMark;
    BOOL _seekInterrupt;
    long long _status;
    NSString *_appId;
    NSString *_versionType;
    NSString *_src;
    NSDictionary *_allHTTPHeaderFields;
    NSDictionary *_definition;
    NSString *_objectFit;
    NSNumber *_direction;
    BDPVideoPlayerSizeModel *_size;
    long long _prerenderSize;
    NSString *_data;
    NSString *_cacheDir;
    NSString *_decryptToken;
    NSString *_encryptToken;
    NSString *_videoModel;
    NSString *_videoId;
    NSString *_apiForFetcher;
    NSString *_apiVersion;
    NSString *_authToken;
    NSString *_resolution;
    long long _initialTime;
    long long _duration;
    NSString *_preRollAdUnitId;
    NSString *_postRollAdUnitId;
    NSNumber *_fullscreenDirection;
    NSString *_playBtnPosition;
    NSString *_poster;
    NSString *_posterSize;
    NSNumber *_durationLimit;
    long long _pageID;
    NSString *_componentID;
    NSDictionary *_signature;
    NSString *_pagePath;
    long long _preRenderStatus;
    struct CGSize { double width; double height; } _currentSize;
}

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *versionType;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (copy, nonatomic) NSDictionary *definition;
@property (nonatomic) BOOL autoplay;
@property (copy, nonatomic) NSString *objectFit;
@property (retain, nonatomic) NSNumber *direction;
@property (retain, nonatomic) BDPVideoPlayerSizeModel *size;
@property (nonatomic) long long prerenderSize;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL shouldDisableUserScreenRecord;
@property (nonatomic) BOOL enablePlayInBackground;
@property (nonatomic) BOOL hide;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *cacheDir;
@property (copy, nonatomic) NSString *decryptToken;
@property (copy, nonatomic) NSString *encryptToken;
@property (copy, nonatomic) NSString *videoModel;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *apiForFetcher;
@property (copy, nonatomic) NSString *apiVersion;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) long long initialTime;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL autoPauseIfNavigate;
@property (nonatomic) BOOL autoPauseIfOpenNative;
@property (nonatomic) BOOL isFullScreen;
@property (copy, nonatomic) NSString *preRollAdUnitId;
@property (copy, nonatomic) NSString *postRollAdUnitId;
@property (retain, nonatomic) NSNumber *fullscreenDirection;
@property (nonatomic) BOOL preRollAdIsAllowedInLive;
@property (nonatomic) BOOL enableProgressGesture;
@property (nonatomic) BOOL vslideGesture;
@property (nonatomic) BOOL vslideGestureInFullscreen;
@property (nonatomic) BOOL enablePlayGesture;
@property (nonatomic) BOOL controls;
@property (copy, nonatomic) NSString *playBtnPosition;
@property (nonatomic) BOOL showFullscreenBtn;
@property (nonatomic) BOOL showMuteBtn;
@property (nonatomic) BOOL showPlayBtn;
@property (nonatomic) BOOL showPlaybackRateBtn;
@property (copy, nonatomic) NSString *poster;
@property (nonatomic) BOOL showCastingButton;
@property (nonatomic) BOOL showScreenLockButton;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) BOOL showBottomProgress;
@property (copy, nonatomic) NSString *posterSize;
@property (retain, nonatomic) NSNumber *durationLimit;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (retain, nonatomic) NSDictionary *signature;
@property (nonatomic) BOOL enableDarkWaterMark;
@property (nonatomic) BOOL seekInterrupt;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) long long preRenderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)getDefinitionDesc:(id)arg0;
+ (id)getStandardDefiniton:(id)arg0;

- (void)setHide:(BOOL)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setCacheDir:(id)arg0;
- (id)cacheDir;
- (id)versionType;
- (void)setVersionType:(id)arg0;
- (void)setPagePath:(id)arg0;
- (id)pagePath;
- (id)apiForFetcher;
- (void)setDurationLimit:(id)arg0;
- (id)encryptToken;
- (void)setEncryptToken:(id)arg0;
- (BOOL)shouldHandleDirectionPanGestureRecognizer;
- (BOOL)showCastingButton;
- (id)objectFit;
- (void)setObjectFit:(id)arg0;
- (void)setFullscreenDirection:(id)arg0;
- (struct CGSize { double x0; double x1; })getTargetSize;
- (BOOL)autoPauseIfNavigate;
- (void)setAutoPauseIfNavigate:(BOOL)arg0;
- (BOOL)autoPauseIfOpenNative;
- (void)setAutoPauseIfOpenNative:(BOOL)arg0;
- (id)fullscreenDirection;
- (void)setShowCastingButton:(BOOL)arg0;
- (void)setPreRollAdIsAllowedInLive:(BOOL)arg0;
- (id)preRollAdUnitId;
- (void)setPreRenderStatus:(long long)arg0;
- (BOOL)isSrcSourceType;
- (BOOL)enablePlayInBackground;
- (void)setShowPlayBtn:(BOOL)arg0;
- (void)setShowFullscreenBtn:(BOOL)arg0;
- (void)setShowPlaybackRateBtn:(BOOL)arg0;
- (void)setShowMuteBtn:(BOOL)arg0;
- (void)setPlayBtnPosition:(id)arg0;
- (BOOL)showPlayBtn;
- (BOOL)showFullscreenBtn;
- (BOOL)showMuteBtn;
- (BOOL)showPlaybackRateBtn;
- (id)playBtnPosition;
- (id)getCurrentSrcDescStrWithCurrentResolution:(id)arg0;
- (BOOL)enableDarkWaterMark;
- (BOOL)enablePlayGesture;
- (BOOL)enableProgressGesture;
- (BOOL)vslideGesture;
- (BOOL)vslideGestureInFullscreen;
- (BOOL)showScreenLockButton;
- (long long)preRenderStatus;
- (BOOL)showBottomProgress;
- (id)posterSize;
- (void)setShowBottomProgress:(BOOL)arg0;
- (BOOL)isDeafultCloseProperty:(id)arg0;
- (BOOL)isDeafultOpenProperty:(id)arg0;
- (id)decryptToken;
- (long long)prerenderSize;
- (void)setPrerenderSize:(long long)arg0;
- (BOOL)shouldDisableUserScreenRecord;
- (void)setShouldDisableUserScreenRecord:(BOOL)arg0;
- (void)setEnablePlayInBackground:(BOOL)arg0;
- (void)setDecryptToken:(id)arg0;
- (void)setApiForFetcher:(id)arg0;
- (void)setPreRollAdUnitId:(id)arg0;
- (id)postRollAdUnitId;
- (void)setPostRollAdUnitId:(id)arg0;
- (BOOL)preRollAdIsAllowedInLive;
- (void)setEnableProgressGesture:(BOOL)arg0;
- (void)setVslideGesture:(BOOL)arg0;
- (void)setVslideGestureInFullscreen:(BOOL)arg0;
- (void)setEnablePlayGesture:(BOOL)arg0;
- (void)setShowScreenLockButton:(BOOL)arg0;
- (void)setPosterSize:(id)arg0;
- (void)setEnableDarkWaterMark:(BOOL)arg0;
- (BOOL)seekInterrupt;
- (void)setSeekInterrupt:(BOOL)arg0;
- (id)poster;
- (void)setSignature:(id)arg0;
- (void)setAuthToken:(id)arg0;
- (id)authToken;
- (BOOL)controls;
- (id)signature;
- (void)setAppId:(id)arg0;
- (void)setResolution:(id)arg0;
- (void)setValue:(id)arg0 forKeyPath:(id)arg1;
- (BOOL)isFullScreen;
- (id)data;
- (void)setVideoId:(id)arg0;
- (id)resolution;
- (void).cxx_destruct;
- (BOOL)muted;
- (id)definition;
- (long long)status;
- (void)setPageID:(long long)arg0;
- (void)setPoster:(id)arg0;
- (void)setMuted:(BOOL)arg0;
- (void)setControls:(BOOL)arg0;
- (void)setData:(id)arg0;
- (id)direction;
- (long long)pageID;
- (void)setInitialTime:(long long)arg0;
- (long long)duration;
- (id)videoId;
- (void)setStatus:(long long)arg0;
- (BOOL)hide;
- (void)setApiVersion:(id)arg0;
- (id)durationLimit;
- (id)size;
- (long long)initialTime;
- (void)setSize:(id)arg0;
- (id)appId;
- (void)setDirection:(id)arg0;
- (id)apiVersion;
- (struct CGSize { double x0; double x1; })currentSize;
- (void)setCurrentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setDuration:(long long)arg0;
- (id)allHTTPHeaderFields;
- (void)setAllHTTPHeaderFields:(id)arg0;
- (id)src;
- (void)setSrc:(id)arg0;
- (BOOL)loop;
- (id)componentID;
- (void)setComponentID:(id)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (void)setDefinition:(id)arg0;
- (BOOL)showProgress;
- (void)setShowProgress:(BOOL)arg0;
- (void)setLoop:(BOOL)arg0;
- (BOOL)autoplay;
- (void)setAutoplay:(BOOL)arg0;

@end
