//
//     Generated by private class-dump
//

@class BDPPrivacyAccessInfo, UICollectionView, UILabel, NSDictionary, BDPUniqueID, UIView, UIButton, NSString, NSLayoutConstraint, UICollectionViewFlowLayout, BDPCustomMorePanelModel, NSArray, UIControl, BDPPageIndicator, UIImageView;
@protocol BDPFriendsShareViewPluginDelegate, BDPAwemeMorePanelPluginDelegate;

@interface BDPMorePanel_HG : BDPView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, BDPMorePanelInterface> {
    BOOL _autoDismiss;
    NSArray *firstRowItems;
    NSArray *secondRowItems;
    BDPCustomMorePanelModel *customModel;
    NSDictionary *extraInfo;
    NSArray *_items;
    BDPUniqueID *_uniqueID;
    BDPPrivacyAccessInfo *_privacyInfo;
    UICollectionView *_collectionView;
    UIControl *_privacyView;
    UIImageView *_privacyIconImageView;
    UILabel *_privacyTitleLabel;
    UIButton *_cancelButton;
    UIView *_developerView;
    UIView *_dimmingView;
    BDPPageIndicator *_pageIndicator;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_buttonContainerTopSpaceConstraint;
    NSLayoutConstraint *_privacyViewTopSpaceConstraint;
    NSLayoutConstraint *_privacyViewHeightConstraint;
    UICollectionViewFlowLayout *_layout;
    NSArray *_pagedItems;
    id<BDPFriendsShareViewPluginDelegate> _friendsShareViewPlugin;
    id<BDPAwemeMorePanelPluginDelegate> _awemeMorePanelPlugin;
    UIView *_friendsShareView;
    UIView *_awemeMorePanel;
}

@property (copy, nonatomic) NSArray *pagedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) BDPPrivacyAccessInfo *privacyInfo;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSArray *firstRowItems;
@property (copy, nonatomic) NSArray *secondRowItems;
@property (retain, nonatomic) BDPCustomMorePanelModel *customModel;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) BOOL autoDismiss;

- (void)setExtraInfo:(id)arg0;
- (void)setPrivacyInfo:(id)arg0;
- (void)showInView:(id)arg0 animated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)event:(id)arg0 param:(id)arg1;
- (void)onPrivacyViewTap:(id)arg0;
- (void)onCancelButtonTap:(id)arg0;
- (void)onDimmingViewTap:(id)arg0;
- (void)trackerItems:(id)arg0;
- (id)convertName:(id)arg0;
- (id)privacyInfo;
- (void)dismissAnimated:(BOOL)arg0 complete:(id /* block */)arg1;
- (id)firstRowItems;
- (id)secondRowItems;
- (void)setFirstRowItems:(id)arg0;
- (void)setSecondRowItems:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)init;
- (void)setItems:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setUniqueID:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)autoDismiss;
- (void)setupUI;
- (void)handlePanGesture:(id)arg0;
- (id)customModel;
- (void)setCustomModel:(id)arg0;
- (id)initWithUniqueID:(id)arg0;
- (id)pagedItems;
- (void)setPagedItems:(id)arg0;
- (id)extraInfo;

@end
