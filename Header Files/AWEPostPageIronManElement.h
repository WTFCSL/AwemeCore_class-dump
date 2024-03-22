//
//     Generated by private class-dump
//

@class NSString, AWENewPublishTableCell, NSDictionary;

@interface AWEPostPageIronManElement : AWEPostPageCellElement <AWEPostPageAnchorProtocol, AWECommerceAnchorMessageProtocol, AWEAnchorListFilterProtocol> {
    BOOL _disposed;
    BOOL _isFromIronMan;
    NSDictionary *_extras;
    unsigned long long _currentType;
    NSString *_mpShootWay;
    AWENewPublishTableCell *_ironManCell;
}

@property (nonatomic) BOOL disposed;
@property (nonatomic) BOOL isFromIronMan;
@property (nonatomic) unsigned long long currentType;
@property (copy, nonatomic) NSString *mpShootWay;
@property (retain, nonatomic) AWENewPublishTableCell *ironManCell;
@property (readonly, copy, nonatomic) NSDictionary *extras;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)setDisposed:(BOOL)arg0;
- (void)setCurrentType:(unsigned long long)arg0;
- (BOOL)shouldBanAnchor:(id)arg0;
- (void)didSelectAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1 enterFromType:(long long)arg2;
- (void)addAIAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1;
- (void)bindServices:(id)arg0;
- (void)elementAppear;
- (void)refreshWithAnchorVM:(id)arg0;
- (BOOL)forceReceiveEvents;
- (BOOL)isAlbumVideo;
- (id)navBarService;
- (id)ironManCell;
- (void)loadSourceParams;
- (void)checkIfNoPermitIfNeed;
- (void)setIsFromIronMan:(BOOL)arg0;
- (BOOL)isFromIronMan;
- (void)setMpShootWay:(id)arg0;
- (id)mpShootWay;
- (unsigned long long)getVideoPermissionAB;
- (void)trackNoPermission:(id)arg0;
- (void)deleteIronManAnchorIfNeed;
- (void)cleanStarAtlasIfNeed;
- (void)trackCurrentPage:(long long)arg0;
- (void)addIronManAnchorNotification:(id)arg0;
- (void)addIronManAnchorFromLynxNotification:(id)arg0;
- (void)addIronManAnchorFromCallHostMethodNotification:(id)arg0;
- (void)addIronManTalentAnchorNotification:(id)arg0;
- (void)trackPublishPage;
- (void)deleteNormalAnchorIfNeed;
- (void)checkAnchorPermissionIfNeed;
- (void)cancelSelectedIronMan:(id)arg0;
- (BOOL)shouldCheckBindChannel:(id)arg0;
- (void)checkAnchorPermission;
- (void)trackAnchorCheckResult:(BOOL)arg0 reason:(id)arg1 bindChannel:(id)arg2 extra:(id)arg3;
- (void)updateCellWithAnchorContent:(id)arg0 type:(unsigned long long)arg1;
- (void)updateIronManAnchor:(id)arg0 needCheck:(BOOL)arg1;
- (void)realUpdateIronManAnchor:(id)arg0;
- (void)checkAnchorStatusWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)updateCellWithJsonString:(id)arg0 anchorID:(id)arg1 title:(id)arg2;
- (BOOL)checkStarAtlasMission;
- (void)trackMPEvent:(id)arg0 appID:(id)arg1;
- (void)transferToMountPage;
- (void)transferToTimorWithSchema:(id)arg0;
- (void)openNativeAppMountContainer;
- (void)openSlidingContainerController;
- (void)presentSlidingContainerControllerWithTabs:(id)arg0;
- (void)showPermissionErrorToastWithName:(id)arg0 toastMsg:(id)arg1;
- (id)toastContainerWithViewController:(id)arg0;
- (void)trackNoPermitJustify:(id)arg0 reason:(id)arg1;
- (void)setIronManCell:(id)arg0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)type;
- (id)extras;
- (BOOL)isEnabled;
- (void)setViewModel:(id)arg0;
- (void)setUp;
- (void)viewDidLoad;
- (void)addObserver;
- (BOOL)isVisible;
- (id)cell;
- (id)cellIdentifier;
- (void)didSelect;
- (unsigned long long)currentType;
- (void)setUpUI;
- (BOOL)disposed;

@end