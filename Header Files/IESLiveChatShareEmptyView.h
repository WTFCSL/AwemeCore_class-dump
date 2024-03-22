//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIImageView, UIButton, UITableView, NSMutableArray, IESLiveInviteFriendTableHeaderView, UILabel;
@protocol IESLiveIMService;

@interface IESLiveChatShareEmptyView : UIView <UITableViewDelegate, UITableViewDataSource> {
    BOOL _noneUsersState;
    UIImageView *_noneUsersIcon;
    UIView *_labelView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_inviteButton;
    UITableView *_friendsTableView;
    IESLiveInviteFriendTableHeaderView *_tableHeaderView;
    NSMutableArray *_avatarFriendList;
    NSMutableArray *_selectedFriendArray;
    NSMutableArray *_recommendList;
    NSArray *_recommendSection;
    NSMutableArray *_sections;
    id<IESLiveIMService> _imService;
}

@property (nonatomic) BOOL noneUsersState;
@property (retain, nonatomic) UIImageView *noneUsersIcon;
@property (retain, nonatomic) UIView *labelView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UITableView *friendsTableView;
@property (retain, nonatomic) IESLiveInviteFriendTableHeaderView *tableHeaderView;
@property (retain, nonatomic) NSMutableArray *avatarFriendList;
@property (retain, nonatomic) NSMutableArray *selectedFriendArray;
@property (retain, nonatomic) NSMutableArray *recommendList;
@property (retain, nonatomic) NSArray *recommendSection;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) id<IESLiveIMService> imService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (void)refreshView;
- (id)recommendList;
- (void)setRecommendList:(id)arg0;
- (void)clearStatus;
- (id)inviteButton;
- (void)setInviteButton:(id)arg0;
- (void)setSelectedFriendArray:(id)arg0;
- (id)selectedFriendArray;
- (void)followUser:(id)arg0;
- (id)recommendDisplayRecommendReasonWithShareModel:(id)arg0;
- (id)recommendSection;
- (void)setRecommendSection:(id)arg0;
- (void)refreshUserList;
- (void)filterFriendListGroupChat;
- (void)p_addSelectedFriend:(id)arg0;
- (void)setupNoneFriendView;
- (void)setAvatarFriendList:(id)arg0;
- (id)avatarFriendList;
- (id)friendsTableView;
- (void)setNoneUsersState:(BOOL)arg0;
- (void)setNoneUsersIcon:(id)arg0;
- (void)setFriendsTableView:(id)arg0;
- (void)clearSubviewsData;
- (id)noneUsersIcon;
- (void)inviteFriendsAction:(id)arg0;
- (void)longPressInvite;
- (BOOL)noneUsersState;
- (id)sections;
- (void)setSubtitleLabel:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setSections:(id)arg0;
- (id)labelView;
- (void)setTitleLabel:(id)arg0;
- (id)tableHeaderView;
- (void)setLabelView:(id)arg0;
- (void)setTableHeaderView:(id)arg0;
- (void)setupView;
- (void)setupViews;
- (id)imService;
- (void)setImService:(id)arg0;

@end
