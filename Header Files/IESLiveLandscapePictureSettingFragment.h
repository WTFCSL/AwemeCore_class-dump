//
//     Generated by private class-dump
//

@class IESLiveLandscapePictureSettingStore, HTSLiveToolbarItem, NSString, IESLivePopupItem;

@interface IESLiveLandscapePictureSettingFragment : IESLiveRoomComponent <IESLiveLandscapePictureSettingService> {
    IESLiveLandscapePictureSettingStore *_store;
    HTSLiveToolbarItem *_pictureSettingToolbarItem;
    IESLivePopupItem *_popupItem;
    long long _lastPictureFitType;
    double _pictureSettingLiveTime;
    long long _lastOrientation;
}

@property (retain, nonatomic) IESLiveLandscapePictureSettingStore *store;
@property (retain, nonatomic) HTSLiveToolbarItem *pictureSettingToolbarItem;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (nonatomic) long long lastPictureFitType;
@property (nonatomic) double pictureSettingLiveTime;
@property (nonatomic) long long lastOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)liveWillEndWithReason:(unsigned long long)arg0;
- (void)onFIFAPannelSatusChange:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)handleOrientationTransitionBegin:(long long)arg0;
- (void)setPopupItem:(id)arg0;
- (id)popupItem;
- (BOOL)shouldShowViceViewInLandscapeGameRoom;
- (BOOL)enablePictureSetting;
- (long long)currentPictureFitType;
- (void)setLastPictureFitType:(long long)arg0;
- (id)pictureSettingToolbarItem;
- (id)accquirePictureTypeName:(long long)arg0;
- (void)uploadTrackInfo:(id)arg0;
- (void)trackWatchDuration;
- (void)handlePictureFitTypeChangedWithType:(long long)arg0;
- (double)pictureSettingLiveTime;
- (long long)lastPictureFitType;
- (void)setPictureSettingLiveTime:(double)arg0;
- (id)setupPictureSettingToolbarItem;
- (void)showPictureSettingPanelPopView;
- (void)setPictureSettingToolbarItem:(id)arg0;
- (void)setLastOrientation:(long long)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (long long)lastOrientation;

@end