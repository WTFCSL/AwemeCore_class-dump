//
//     Generated by private class-dump
//

@class NSString, NSArray, BlackoutView, AWESearchPhotoSelectionHandleView, UIImageView, NSMutableArray, AWESearchDotAnimationView, UIVisualEffectView, UIScrollView;
@protocol AWESearchPhotoSearchBackgroundViewDelegate;

@interface AWESearchPhotoSearchBackgroundView : UIView <AWESearchPhotoSelectionHandleViewDelegate> {
    BOOL _hasDragPanel;
    BOOL _optimiseEnable;
    BOOL _onlyShowImage;
    UIScrollView *_scrollView;
    id<AWESearchPhotoSearchBackgroundViewDelegate> _delegate;
    UIVisualEffectView *_imageEffectView;
    UIImageView *_imageView;
    BlackoutView *_alternateBG;
    NSArray *_rawDetections;
    NSMutableArray *_selectionHandleViewArray;
    NSMutableArray *_selectionDotViewArray;
    NSArray *_selectionRectArray;
    unsigned long long _selectedIndex;
    AWESearchPhotoSelectionHandleView *_customHandleView;
    AWESearchDotAnimationView *_customDotView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) BlackoutView *alternateBG;
@property (retain, nonatomic) NSArray *rawDetections;
@property (readonly, nonatomic) AWESearchPhotoSelectionHandleView *activeHandleView;
@property (retain, nonatomic) NSMutableArray *selectionHandleViewArray;
@property (retain, nonatomic) NSMutableArray *selectionDotViewArray;
@property (retain, nonatomic) NSArray *selectionRectArray;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) AWESearchPhotoSelectionHandleView *customHandleView;
@property (retain, nonatomic) AWESearchDotAnimationView *customDotView;
@property (nonatomic) BOOL onlyShowImage;
@property (nonatomic) BOOL hasDragPanel;
@property (nonatomic) BOOL optimiseEnable;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<AWESearchPhotoSearchBackgroundViewDelegate> delegate;
@property (retain, nonatomic) UIVisualEffectView *imageEffectView;
@property (readonly, nonatomic) NSArray *tabViewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDotView;
- (void)configUI;
- (void)configUIWithProductImage:(id)arg0;
- (void)setOnlyShowImage:(BOOL)arg0;
- (void)configBackgroundImageIsBlock:(BOOL)arg0;
- (id)alternateBG;
- (id)imageEffectView;
- (BOOL)onlyShowImage;
- (BOOL)optimiseEnable;
- (id)rawDetections;
- (void)updateDetectionArray:(id)arg0 withSelectionIndex:(unsigned long long)arg1;
- (void)updateSubviewFrame;
- (id)handleViewAtIndex:(unsigned long long)arg0;
- (id)selectionHandleViewArray;
- (id)customHandleView;
- (id)selectionDotViewArray;
- (id)customDotView;
- (id)convertSelectionRectToDetctionStr:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertDetctionStringToDetctionRect:(id)arg0;
- (void)updateSelectionIndex:(unsigned long long)arg0;
- (id)activeHandleView;
- (void)setCustomHandleView:(id)arg0;
- (void)showDotView:(id)arg0 isShow:(BOOL)arg1;
- (id)selectionRectArray;
- (void)setCustomDotView:(id)arg0;
- (void)updateMaskViewWithHanleViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRawDetections:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertSelectionRectWithDetectionString:(id)arg0;
- (void)setSelectionRectArray:(id)arg0;
- (id)dotViewAtIndex:(unsigned long long)arg0;
- (void)closeSelectionIndex:(unsigned long long)arg0 expandIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)scrollGestureRecognizer;
- (void)handleViewSelectionChanged:(id)arg0;
- (void)handleViewSelectionChangeEnded:(id)arg0;
- (id)initWithProductImage:(id)arg0;
- (id)initShowImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initFlowCaseWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initOnlyShowBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWhiteBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initBlackBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)configOnlyShowWhiteBg;
- (id)tabViewModels;
- (struct CGPoint { double x0; double x1; })convertImageCoordinateToViewPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)createLayerWithPath:(id)arg0;
- (void)showDetectionExpandAnimation:(BOOL)arg0 atIndex:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)hasDragPanel;
- (void)setHasDragPanel:(BOOL)arg0;
- (void)setOptimiseEnable:(BOOL)arg0;
- (void)setImageEffectView:(id)arg0;
- (void)setAlternateBG:(id)arg0;
- (void)setSelectionHandleViewArray:(id)arg0;
- (void)setSelectionDotViewArray:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)arg0;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)scrollView;
- (unsigned long long)selectedIndex;
- (id)detections;
- (void)updateImage:(id)arg0;

@end