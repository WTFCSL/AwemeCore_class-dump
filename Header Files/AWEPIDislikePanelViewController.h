//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSArray, NSString, AWEDislikePanelVideoInfoView, NSDictionary, AWEDislikePanelBottomView, CAGradientLayer, UICollectionView, AWEDislikePanelLoadingView;
@protocol AWEPIDislikePanelVCDelegate;

@interface AWEPIDislikePanelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEDislikeInputViewCellDelegate> {
    id<AWEPIDislikePanelVCDelegate> _delegate;
    UICollectionView *_collectionView;
    AWEAwemeModel *_model;
    NSArray *_dimensions;
    NSDictionary *_trackExtra;
    UIView *_containerView;
    AWEDislikePanelVideoInfoView *_topVideoInfoView;
    AWEDislikePanelBottomView *_dislikeBottomView;
    CAGradientLayer *_bottomGradientView;
    CAGradientLayer *_topGradientView;
    AWEDislikePanelLoadingView *_loadingView;
    struct CGSize { double width; double height; } _lastKeyboardSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalFrame;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSArray *dimensions;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEDislikePanelVideoInfoView *topVideoInfoView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEDislikePanelBottomView *dislikeBottomView;
@property (retain, nonatomic) CAGradientLayer *bottomGradientView;
@property (retain, nonatomic) CAGradientLayer *topGradientView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (nonatomic) struct CGSize { double width; double height; } lastKeyboardSize;
@property (retain, nonatomic) AWEDislikePanelLoadingView *loadingView;
@property (weak, nonatomic) id<AWEPIDislikePanelVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (void)configSubviews;
- (void)didClickCloseButton;
- (void)didClickCancelButton;
- (void)textViewDidChangeText:(id)arg0 cell:(id)arg1 indexPath:(id)arg2;
- (void)shouldReloadCell:(id)arg0 indexPath:(id)arg1;
- (void)keyboardWillShow:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1 indexPath:(id)arg2;
- (void)keyboardWillShowWithAdditionalAnimation:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1 indexPath:(id)arg2;
- (void)keyboardDidShow:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1 indexPath:(id)arg2;
- (void)keyboardWillChangeFrame:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1;
- (void)keyboardWillChangeFrameWithAdditionalAnimation:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1;
- (void)keyboardDidChangeFrame:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1;
- (void)keyboardWillHide:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1;
- (void)keyboardWillHideWithAdditionalAnimation:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1;
- (void)keyboardDidHide:(struct CGSize { double x0; double x1; })arg0 cell:(id)arg1;
- (void)hideLine:(BOOL)arg0;
- (void)configVideoImage:(id)arg0;
- (id)dislikeBottomView;
- (void)changeBottomGradientViewStatus;
- (void)changeTopGradientViewStatus;
- (void)changeCellStatus:(BOOL)arg0 collectionView:(id)arg1 indexPath:(id)arg2;
- (void)changeBottomViewStatus;
- (void)setLastKeyboardSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })lastKeyboardSize;
- (id)topVideoInfoView;
- (void)didClickSubmitButton;
- (id)initWithData:(id)arg0 model:(id)arg1 trackExtra:(id)arg2;
- (void)setTopVideoInfoView:(id)arg0;
- (void)setDislikeBottomView:(id)arg0;
- (void)stopLoading;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1;
- (void)setModel:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (id)dimensions;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (void)startLoading;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)model;
- (void)setContainerView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalFrame;
- (void)updateWithData:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setDimensions:(id)arg0;
- (double)viewHeight;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;
- (void)setOriginalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end