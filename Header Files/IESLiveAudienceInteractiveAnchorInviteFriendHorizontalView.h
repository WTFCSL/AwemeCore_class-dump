//
//     Generated by private class-dump
//

@class NSArray, NSString, UICollectionView;

@interface IESLiveAudienceInteractiveAnchorInviteFriendHorizontalView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _moreCellDidShow;
    NSArray *_userList;
    UICollectionView *_friendListView;
    id /* block */ _clickUserBlock;
    id /* block */ _clickMoreBlock;
    id /* block */ _userCellDidShowBlock;
    id /* block */ _moreCellDidShowBlock;
}

@property (copy, nonatomic) NSArray *userList;
@property (retain, nonatomic) UICollectionView *friendListView;
@property (copy, nonatomic) id /* block */ clickUserBlock;
@property (copy, nonatomic) id /* block */ clickMoreBlock;
@property (copy, nonatomic) id /* block */ userCellDidShowBlock;
@property (copy, nonatomic) id /* block */ moreCellDidShowBlock;
@property (nonatomic) BOOL moreCellDidShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUserList:(id)arg0;
- (id /* block */)clickMoreBlock;
- (void)setClickMoreBlock:(id /* block */)arg0;
- (id)friendListView;
- (void)setClickUserBlock:(id /* block */)arg0;
- (void)setUserCellDidShowBlock:(id /* block */)arg0;
- (void)setMoreCellDidShowBlock:(id /* block */)arg0;
- (id /* block */)clickUserBlock;
- (id /* block */)userCellDidShowBlock;
- (BOOL)moreCellDidShow;
- (id /* block */)moreCellDidShowBlock;
- (void)setMoreCellDidShow:(BOOL)arg0;
- (void)updateWithUserList:(id)arg0 clickUserBlock:(id /* block */)arg1 clickMoreBlock:(id /* block */)arg2 userCellDidShowBlock:(id /* block */)arg3 moreCellDidShowBlock:(id /* block */)arg4;
- (void)setFriendListView:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)userList;
- (void)setupUI;

@end