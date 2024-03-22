//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, NSMutableDictionary, UICollectionView, UILabel, UITapGestureRecognizer, IESECommerceLightTabView, IESECHighlightButton, IESECPreviewItem, UIView, NSMutableArray, IESECInsetsLabel, UIScrollView, UIViewController, UITextView, IESECMediaPreviewSpecsView, IESECImagePreviewInteractiveTransition, NSArray, NSString, UIImageView;
@protocol IESECMediaPreviewDelegate;

@interface IESECMediaPreviewViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IESECImagePreviewTargetProtocol, IESECVideoPreviewCellDelegate, IESECMediaPreviewUpdateMessage> {
    NSMutableDictionary *_trackOnceMap;
    BOOL _showIndex;
    BOOL _showTitle;
    BOOL _showTab;
    BOOL _isHidenCloseButton;
    BOOL _isCoveredByOtherController;
    unsigned long long _index;
    double _imageContainerAlpha;
    id<IESECMediaPreviewDelegate> _delegate;
    UIPanGestureRecognizer *_panToDismiss;
    id /* block */ _viewWillBeCovered;
    IESECImagePreviewInteractiveTransition *_transition;
    IESECPreviewItem *_curPreviewItem;
    NSArray *_previewItems;
    NSArray *_previewTabItems;
    IESECHighlightButton *_closeButton;
    UICollectionView *_collectionView;
    IESECInsetsLabel *_indexLabel;
    IESECommerceLightTabView *_tabView;
    UITextView *_titleTextView;
    UIView *_titleTextBgView;
    unsigned long long _titleType;
    UIScrollView *_specScrollView;
    UILabel *_titleIndexLabel;
    UILabel *_skuSpecLabel;
    long long _normalCount;
    NSArray *_titles;
    NSMutableArray *_specLabelArray;
    NSMutableArray *_specBgViewArray;
    UITapGestureRecognizer *_tap;
    UIImageView *_findSameEntry;
    unsigned long long _enterFrom;
    UIViewController *_kolVideoDetailVC;
    IESECMediaPreviewSpecsView *_skuSpecsView;
}

