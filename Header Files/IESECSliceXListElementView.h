//
//     Generated by private class-dump
//

@class UIView, NSString, IESECSliceXFlex, IESECSliceXElementViewContext, NSValue, IESECSliceXBaseCollectionView, NSMutableArray, IESECSliceXElement;
@protocol IESECSliceXListElementDelegate;

@interface IESECSliceXListElementView : IESECSliceXBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESECSliceXFlexObserver, IESECSliceXElementView> {
    BOOL _needRecordContentOffset;
    id<IESECSliceXListElementDelegate> _listDelegate;
    IESECSliceXBaseCollectionView *_collectionView;
    NSValue *_savedContentOffset;
    IESECSliceXElement *_element;
    NSMutableArray *_elementViews;
    UIView *_bgView;
    IESECSliceXElementViewContext *_context;
}

@property (retain, nonatomic) IESECSliceXBaseCollectionView *collectionView;
@property (retain, nonatomic) NSValue *savedContentOffset;
@property (nonatomic) BOOL needRecordContentOffset;
@property (retain, nonatomic) IESECSliceXElement *element;
@property (retain, nonatomic) NSMutableArray *elementViews;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) IESECSliceXElementViewContext *context;
@property (weak, nonatomic) id<IESECSliceXListElementDelegate> listDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IESECSliceXFlex *flex;

+ (void)initialize;

- (void)setSavedContentOffset:(id)arg0;
- (id)savedContentOffset;
- (id)elementViews;
- (void)setupElementView;
- (void)flexDidLayout:(id)arg0;
- (BOOL)updateWithSliceXElement:(id)arg0 error:(id *)arg1;
- (void)setCollectionViewBounces:(BOOL)arg0;
- (void)insertSubviewToCollectionView:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)setElementViews:(id)arg0;
- (BOOL)needRecordContentOffset;
- (void)setNeedRecordContentOffset:(BOOL)arg0;
- (id)visibleCells;
- (id)initWithContext:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setElement:(id)arg0;
- (void)setContext:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)element;
- (void)scrollViewDidScroll:(id)arg0;
- (id)context;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)indexPathForCell:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)listDelegate;
- (void)setListDelegate:(id)arg0;

@end
