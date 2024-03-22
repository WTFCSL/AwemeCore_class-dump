//
//     Generated by private class-dump
//

@class HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, IESLivePlayerResolutionController;
@protocol IESLivePlayerStoredResolutionKeyProvider;

@interface IESLiveAutoClarityManager : NSObject {
    BOOL _isVSRoom;
    BOOL _shouldShowViceView;
    BOOL _vpassDefault;
    HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *_localAutoQuality;
    IESLivePlayerResolutionController *_resolutionController;
    id<IESLivePlayerStoredResolutionKeyProvider> _storedResolutionKeyProvider;
}

@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *localAutoQuality;
@property (nonatomic) BOOL isVSRoom;
@property (nonatomic) BOOL shouldShowViceView;
@property (nonatomic) BOOL vpassDefault;
@property (retain, nonatomic) IESLivePlayerResolutionController *resolutionController;
@property (retain, nonatomic) id<IESLivePlayerStoredResolutionKeyProvider> storedResolutionKeyProvider;

+ (BOOL)checkLocalAutoEnable;
+ (id)streamQualityMediaSize:(id)arg0 sdkKey:(id)arg1;
+ (long long)isHorizontalStreamResolution:(id)arg0;
+ (id)adjustPreviewResolutionWithModel:(id)arg0;
+ (BOOL)checkNotAllowLocalAutoQuality:(BOOL)arg0 hasViceView:(BOOL)arg1;
+ (id)checkAndHandleWideScreenStreamWithQualityArray:(id)arg0 isVSRoom:(BOOL)arg1;
+ (id)findStartPlayRealLocalAutoQualityWithRoomModel:(id)arg0;

- (BOOL)shouldShowViceView;
- (BOOL)isVSRoom;
- (id)storedResolutionKeyProvider;
- (BOOL)vpassDefault;
- (void)setVpassDefault:(BOOL)arg0;
- (void)setIsVSRoom:(BOOL)arg0;
- (void)setShouldShowViceView:(BOOL)arg0;
- (id)setUpAutoQuality:(id)arg0 qualityArray:(id)arg1;
- (id)resolutionController;
- (id)addLocalAutoQualityIfNeeded:(id)arg0;
- (id)findAutoQualityWithArray:(id)arg0;
- (BOOL)checkSelectedIndexIsAuto:(long long)arg0 qualityList:(id)arg1;
- (id)findRealQualityManualSwitchAutoQuality:(id)arg0 isVRRoom:(BOOL)arg1 vpassDefault:(BOOL)arg2;
- (void)setResolutionController:(id)arg0;
- (BOOL)checkIsAutoQuality:(id)arg0;
- (void)updateShowLocalAutoQualityIfNeeded:(id)arg0 complete:(id /* block */)arg1;
- (BOOL)checkNotAllowLocalAutoQuality;
- (id)localAutoQuality;
- (id)findPlayerAutoQualityWithArray:(id)arg0;
- (void)setLocalAutoQuality:(id)arg0;
- (void)setStoredResolutionKeyProvider:(id)arg0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)arg0;

@end