@property (retain, nonatomic) NSArray *previewItems;
@property (retain, nonatomic) NSArray *previewTabItems;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) IESECPreviewItem *curPreviewItem;
@property (retain, nonatomic) IESECHighlightButton *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECInsetsLabel *indexLabel;
@property (retain, nonatomic) IESECommerceLightTabView *tabView;
@property (retain, nonatomic) UITextView *titleTextView;
@property (retain, nonatomic) UIView *titleTextBgView;
@property (nonatomic) unsigned long long titleType;
@property (retain, nonatomic) UIScrollView *specScrollView;
@property (retain, nonatomic) UILabel *titleIndexLabel;
@property (retain, nonatomic) UILabel *skuSpecLabel;
@property (nonatomic) long long normalCount;
@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSMutableArray *specLabelArray;
@property (retain, nonatomic) NSMutableArray *specBgViewArray;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) BOOL showIndex;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL showTab;
@property (nonatomic) BOOL isHidenCloseButton;
@property (retain, nonatomic) UIImageView *findSameEntry;
@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) BOOL isCoveredByOtherController;
@property (retain, nonatomic) UIViewController *kolVideoDetailVC;
@property (retain, nonatomic) IESECMediaPreviewSpecsView *skuSpecsView;
@property (readonly, nonatomic) UIView *currentImageView;
@property (nonatomic) double imageContainerAlpha;
@property (weak, nonatomic) id<IESECMediaPreviewDelegate> delegate;
@property (weak, nonatomic) UIPanGestureRecognizer *panToDismiss;
@property (copy, nonatomic) id /* block */ viewWillBeCovered;
@property (retain, nonatomic) IESECImagePreviewInteractiveTransition *transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (void)scrollToItemAtIndex:(unsigned long long)arg0;
- (void)setTabView:(id)arg0;
- (BOOL)showIndex;
- (void)setShowIndex:(BOOL)arg0;
- (void)setIndexLabel:(id)arg0;
- (void)unregisterMessages;
- (void)enableScroll:(BOOL)arg0;
- (BOOL)showTab;
- (void)setShowTab:(BOOL)arg0;
- (void)setCurPreviewItem:(id)arg0;
- (id)curPreviewItem;
- (void)progressIsSliding:(BOOL)arg0;
- (void)playerMuteStateDidChanged:(BOOL)arg0;
- (void)playerDidChangePlaybackStateWithAction:(unsigned long long)arg0;
- (void)setIsHidenCloseButton:(BOOL)arg0;
- (id)panToDismiss;
- (void)setPanToDismiss:(id)arg0;
- (double)imageContainerAlpha;
- (void)setImageContainerAlpha:(double)arg0;
- (void)resetVideoWrapperVC:(BOOL)arg0;
- (id)initWithDetailMediaRequest:(id)arg0;
- (void)registerInitMessages;
- (void)setPreviewTabItems:(id)arg0;
- (void)previewKOLVideoDetailUpdatedWithDataController:(id)arg0;
- (void)closeButtonDidTap;
- (id)previewTabItems;
- (BOOL)isHidenCloseButton;
- (void)reloadDataWithMediaRequest:(id)arg0;
- (void)updateIndexLabelWithIndex:(long long)arg0;
- (void)updateTitleLabelWithIndex:(long long)arg0;
- (void)updateSkuSpecLabelWithIndex:(long long)arg0;
- (id)skuSpecsView;
- (void)updateFindSameLabelWithIndex:(long long)arg0;
- (id /* block */)viewWillBeCovered;
- (BOOL)isCoveredByOtherController;
- (void)setIsCoveredByOtherController:(BOOL)arg0;
- (void)resetVideoToOriginVC;
- (id)titleIndexLabel;
- (id)findSameEntry;
- (id)specScrollView;
- (id)titleTextBgView;
- (id)kolVideoDetailVC;
- (void)setKolVideoDetailVC:(id)arg0;
- (void)kolVideoPreloadWithIndexPath:(id)arg0;
- (void)userDidTap;
- (void)setupNavView;
- (void)setupIndexLabel;
- (void)setupFindSameEntry;
- (void)setupNewSKUSpecs;
- (void)setupSpecScrollView;
- (void)setupSKUSpecTitle;
- (void)tabClickToIndex:(long long)arg0;
- (void)setSkuSpecsView:(id)arg0;
- (void)setSkuSpecLabel:(id)arg0;
- (id)specLabelArray;
- (id)specBgViewArray;
- (void)setTitleTextBgView:(id)arg0;
- (void)setTitleIndexLabel:(id)arg0;
- (void)findSameGoods;
- (long long)coverPreviewIndexToTabIndex:(long long)arg0;
- (id)skuSpecLabel;
- (void)updateSpecLabelWithIndex:(long long)arg0 rate:(double)arg1;
- (void)trackWithEventName:(id)arg0 andParams:(id)arg1;
- (void)videoTrackWithEventName:(id)arg0 andParams:(id)arg1;
- (void)hideCloseButton:(BOOL)arg0;
- (void)setViewWillBeCovered:(id /* block */)arg0;
- (void)setSpecScrollView:(id)arg0;
- (void)setNormalCount:(long long)arg0;
- (void)setSpecLabelArray:(id)arg0;
- (void)setSpecBgViewArray:(id)arg0;
- (void)setFindSameEntry:(id)arg0;
- (void)setTransition:(id)arg0;
- (BOOL)showTitle;
- (BOOL)shouldAutorotate;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setIndex:(unsigned long long)arg0;
- (void)dismiss;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)transition;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (unsigned long long)titleType;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (unsigned long long)index;
- (id)indexLabel;
- (void)setTitleType:(unsigned long long)arg0;
- (id)currentImageView;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setShowTitle:(BOOL)arg0;
- (id)titles;
- (void)setTitles:(id)arg0;
- (void)setupCollectionView;
- (void)setupUI;
- (void)setupTitleLabel;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setPreviewItems:(id)arg0;
- (id)previewItems;
- (id)tap;
- (void)setTap:(id)arg0;
- (long long)normalCount;
- (id)tabView;

@end
