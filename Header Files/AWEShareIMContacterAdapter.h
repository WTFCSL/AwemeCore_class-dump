//
//     Generated by private class-dump
//

@class NSString, NSMutableOrderedSet, AWESharePanelListIMCellModel, UIView, UIButton;

@interface AWEShareIMContacterAdapter : UIViewController <AWESharePanelAdapter> {
    BOOL isUsingAdapter;
    BOOL _userInteractionEnabled;
    BOOL _willTransferToShareList;
    UIButton *_shareButton;
    id /* block */ _willDismissHandler;
    UIView *_gradientMask;
    AWESharePanelListIMCellModel *_imCellModel;
    NSMutableOrderedSet *_extensionSet;
}

@property (retain, nonatomic) UIView *gradientMask;
@property (retain, nonatomic) AWESharePanelListIMCellModel *imCellModel;
@property (retain, nonatomic) NSMutableOrderedSet *extensionSet;
@property (nonatomic) BOOL willTransferToShareList;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (readonly, nonatomic) BOOL isUsingAdapter;
@property (readonly, nonatomic) BOOL isBackPackAdapter;
@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) unsigned long long styleOptions;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (weak, nonatomic) UIButton *shareButton;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)panelType;
- (id)itemWithType:(id)arg0;
- (BOOL)reloadCellForItemWithType:(id)arg0;
- (BOOL)scrollToCellForItemWithType:(id)arg0;
- (BOOL)isCellVisibleForItemWithType:(id)arg0;
- (void)addDismissedHandler:(id /* block */)arg0;
- (id)fromGroupID;
- (void)removeExtension:(id)arg0;
- (id)gradientMask;
- (void)setGradientMask:(id)arg0;
- (id)extensionSet;
- (void)setExtensionSet:(id)arg0;
- (void)setImCellModel:(id)arg0;
- (id)imCellModel;
- (id)p_getShareListPanel;
- (void)setWillTransferToShareList:(BOOL)arg0;
- (id)getTranspondShareModelList;
- (void)didSelectContacter:(id)arg0;
- (void)unselectContacter;
- (void)willdismissPanel:(BOOL)arg0;
- (id /* block */)willDismissHandlerForShareList;
- (void)moreCellDidTap;
- (BOOL)isUsingAdapter;
- (BOOL)isBackPackAdapter;
- (id)initWithCellModel:(id)arg0;
- (BOOL)willTransferToShareList;
- (BOOL)isUserInteractionEnabled;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (void)addExtension:(id)arg0;
- (id)contentView;
- (BOOL)hasMore;
- (id)containerView;
- (void)dismissAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (unsigned long long)styleOptions;
- (id)shareButton;
- (void)setShareButton:(id)arg0;
- (id /* block */)willDismissHandler;
- (void)setWillDismissHandler:(id /* block */)arg0;

@end