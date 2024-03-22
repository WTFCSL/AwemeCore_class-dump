//
//     Generated by private class-dump
//

@class NSIndexPath;
@protocol LynxCollectionScrollerHolderDelegate;

@interface LynxCollectionScroller : NSObject {
    BOOL _horizontalLayout;
    BOOL _willScrollDown;
    BOOL _willScrollToInvisibleRect;
    BOOL _sticky;
    unsigned long long _scrollPosition;
    double _offset;
    NSIndexPath *_targetIndexPath;
    id /* block */ _completion;
    id<LynxCollectionScrollerHolderDelegate> _delegate;
}

@property (nonatomic) BOOL willScrollDown;
@property (nonatomic) BOOL willScrollToInvisibleRect;
@property (nonatomic) unsigned long long scrollPosition;
@property (nonatomic) double offset;
@property (nonatomic) BOOL sticky;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id<LynxCollectionScrollerHolderDelegate> delegate;
@property (nonatomic) BOOL horizontalLayout;

- (void)stopScroll;
- (void)collectionViewDidEndScrollingAnimation:(id)arg0;
- (void)collectionViewWillBeginDragging:(id)arg0;
- (id)initWithTargetIndexPath:(id)arg0 scrollDown:(BOOL)arg1 scrollToInvisibleRect:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 offset:(double)arg4 sticky:(BOOL)arg5 delegate:(id)arg6 completion:(id /* block */)arg7;
- (void)collectionViewStartScroll:(id)arg0 animated:(BOOL)arg1;
- (struct CGPoint { double x0; double x1; })targetContentOffset:(id)arg0 indexPath:(id)arg1 offset:(double)arg2 sticky:(BOOL)arg3 scrollPosition:(unsigned long long)arg4;
- (void)collectionViewAdjustTargetContentOffsetAtNextRunloop:(id)arg0;
- (BOOL)willScrollToInvisibleRect;
- (BOOL)willScrollDown;
- (void)setWillScrollDown:(BOOL)arg0;
- (void)setWillScrollToInvisibleRect:(BOOL)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setOffset:(double)arg0;
- (void)setHorizontalLayout:(BOOL)arg0;
- (id)targetIndexPath;
- (void)setTargetIndexPath:(id)arg0;
- (double)offset;
- (id)delegate;
- (BOOL)horizontalLayout;
- (unsigned long long)scrollPosition;
- (void)setDelegate:(id)arg0;
- (void)setScrollPosition:(unsigned long long)arg0;
- (BOOL)sticky;
- (void)setSticky:(BOOL)arg0;
- (void)collectionViewDidScroll:(id)arg0;

@end