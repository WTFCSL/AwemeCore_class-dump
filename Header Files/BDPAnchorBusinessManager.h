//
//     Generated by private class-dump
//

@class UIButton, NSString, BDPAppPageURL, NSMutableArray, NSNumber, BDPUniqueID;

@interface BDPAnchorBusinessManager : NSObject <BDPShareEventHandler, BDPAppRouteChangeMessage, BDPScreenRecorderMessage, BDPAnchorBusinessService> {
    BOOL _isProductTypeForCurrentPagePath;
    BOOL _isGettingProductType;
    long long anchorType;
    unsigned long long currentMode;
    BDPUniqueID *_uniqueID;
    NSNumber *_maxShelvesNum;
    UIButton *_anchorButton;
    UIButton *_shelfAddButton;
    UIButton *_shelfMultiAddButton;
    UIButton *_shelfDeleteButton;
    UIButton *_shelfCompleteButton;
    NSString *_anchorAction;
    long long _blockShelfAdd;
    BDPAppPageURL *_currentAppPageURL;
    BDPAppPageURL *_explainingPageURL;
    NSMutableArray *_mountedPageURLs;
    NSMutableArray *_editedArray;
    NSString *_mountAppID;
    double _latestDidEnterPageTimestamp;
    BDPAppPageURL *_latestDidEnterPagePath;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSNumber *maxShelvesNum;
@property (retain, nonatomic) UIButton *anchorButton;
@property (retain, nonatomic) UIButton *shelfAddButton;
@property (retain, nonatomic) UIButton *shelfMultiAddButton;
@property (retain, nonatomic) UIButton *shelfDeleteButton;
@property (retain, nonatomic) UIButton *shelfCompleteButton;
@property (retain, nonatomic) NSString *anchorAction;
@property (nonatomic) long long blockShelfAdd;
@property (retain, nonatomic) BDPAppPageURL *currentAppPageURL;
@property (retain, nonatomic) BDPAppPageURL *explainingPageURL;
@property (retain, nonatomic) NSMutableArray *mountedPageURLs;
@property (retain, nonatomic) NSMutableArray *editedArray;
@property (copy, nonatomic) NSString *mountAppID;
@property (nonatomic) double latestDidEnterPageTimestamp;
@property (retain, nonatomic) BDPAppPageURL *latestDidEnterPagePath;
@property (nonatomic) BOOL isProductTypeForCurrentPagePath;
@property (nonatomic) BOOL isGettingProductType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long currentMode;
@property (nonatomic) long long anchorType;

+ (void)bootstrapLaunch;

- (void)handleShareBussinessForChannel:(id)arg0 withParams:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3;
- (id)initService;
- (void)onAppRouteChangePageWillEnterWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2;
- (void)showAnchorButtonOnController:(id)arg0 withUniqueID:(id)arg1;
- (BOOL)needExsitConfrim;
- (void)showExsitConfrimWithCompletion:(id /* block */)arg0;
- (void)handleLiveMountWithParams:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)completeButtonDidClick:(id)arg0;
- (void)setEditedArray:(id)arg0;
- (void)screenRecordDidStartWithExtra:(id)arg0;
- (void)screenRecordDidStopWithExtra:(id)arg0;
- (void)screenRecordReceiveException:(id)arg0 extra:(id)arg1;
- (void)screenRecordRunningStateDidChanged:(unsigned long long)arg0;
- (void)setMountedPageURLs:(id)arg0;
- (void)setExplainingPageURL:(id)arg0;
- (void)setMaxShelvesNum:(id)arg0;
- (void)setMountAppID:(id)arg0;
- (void)resetAnchorButtons;
- (void)setAnchorAction:(id)arg0;
- (void)setBlockShelfAdd:(long long)arg0;
- (void)showShelfButtonOnView:(id)arg0;
- (void)showVideoAnchorButtonOnView:(id)arg0;
- (void)showLiveAnchorButtonOnView:(id)arg0;
- (void)showLiveShareAnchorButtonOnView:(id)arg0;
- (void)showMissionAnchorButtonOnView:(id)arg0 type:(long long)arg1;
- (id)anchorButton;
- (id)shelfAddButton;
- (id)shelfDeleteButton;
- (id)shelfCompleteButton;
- (id)shelfMultiAddButton;
- (id)editedArray;
- (BOOL)isAllDeleted;
- (id)mountAppID;
- (id)mountedPageURLs;
- (void)updateAnchorButtons;
- (id)latestDidEnterPagePath;
- (BOOL)isProductTypeForCurrentPagePath;
- (void)setLatestDidEnterPageTimestamp:(double)arg0;
- (void)setLatestDidEnterPagePath:(id)arg0;
- (void)setIsProductTypeForCurrentPagePath:(BOOL)arg0;
- (void)setIsGettingProductType:(BOOL)arg0;
- (void)setCurrentAppPageURL:(id)arg0;
- (BOOL)isGettingProductType;
- (double)latestDidEnterPageTimestamp;
- (void)updateShelfButton;
- (void)p_tryToshowAnchorProductGuideViewControlerWithGuideURL:(id)arg0;
- (void)updateAnchorButton;
- (id)anchorAction;
- (id)explainingPageURL;
- (id)currentAppPageURL;
- (BOOL)shouldHideAnchorButton;
- (id)maxShelvesNum;
- (void)sendLiveMountEvent:(id)arg0 andFrom:(id)arg1;
- (long long)blockShelfAdd;
- (void)recordEditedPage:(id)arg0;
- (void)showUserBlockedToastWithUniqueID:(id)arg0 unmountReason:(id)arg1 channel:(id)arg2 tagInfo:(id)arg3 actionCompletion:(id /* block */)arg4;
- (void)didSelectedMountPageWithTitle:(id)arg0 appName:(id)arg1 appIcon:(id)arg2 schema:(id)arg3 authBCType:(long long)arg4 fromShareChain:(BOOL)arg5;
- (id)handleBCTypeWithType:(long long)arg0 uniqueID:(id)arg1 originalPath:(id)arg2;
- (id)buildNewAnchorButton;
- (void)anchorButtonDidClick:(id)arg0;
- (void)setAnchorButton:(id)arg0;
- (void)setShelfAddButton:(id)arg0;
- (void)setShelfMultiAddButton:(id)arg0;
- (void)setShelfDeleteButton:(id)arg0;
- (void)setShelfCompleteButton:(id)arg0;
- (unsigned long long)currentMode;
- (long long)anchorType;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setCurrentMode:(unsigned long long)arg0;
- (void)setAnchorType:(long long)arg0;

@end
