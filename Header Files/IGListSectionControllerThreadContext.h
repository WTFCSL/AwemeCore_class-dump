//
//     Generated by private class-dump
//

@class UIViewController;
@protocol IGListCollectionContext;

@interface IGListSectionControllerThreadContext : NSObject {
    UIViewController *_viewController;
    id<IGListCollectionContext> _collectionContext;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<IGListCollectionContext> collectionContext;

- (id)collectionContext;
- (void)setCollectionContext:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;

@end