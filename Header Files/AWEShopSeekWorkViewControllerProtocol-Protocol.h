//
//     Generated by private class-dump
//

@class NSString, UICollectionView, NSDictionary, AWEUserModel;
@protocol AWEUserProfileTabVCDelegate;

@protocol AWEShopSeekWorkViewControllerProtocol <NSObject>

@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL fromHome;
@property (nonatomic) BOOL isProfileDidAppear;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *searchLogPassback;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *enterPosition;
@property (copy, nonatomic) NSDictionary *logExtraDict;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterPosition;
- (id)searchLogPassback;
- (void)setSearchLogPassback:(id)arg0;
- (BOOL)fromHome;
- (void)setFromHome:(BOOL)arg0;
- (BOOL)isProfileDidAppear;
- (void)setIsProfileDidAppear:(BOOL)arg0;
- (void)setEnterPosition:(id)arg0;
- (id)initWithUserID:(id)arg0 secUserID:(id)arg1 poiId:(id)arg2 targetUser:(id)arg3;
- (void)refreshUserID:(id)arg0 secUserID:(id)arg1 poiId:(id)arg2 targetUser:(id)arg3;
- (void)reloadEmptyPage;
- (void)setUser:(id)arg0;
- (void)setScene:(id)arg0;
- (id)user;
- (id)collectionView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)scene;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;

@end