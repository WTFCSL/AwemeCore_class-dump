//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, UICollectionView;
@protocol AWECollectionViewItemDisplayDelegateTarget;

@interface AWECollectionViewItemDisplayDelegate : NSProxy <UICollectionViewDelegate> {
    BOOL _isDisplayChanged;
    struct __CFRunLoopObserver { } *_sleepObserver;
    UICollectionView *_collectionView;
    id<AWECollectionViewItemDisplayDelegateTarget> _target;
    NSMutableArray *_visibleItems;
}

@property (nonatomic) struct __CFRunLoopObserver { } *sleepObserver;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWECollectionViewItemDisplayDelegateTarget> target;
@property (retain, nonatomic) NSMutableArray *visibleItems;
@property (nonatomic) BOOL isDisplayChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CFRunLoopObserver { } *)sleepObserver;
- (void)setSleepObserver:(struct __CFRunLoopObserver { } *)arg0;
- (void)p_setupRunloopObserver;
- (void)startObserverIfNeeded;
- (void)setIsDisplayChanged:(BOOL)arg0;
- (BOOL)isDisplayChanged;
- (id)initWithCollectionView:(id)arg0 target:(id)arg1;
- (void)invalidateItems:(id)arg0;
- (BOOL)conformsToProtocol:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setTarget:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)target;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)dealloc;
- (id)visibleItems;
- (void)setVisibleItems:(id)arg0;

@end