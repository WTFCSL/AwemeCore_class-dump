//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, BDByteScreenCastAppUIConfigInfo, BDByteScreenCastTracker, UIButton, BDSCSearchDeviceListView, UIVisualEffectView, BDSCBackgroundView;
@protocol BDByteScreenCastSearchDevicesViewDelegate;

@interface AWESCLandscapeSearchDeviceView : UIView <UIGestureRecognizerDelegate, BDSCSearchDeviceListViewDelegate, BDByteScreenCastSearchDevicesView> {
    BOOL _isShowingSearchPage;
    BOOL _supportDanmaku;
    BOOL _hasLocalNetworkPermission;
    BOOL _supportClarityLimit;
    BOOL _isVPNActive;
    BOOL _invalidDLNADeviceFound;
    BOOL _showAnimating;
    UIView *_popContainerView;
    BDByteScreenCastAppUIConfigInfo *_appUIInfo;
    unsigned long long _viewType;
    id<BDByteScreenCastSearchDevicesViewDelegate> _delegate;
    UIButton *_maskButton;
    UIView *_containerView;
    BDSCBackgroundView *_backgroundView;
    UIVisualEffectView *_visualEffectView;
    BDSCSearchDeviceListView *_listView;
}

@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDSCBackgroundView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) BDSCSearchDeviceListView *listView;
@property (nonatomic) BOOL showAnimating;
@property (weak, nonatomic) UIView *popContainerView;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (nonatomic) unsigned long long viewType;
@property (weak, nonatomic) id<BDByteScreenCastSearchDevicesViewDelegate> delegate;
@property (nonatomic) BOOL isShowingSearchPage;
@property (nonatomic) BOOL supportDanmaku;
@property (nonatomic) BOOL hasLocalNetworkPermission;
@property (nonatomic) BOOL supportClarityLimit;
@property (nonatomic) BOOL isVPNActive;
@property (nonatomic) BOOL invalidDLNADeviceFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long xsgIdentifyStatus;
@property (nonatomic) unsigned long long searchStatus;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) BDByteScreenCastTracker *byteCastTracker;

- (void)dismissWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)handleTapAction;
- (void)setupSubview;
- (void)setAppUIInfo:(id)arg0;
- (void)setSupportClarityLimit:(BOOL)arg0;
- (void)setMaskButton:(id)arg0;
- (id)maskButton;
- (id)popContainerView;
- (void)setPopContainerView:(id)arg0;
- (unsigned long long)searchStatus;
- (id)byteCastTracker;
- (void)setShowAnimating:(BOOL)arg0;
- (void)setIsShowingSearchPage:(BOOL)arg0;
- (void)setXsgIdentifyStatus:(unsigned long long)arg0;
- (void)setSearchStatus:(unsigned long long)arg0;
- (unsigned long long)xsgIdentifyStatus;
- (void)setByteCastTracker:(id)arg0;
- (void)setHasLocalNetworkPermission:(BOOL)arg0;
- (void)setIsVPNActive:(BOOL)arg0;
- (id)currentConnectedDevice;
- (BOOL)hasLocalNetworkPermission;
- (BOOL)isShowingSearchPage;
- (BOOL)showAnimating;
- (void)searchDeviceListView:(id)arg0 deviceCellClicked:(id)arg1;
- (void)searchDeviceListView:(id)arg0 searchBtnClicked:(id)arg1;
- (id)loadingViewForSearchDeviceListView:(id)arg0;
- (id)noNetworkViewForSearchDeviceListView:(id)arg0;
- (id)noDeviceViewForSearchDeviceListView:(id)arg0;
- (BOOL)searchDeviceListViewCellShouldAnimate:(id)arg0;
- (id)noPermissionViewForSearchDeviceListView:(id)arg0;
- (id)vpnActiveViewForSearchDeviceListView:(id)arg0;
- (void)showWithCompletion:(id /* block */)arg0 fromParentViewController:(id)arg1;
- (void)updateWifiInfoWithNetworkStatus:(long long)arg0;
- (void)setupXsgIdentifyStatus:(unsigned long long)arg0;
- (id)appUIInfo;
- (BOOL)supportDanmaku;
- (void)setSupportDanmaku:(BOOL)arg0;
- (BOOL)supportClarityLimit;
- (BOOL)invalidDLNADeviceFound;
- (void)setInvalidDLNADeviceFound:(BOOL)arg0;
- (void)setDevices:(id)arg0;
- (void)setListView:(id)arg0;
- (id)backgroundView;
- (id)listView;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)devices;
- (id)delegate;
- (BOOL)isVPNActive;
- (id)containerView;
- (id)visualEffectView;
- (unsigned long long)viewType;
- (void)setDelegate:(id)arg0;
- (void)setVisualEffectView:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setViewType:(unsigned long long)arg0;

@end