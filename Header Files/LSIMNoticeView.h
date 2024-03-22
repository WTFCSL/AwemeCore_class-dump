//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIScrollView, UIView, LSIMNoticeModel;

@interface LSIMNoticeView : UIView {
    LSIMNoticeModel *_model;
    UIScrollView *_scrollView;
    UIView *_containerView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UIView *_seperatorView;
    UILabel *_contentLabel;
}

@property (retain, nonatomic) LSIMNoticeModel *model;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)initView;
- (id)formatTimeText;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setContainerView:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (id)containerView;
- (id)nameLabel;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)scrollView;
- (id)timeLabel;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg0;

@end
