//
//     Generated by private class-dump
//

@class NSString, UIView, BDSCUISettingModel;

@interface BDByteScreenCastAppUIConfigInfo : NSObject {
    BOOL _isLandscapeStream;
    BOOL _needCornerRadius;
    BOOL _isVSRoomSportsPlayBack;
    BOOL _isRoomSupport4K;
    BOOL _supportFoldMode;
    BOOL _isLandScapeV2Style;
    NSString *_xsgDeviceTagDesc;
    NSString *_defaultDeviceHeadTitle;
    NSString *_limitedClarityHeaderTitle;
    NSString *_xsgLabelColor;
    NSString *_deviceSelectedColor;
    BDSCUISettingModel *_uiSettingsModel;
    unsigned long long _clarityPanelStyle;
    double _searchDeviceViewHeight;
    long long _orientation;
    UIView *_loadingView;
    UIView *_sportsFullScreenContainerView;
    unsigned long long _toastShowOnDeviceType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _searchDeviceViewFrame;
}

@property (copy, nonatomic) NSString *xsgDeviceTagDesc;
@property (copy, nonatomic) NSString *defaultDeviceHeadTitle;
@property (copy, nonatomic) NSString *limitedClarityHeaderTitle;
@property (copy, nonatomic) NSString *xsgLabelColor;
@property (copy, nonatomic) NSString *deviceSelectedColor;
@property (nonatomic) BOOL isLandscapeStream;
@property (retain, nonatomic) BDSCUISettingModel *uiSettingsModel;
@property (nonatomic) unsigned long long clarityPanelStyle;
@property (nonatomic) double searchDeviceViewHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchDeviceViewFrame;
@property (nonatomic) BOOL needCornerRadius;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) BOOL isVSRoomSportsPlayBack;
@property (nonatomic) BOOL isRoomSupport4K;
@property (weak, nonatomic) UIView *sportsFullScreenContainerView;
@property (nonatomic) BOOL supportFoldMode;
@property (nonatomic) unsigned long long toastShowOnDeviceType;
@property (nonatomic) BOOL isLandScapeV2Style;

- (void)setSearchDeviceViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setNeedCornerRadius:(BOOL)arg0;
- (void)setIsLandscapeStream:(BOOL)arg0;
- (void)setSearchDeviceViewHeight:(double)arg0;
- (void)setClarityPanelStyle:(unsigned long long)arg0;
- (void)setIsRoomSupport4K:(BOOL)arg0;
- (void)setUiSettingsModel:(id)arg0;
- (id)uiSettingsModel;
- (BOOL)supportFoldMode;
- (unsigned long long)clarityPanelStyle;
- (id)xsgLabelColor;
- (id)xsgDeviceTagDesc;
- (void)setXsgDeviceTagDesc:(id)arg0;
- (id)defaultDeviceHeadTitle;
- (void)setDefaultDeviceHeadTitle:(id)arg0;
- (id)limitedClarityHeaderTitle;
- (void)setLimitedClarityHeaderTitle:(id)arg0;
- (void)setXsgLabelColor:(id)arg0;
- (id)deviceSelectedColor;
- (void)setDeviceSelectedColor:(id)arg0;
- (BOOL)isLandscapeStream;
- (double)searchDeviceViewHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchDeviceViewFrame;
- (BOOL)needCornerRadius;
- (BOOL)isVSRoomSportsPlayBack;
- (void)setIsVSRoomSportsPlayBack:(BOOL)arg0;
- (BOOL)isRoomSupport4K;
- (id)sportsFullScreenContainerView;
- (void)setSportsFullScreenContainerView:(id)arg0;
- (void)setSupportFoldMode:(BOOL)arg0;
- (unsigned long long)toastShowOnDeviceType;
- (void)setToastShowOnDeviceType:(unsigned long long)arg0;
- (BOOL)isLandScapeV2Style;
- (void)setIsLandScapeV2Style:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
