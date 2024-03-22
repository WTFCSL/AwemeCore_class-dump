//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, IESECListKitStickCollectionViewDelegateForwarder;

@interface IESECListKitStickCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic) double ieseclistkit_stickOffsetY;
@property (retain, nonatomic) IESECListKitStickCollectionViewDelegateForwarder *ieseclistkit_delegateForwarder;
@property (retain, nonatomic) NSMutableArray *ieseclistkit_observedViews;
@property (nonatomic) BOOL ieseclistkit_isObserving;
@property (nonatomic) BOOL ieseclistkit_lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObservedViews;
- (void)addObserverToView:(id)arg0;
- (void)removeObserverFromView:(id)arg0;
- (void)scrollView:(id)arg0 setContentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (void)addObservedView:(id)arg0;
- (void)setIeseclistkit_stickOffsetY:(double)arg0;
- (double)ieseclistkit_stickOffsetY;
- (id)ieseclistkit_delegateForwarder;
- (void)setIeseclistkit_isObserving:(BOOL)arg0;
- (id)ieseclistkit_observedViews;
- (void)setIeseclistkit_lock:(BOOL)arg0;
- (BOOL)ieseclistkit_isObserving;
- (BOOL)ieseclistkit_lock;
- (void)ieseclistkit_scrollViewDidEndScrolling;
- (void)setIeseclistkit_delegateForwarder:(id)arg0;
- (void)setIeseclistkit_observedViews:(id)arg0;
- (void)initialize;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (BOOL)_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg0;

@end