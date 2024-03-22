//
//     Generated by private class-dump
//

@class UIButton, LSIMCommonModalViewController, UIImageView, LSIMBizParticipant, UILabel, YYLabel;

@interface LSIMMerchantPersonalDetailModalView : UIView {
    LSIMCommonModalViewController *_modalVC;
    LSIMBizParticipant *_merchantMember;
    id /* block */ _makeConversationBlock;
    UIImageView *_closeImageView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    YYLabel *_merchantTagLabel;
    UIImageView *_shopIconImageView;
    UILabel *_shopNameLabel;
    UIButton *_makeConversationButton;
}

@property (retain, nonatomic) LSIMBizParticipant *merchantMember;
@property (copy, nonatomic) id /* block */ makeConversationBlock;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) YYLabel *merchantTagLabel;
@property (retain, nonatomic) UIImageView *shopIconImageView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UIButton *makeConversationButton;
@property (weak, nonatomic) LSIMCommonModalViewController *modalVC;

+ (long long)modalViewHeight;

- (void)initView;
- (id)shopNameLabel;
- (void)setShopNameLabel:(id)arg0;
- (void)setModalVC:(id)arg0;
- (id)modalVC;
- (id)merchantTagLabel;
- (id)shopIconImageView;
- (void)setMerchantTagLabel:(id)arg0;
- (void)setShopIconImageView:(id)arg0;
- (id)makeConversationButton;
- (id /* block */)makeConversationBlock;
- (id)merchantMember;
- (void)closeImageViewTapped;
- (void)makeConversationButtonTapped;
- (id)initWithMerchantGroupMember:(id)arg0 makeConversationBlock:(id /* block */)arg1;
- (void)setMerchantMember:(id)arg0;
- (void)setMakeConversationBlock:(id /* block */)arg0;
- (void)setMakeConversationButton:(id)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;

@end