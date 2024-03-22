//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSString, AWEPOIIMUserMsgFooterView, AWEPOIIMBaseMessageCellViewModelV2, UIImageView, YYLabel, UILabel;

@interface AWEPOIIMBaseMessageTableViewCellV2 : UITableViewCell <AWEPOIIMUserMsgFooterViewDelegate> {
    BOOL _cancelsTouchesInContainerView;
    AWEPOIIMBaseMessageCellViewModelV2 *_viewModel;
    UIStackView *_contentStackView;
    UIView *_messageInfoView;
    UIStackView *_messageInfoStackView;
    UIStackView *_containerStackView;
    UIView *_timeView;
    UIView *_userView;
    UIView *_avatarView;
    UIImageView *_avatarImageView;
    UIStackView *_msgContentContainer;
    UIView *_customContainerView;
    UIView *_textBubbleView;
    YYLabel *_textContentLabel;
    UIView *_footerView;
    UIView *_sharkView;
    UILabel *_timeLabel;
    UILabel *_sharkLabel;
    UILabel *_userNameLabel;
    UILabel *_userTagLabel;
    AWEPOIIMUserMsgFooterView *_userFooterView;
    UILabel *_robotTransLabel;
    struct CGSize { double width; double height; } _containerSize;
}

@property (retain, nonatomic) AWEPOIIMBaseMessageCellViewModelV2 *viewModel;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIView *messageInfoView;
@property (retain, nonatomic) UIStackView *messageInfoStackView;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIView *timeView;
@property (retain, nonatomic) UIView *userView;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *msgContentContainer;
@property (retain, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIView *textBubbleView;
@property (retain, nonatomic) YYLabel *textContentLabel;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *sharkView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *sharkLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *userTagLabel;
@property (retain, nonatomic) AWEPOIIMUserMsgFooterView *userFooterView;
@property (retain, nonatomic) UILabel *robotTransLabel;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) BOOL cancelsTouchesInContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithViewModel:(id)arg0;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (void)setupContainerView;
- (id)sharkView;
- (void)setSharkView:(id)arg0;
- (id)textBubbleView;
- (id)msgContentContainer;
- (void)addContainerGestures;
- (id)messageInfoView;
- (id)messageInfoStackView;
- (id)userView;
- (id)textContentLabel;
- (id)userTagLabel;
- (id)sharkLabel;
- (id)userFooterView;
- (id)robotTransLabel;
- (void)viewModelBind;
- (void)updateByRecall:(id)arg0;
- (void)handleContainerLongPressGesture:(id)arg0;
- (void)handleContainerTapGesture:(id)arg0;
- (BOOL)cancelsTouchesInContainerView;
- (void)avatarImageViewDidTapped:(id)arg0;
- (void)robotTransLabelDidTapped;
- (double)textLabelContentWidth;
- (void)footerViewDidTappedWithCurrentStatus:(unsigned long long)arg0;
- (void)bindReusableWithBindingObserver:(id)arg0 handler:(id /* block */)arg1;
- (void)updateImageView:(id)arg0 imageURL:(id)arg1;
- (void)setCancelsTouchesInContainerView:(BOOL)arg0;
- (void)setMessageInfoView:(id)arg0;
- (void)setMessageInfoStackView:(id)arg0;
- (void)setUserView:(id)arg0;
- (void)setMsgContentContainer:(id)arg0;
- (void)setTextBubbleView:(id)arg0;
- (void)setTextContentLabel:(id)arg0;
- (void)setSharkLabel:(id)arg0;
- (void)setUserTagLabel:(id)arg0;
- (void)setUserFooterView:(id)arg0;
- (void)setRobotTransLabel:(id)arg0;
- (id)timeView;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)footerView;
- (id)avatarView;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)setTimeView:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (id)viewModel;
- (id)timeLabel;
- (id)customContainerView;
- (void)setCustomContainerView:(id)arg0;
- (void)setupView;
- (id)contentStackView;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setContentStackView:(id)arg0;
- (id)containerStackView;
- (void)setContainerStackView:(id)arg0;

@end