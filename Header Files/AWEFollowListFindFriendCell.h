//
//     Generated by private class-dump
//

@class UIView;

@interface AWEFollowListFindFriendCell : UICollectionViewCell {
    BOOL _isMine;
    UIView *_findFriendView;
}

@property (nonatomic) BOOL isMine;
@property (retain, nonatomic) UIView *findFriendView;

- (id)findFriendView;
- (void)setFindFriendView:(id)arg0;
- (id)footerForFindFriend:(id)arg0 isMine:(BOOL)arg1;
- (void)findFriendsButtonTapped;
- (id)enterMethodForRecommend;
- (void)configCell:(id)arg0 isMine:(BOOL)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isMine;
- (void)setIsMine:(BOOL)arg0;

@end
