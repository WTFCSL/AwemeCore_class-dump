//
//     Generated by private class-dump
//

@class UIButton, NSString, UIImageView, IESLiveGameOpenPlatformMorePanelCollectionViewModel, UICollectionView, UILabel, UIView;
@protocol IESLiveOpenPlatformSonicMorePanelViewDelegate;

@interface IESLiveOpenPlatformSonicLandscapeMorePanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IESLiveGameOpenPlatformMorePanelViewDelegate, IESLiveOpenPlatformSonicMorePanelViewService> {
    BOOL _isShowing;
    UIView *_morePanelAlertview;
    NSString *_title;
    UIView *_withdrawView;
    id<IESLiveOpenPlatformSonicMorePanelViewDelegate> _delegate;
    UIButton *_withDrawButton;
    UICollectionView *_morePanelCollectionView;
    IESLiveGameOpenPlatformMorePanelCollectionViewModel *_collectionViewCellModel;
    UIImageView *_morePanelHeaderView;
    UILabel *_morePanelHeaderLabel;
    UIView *_splitLine;
}

@property (retain, nonatomic) UICollectionView *morePanelCollectionView;
@property (retain, nonatomic) IESLiveGameOpenPlatformMorePanelCollectionViewModel *collectionViewCellModel;
@property (retain, nonatomic) UIImageView *morePanelHeaderView;
@property (retain, nonatomic) UILabel *morePanelHeaderLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *morePanelAlertview;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *withdrawView;
@property (weak, nonatomic) id<IESLiveOpenPlatformSonicMorePanelViewDelegate> delegate;
@property (retain, nonatomic) UIButton *withDrawButton;
@property (nonatomic) BOOL isShowing;

+ (double)morePanelViewHeight;

- (void)setIsShowing:(BOOL)arg0;
- (void)setupObserver;
- (id)attachingDIContext;
- (id)splitLine;
- (void)setSplitLine:(id)arg0;
- (void)clickButton:(id)arg0;
- (id)morePanelAlertview;
- (void)setMorePanelAlertview:(id)arg0;
- (void)setMorePanelHeaderView:(id)arg0;
- (void)setMorePanelHeaderLabel:(id)arg0;
- (void)setMorePanelCollectionView:(id)arg0;
- (id)morePanelCollectionView;
- (void)createBtnTitle;
- (void)setWithDrawButton:(id)arg0;
- (id)withDrawButton;
- (id)morePanelHeaderView;
- (id)morePanelHeaderLabel;
- (id)collectionViewCellModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 gameModel:(id)arg1;
- (void)updateWithMorePanelTitle:(id)arg0 imageUrl:(id)arg1;
- (void)handlePanelDidShow;
- (id)withdrawView;
- (void)setWithdrawView:(id)arg0;
- (void)setCollectionViewCellModel:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (BOOL)isShowing;
- (id)title;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupUI;

@end
