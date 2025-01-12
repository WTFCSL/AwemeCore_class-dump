//
//     Generated by private class-dump
//

@class AWENoticeInnerPushMultiAvatarView, UIImageView, AWEButton, UILabel, UIView;
@protocol AWENoticeCommonPushViewDelegate;

@interface AWENoticeCommonPushView : UIView {
    UIView *_contentBaseView;
    UIImageView *_avatarImageView;
    id<AWENoticeCommonPushViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_extTagLabel;
    UILabel *_contentLabel;
    AWENoticeInnerPushMultiAvatarView *_multiAvatarView;
    UIImageView *_noticeTypeImageView;
    UIView *_onlineView;
    AWEButton *_replyButton;
}

@property (weak, nonatomic) id<AWENoticeCommonPushViewDelegate> delegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWENoticeInnerPushMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UIImageView *noticeTypeImageView;
@property (retain, nonatomic) UIView *onlineView;
@property (retain, nonatomic) AWEButton *replyButton;
@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIImageView *avatarImageView;

- (void)setExtTagLabel:(id)arg0;
- (id)extTagLabel;
- (id)contentBaseView;
- (void)setContentBaseView:(id)arg0;
- (void)__addSubviews;
- (id)multiAvatarView;
- (void)setMultiAvatarView:(id)arg0;
- (void)p_updateConsecutiveChatStatus;
- (void)updatePushView;
- (void)setOnlineView:(id)arg0;
- (id)onlineView;
- (void)__replyButtonClick:(id)arg0;
- (void)setNoticeTypeImageView:(id)arg0;
- (id)noticeTypeImageView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithDelegate:(id)arg0;
- (id)titleLabel;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)replyButton;
- (void)setReplyButton:(id)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;

@end
