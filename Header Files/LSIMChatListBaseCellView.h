//
//     Generated by private class-dump
//

@class LSIMChatListBaseCellVM, UIImageView, UIView, UILabel, LSIMUnreadDotView;

@interface LSIMChatListBaseCellView : LSListCellView {
    UIView *_holderView;
    UIImageView *_avatarView;
    UILabel *_shopNameLabel;
    UILabel *_messageLabel;
    UILabel *_timeLabel;
    LSIMUnreadDotView *_unreadView;
    UIImageView *_warningIcon;
    UIView *_separateView;
    UIImageView *_littleAvatarIcon;
    UILabel *_tagLabel;
}

@property (retain, nonatomic) LSIMChatListBaseCellVM *cellVM;
@property (retain, nonatomic) UIView *holderView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) LSIMUnreadDotView *unreadView;
@property (retain, nonatomic) UIImageView *warningIcon;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIImageView *littleAvatarIcon;
@property (retain, nonatomic) UILabel *tagLabel;

+ (struct CGSize { double x0; double x1; })cellSizeWithCellVM:(id)arg0 listSize:(struct CGSize { double x0; double x1; })arg1;

- (void)configWithViewModel:(id)arg0;
- (void)setSeparateView:(id)arg0;
- (id)separateView;
- (id)holderView;
- (void)setHolderView:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)p_addSubviews;
- (id)shopNameLabel;
- (void)setShopNameLabel:(id)arg0;
- (void)updateUnreadCount:(unsigned long long)arg0;
- (id)warningIcon;
- (id)littleAvatarIcon;
- (id)unreadView;
- (void)setUnreadView:(id)arg0;
- (void)setWarningIcon:(id)arg0;
- (void)setLittleAvatarIcon:(id)arg0;
- (void)setCellVM:(id)arg0;
- (void)updateShopSubview;
- (void)configPlatformServiceWithViewModel:(id)arg0;
- (void)updatePlatformServiceConversationSubview;
- (void)updateWarningIconWithFailed:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setMessageLabel:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (id)messageLabel;
- (id)timeLabel;

@end
