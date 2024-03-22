//
//     Generated by private class-dump
//

@class UITableView, NSString, UIImageView, UILongPressGestureRecognizer;

@interface AWEECOMIMBaseUserMsgCell : AWEECOMIMBaseMsgCell {
    BOOL _supportResend;
    UIImageView *_avatarImgView;
    UITableView *_cellSuperView;
    UILongPressGestureRecognizer *_containerLongGesture;
    NSString *_userNickName;
}

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILongPressGestureRecognizer *containerLongGesture;
@property (retain, nonatomic) NSString *userNickName;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (nonatomic) BOOL supportResend;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)arg0 withModel:(id)arg1;
+ (struct CGSize { double x0; double x1; })riskTextSizeWithModel:(id)arg0;

- (void)setCellModel:(id)arg0;
- (id)userNickName;
- (void)setUserNickName:(id)arg0;
- (id)avatarImgView;
- (void)setAvatarImgView:(id)arg0;
- (void)didCustomInit;
- (void)didInitSubviewLayouts;
- (void)setContainerLongGesture:(id)arg0;
- (void)onDoubleTap:(id)arg0;
- (void)onClickResend;
- (void)avatarViewViewDidTapAction:(id)arg0;
- (void)bindAvatarAndBubbleViewStyle;
- (void)updateUIWhenMessageStatusDidChanged;
- (id)cellSuperView;
- (void)showIndicatorImageView;
- (void)showIndicatorLabelViewWithIsRead:(BOOL)arg0;
- (void)updateUIForSendFaildedStatus;
- (void)setCellSuperView:(id)arg0;
- (BOOL)supportResend;
- (void)setSupportResend:(BOOL)arg0;
- (id)containerLongGesture;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (void)onLongPress:(id)arg0;

@end