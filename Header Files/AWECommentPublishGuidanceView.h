//
//     Generated by private class-dump
//

@class NSArray;

@interface AWECommentPublishGuidanceView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, AWECommentPublishGuidanceViewProtocol> {
    void /* unknown type, empty encoding */ miniEmoticonItemSelected;
    void /* unknown type, empty encoding */ dataList;
    void /* unknown type, empty encoding */ colorMode;
    void /* unknown type, empty encoding */ recommendReplys;
    void /* unknown type, empty encoding */ popover;
    void /* unknown type, empty encoding */ shouldShowPopover;
    void /* unknown type, empty encoding */ popoverDidShow;
    void /* unknown type, empty encoding */ cellWillDisplay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

@property (nonatomic, readonly) BOOL shouldShowReplys;
@property (nonatomic, copy) id /* block */ miniEmoticonItemSelected;
@property (nonatomic, copy) NSArray *recommendReplys;
@property (nonatomic, copy) id /* block */ popoverDidShow;
@property (nonatomic, copy) id /* block */ cellWillDisplay;

- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (BOOL)shouldShowReplys;
- (id /* block */)miniEmoticonItemSelected;
- (void)setMiniEmoticonItemSelected:(id /* block */)arg0;
- (id)recommendReplys;
- (void)setRecommendReplys:(id)arg0;
- (id /* block */)popoverDidShow;
- (void)setPopoverDidShow:(id /* block */)arg0;
- (id /* block */)cellWillDisplay;
- (void)setCellWillDisplay:(id /* block */)arg0;
- (void)setContentOffsetZero:(BOOL)arg0;
- (void)reloadEmoticonOrder;
- (id)currentEmoticonsString;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end
