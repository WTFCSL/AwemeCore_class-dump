//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, DUXContentSheet, BDByteScreenCastTracker, BDByteScreenCastAppUIConfigInfo, BDSCSearchDeviceListView, BDSCBackgroundView;
@protocol BDByteScreenCastSearchDevicesViewDelegate;

@interface AWESCSearchDeviceViewController : UIViewController <BDByteScreenCastSearchDevicesView, DUXSheetDelegate, BDSCSearchDeviceListViewDelegate> {
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
    DUXContentSheet *_sheet;
    BDSCBackgroundView *_backgroundView;
    BDSCSearchDeviceListView *_listView;
}

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) BDSCBackgroundView *backgroundView;
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
@property (nonatomic) unsigned long long xsgIdentifyStatus;
@property (nonatomic) unsigned long long searchStatus;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) BDByteScreenCastTracker *byteCastTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetWillDismiss:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (void)dismissWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setAppUIInfo:(id)arg0;
- (void)setSupportClarityLimit:(BOOL)arg0;
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
- (void)configBackgroundViewIfNeeded;
- (void)setDevices:(id)arg0;
- (void)setListView:(id)arg0;
- (id)backgroundView;
- (id)listView;
- (void).cxx_destruct;
- (id)devices;
- (id)delegate;
- (BOOL)isVPNActive;
- (unsigned long long)viewType;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setBackgroundView:(id)arg0;
- (void)setViewType:(unsigned long long)arg0;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
