//
//     Generated by private class-dump
//

@class NSString;

@interface AFDCloseFriendsBottomVisitorComponent : AFDCloseFriendsBottomBaseComponent <AFDElementHostLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)host_setData:(id)arg0;
- (void)elementDidLoad;
- (void)elementContainerDidUpdate;
- (id)visitorManager;
- (void)setupBinding;
- (void)setupMomentFeedUI;
- (void)setupFamiliarFeedUI;
- (void)showViewersOrRelationViewIfNeeded;
- (void)setVisitorOrRelationViewAlpha:(double)arg0 fadeInModel:(id)arg1;
- (void)updateViewedView;
- (void)updateFavoriteAnimationView;
- (id)view;

@end