//
//     Generated by private class-dump
//

@class NSString;

@interface BDXPagerListContainerCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    BOOL _categoryNestPagingEnabled;
    BOOL _horizonScrollEnable;
    long long _direction;
}

@property (nonatomic, getter=isCategoryNestPagingEnabled) BOOL categoryNestPagingEnabled;
@property (nonatomic) BOOL horizonScrollEnable;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHorizonScrollEnable:(BOOL)arg0;
- (BOOL)horizonScrollEnable;
- (BOOL)isCategoryNestPagingEnabled;
- (void)setCategoryNestPagingEnabled:(BOOL)arg0;
- (long long)direction;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setDirection:(long long)arg0;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg0;
- (long long)indexOfAccessibilityElement:(id)arg0;

@end
