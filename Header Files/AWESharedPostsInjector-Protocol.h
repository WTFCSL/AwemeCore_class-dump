//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWEPrivatePostsViewModel;

@protocol AWESharedPostsInjector

@property (nonatomic, weak) id<AWEPrivatePostsViewModel> privatePostsViewModel;
@property (nonatomic, weak) UIViewController *controller;

- (id)privatePostsViewModel;
- (void)setPrivatePostsViewModel:(id)arg0;
- (void)registerClassForCell:(id)arg0;
- (void)registerClassForCell:(id)arg0;
- (void)setController:(id)arg0;
- (BOOL)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)controller;

@end