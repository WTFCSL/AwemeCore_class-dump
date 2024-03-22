//
//     Generated by private class-dump
//

@class NSString;

@interface BDXPagerListContainerScrollView : UIScrollView <UIGestureRecognizerDelegate> {
    BOOL _categoryNestPagingEnabled;
}

@property (nonatomic, getter=isCategoryNestPagingEnabled) BOOL categoryNestPagingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCategoryNestPagingEnabled;
- (void)setCategoryNestPagingEnabled:(BOOL)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;

@end
