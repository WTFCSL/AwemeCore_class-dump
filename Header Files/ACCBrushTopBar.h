//
//     Generated by private class-dump
//

@class UILongPressGestureRecognizer, NSArray, UICollectionView, UIButton;
@protocol ACCBrushTopBarDelegate;

@interface ACCBrushTopBar : DVEBaseBrushTopBar {
    BOOL _finishedLoadBrushes;
    UICollectionView *_brushListView;
    UIButton *_undoButton;
    id<ACCBrushTopBarDelegate> _delegate;
    double _longPressTime;
    UILongPressGestureRecognizer *_longpressGesture;
    NSArray *_assetImages;
}

@property (retain, nonatomic) UIButton *undoButton;
@property (nonatomic) double longPressTime;
@property (retain, nonatomic) UILongPressGestureRecognizer *longpressGesture;
@property (retain, nonatomic) NSArray *assetImages;
@property (weak, nonatomic) id<ACCBrushTopBarDelegate> delegate;
@property (nonatomic) BOOL finishedLoadBrushes;

- (void)setBrushListView:(id)arg0;
- (void)didClickUndo;
- (id)brushListView;
- (void)didClickedDone;
- (void)setFinishedLoadBrushes:(BOOL)arg0;
- (BOOL)finishedLoadBrushes;
- (void)didLongPressUndo;
- (id)assetImages;
- (id)brushValuesName;
- (double)longPressTime;
- (void)setLongPressTime:(double)arg0;
- (id)longpressGesture;
- (void)setLongpressGesture:(id)arg0;
- (void)setAssetImages:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)undoButton;
- (void)setUndoButton:(id)arg0;

@end
