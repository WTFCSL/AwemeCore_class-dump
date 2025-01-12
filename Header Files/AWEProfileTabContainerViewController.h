//
//     Generated by private class-dump
//

@class NSString, AWEProfileBaseContainerViewController;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEProfileTabContainerViewController : UIViewController <AWEProfileTabContainerProtocol> {
    BOOL _isInUserHomePage;
    BOOL _needHeaderCellAttachTop;
    BOOL _rightFixedAreaUseContainerDataSource;
    BOOL _isSwitchedFromRedDot;
    BOOL _isCurrentUser;
    id<AWEUserProfileTabVCDelegate> _delegate;
    AWEProfileBaseContainerViewController *_baseVC;
}

@property (retain, nonatomic) AWEProfileBaseContainerViewController *baseVC;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (nonatomic) BOOL isInUserHomePage;
@property (nonatomic) BOOL needHeaderCellAttachTop;
@property (nonatomic) BOOL rightFixedAreaUseContainerDataSource;
@property (nonatomic) BOOL isSwitchedFromRedDot;
@property (nonatomic) BOOL isCurrentUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(unsigned long long)arg0;
- (double)contentOffsetY;
- (id)baseVC;
- (void)setBaseVC:(id)arg0;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (double)contentSizeHeight;
- (void)hideBubble;
- (BOOL)rightFixedAreaUseContainerDataSource;
- (id)tabItemVCForModel:(id)arg0 index:(long long)arg1;
- (BOOL)isInUserHomePage;
- (void)setIsInUserHomePage:(BOOL)arg0;
- (BOOL)isSwitchedFromRedDot;
- (void)setIsSwitchedFromRedDot:(BOOL)arg0;
- (void)containerViewDidScroll:(id)arg0;
- (BOOL)needHeaderCellAttachTop;
- (void)updateWithTabItems:(id)arg0 landingIndex:(long long)arg1;
- (id)currentTabVC;
- (void)setRightFixedAreaUseContainerDataSource:(BOOL)arg0;
- (void)setNeedHeaderCellAttachTop:(BOOL)arg0;
- (void)showBubbleWithText:(id)arg0 index:(long long)arg1;
- (void)updateWithTabItems:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)reloadData;
- (id)contentView;
- (id)delegate;
- (double)headerHeight;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)refreshData;

@end
