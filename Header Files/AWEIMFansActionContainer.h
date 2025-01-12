//
//     Generated by private class-dump
//

@class AWENoticeFollowButton, NSDictionary, UIView, UIButton;

@interface AWEIMFansActionContainer : AWEIMFansBaseContainer {
    BOOL _replyFriendIMShowTracked;
    UIView *_parentView;
    AWENoticeFollowButton *_followBtn;
    UIButton *_moreBtn;
    NSDictionary *_settingsTitleDic;
}

@property (retain, nonatomic) AWENoticeFollowButton *followBtn;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) NSDictionary *settingsTitleDic;
@property (nonatomic) BOOL replyFriendIMShowTracked;
@property (retain, nonatomic) UIView *parentView;

- (void)setMoreBtn:(id)arg0;
- (id)moreBtn;
- (void)configWithViewModel:(id)arg0;
- (void)followBtnClicked:(id)arg0;
- (id)followBtn;
- (void)setFollowBtn:(id)arg0;
- (BOOL)replyFriendIMShowTracked;
- (void)setReplyFriendIMShowTracked:(BOOL)arg0;
- (void)updateFollowBtnWithType:(unsigned long long)arg0;
- (id)settingsTitleDic;
- (void)moreBtnDidClicked:(id)arg0;
- (void)setSettingsTitleDic:(id)arg0;
- (void).cxx_destruct;
- (void)setupViews;
- (id)parentView;
- (void)setParentView:(id)arg0;

@end
