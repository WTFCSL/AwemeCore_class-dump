//
//     Generated by private class-dump
//

@class UIImageView, UIImage, UIView, UILabel, NSMutableArray;

@interface IESLiveInviteFriendTableHeaderView : UITableViewHeaderFooterView {
    UIImageView *_oneFriendBubbleView;
    UIImageView *_twoFriendBubbleView;
    UIImage *_secondFriendAvatar;
    UIView *_labelView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSMutableArray *_friendList;
}

@property (retain, nonatomic) UIImageView *oneFriendBubbleView;
@property (retain, nonatomic) UIImageView *twoFriendBubbleView;
@property (retain, nonatomic) UIImage *secondFriendAvatar;
@property (retain, nonatomic) UIView *labelView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSMutableArray *friendList;

- (id)friendList;
- (void)setFriendList:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 friendList:(id)arg1;
- (id)twoFriendBubbleView;
- (id)oneFriendBubbleView;
- (void)setOneFriendBubbleView:(id)arg0;
- (void)setTwoFriendBubbleView:(id)arg0;
- (id)secondFriendAvatar;
- (void)setSecondFriendAvatar:(id)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)labelView;
- (void)setTitleLabel:(id)arg0;
- (void)setLabelView:(id)arg0;
- (void)setupView;

@end