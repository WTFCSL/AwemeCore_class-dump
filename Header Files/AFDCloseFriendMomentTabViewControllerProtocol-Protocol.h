//
//     Generated by private class-dump
//

@class NSString, AWEUserModel, UICollectionView;
@protocol AWEUserProfileTabVCDelegate;

@protocol AFDCloseFriendMomentTabViewControllerProtocol <AWEUserProfileTabBaseMethod>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL fromHomePage;
@property (nonatomic) BOOL tabbarHidden;

- (BOOL)fromHomePage;
- (struct CGPoint { double x0; double x1; })getContentOffset;
- (void)setFromHomePage:(BOOL)arg0;
- (BOOL)tabbarHidden;
- (void)setTabbarHidden:(BOOL)arg0;
- (void)setUser:(id)arg0;
- (id)userID;
- (id)user;
- (id)collectionView;
- (void)setUserID:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
