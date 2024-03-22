//
//     Generated by private class-dump
//

@class IESLiveCountTimer, NSString, UIImageView, CAShapeLayer, UILabel, NSArray, UIButton;

@interface IESLivePKGuestReceiveInvitationPanel : HTSLivePopUpView {
    BOOL _isFromAdmin;
    BOOL _isOverTime;
    id /* block */ _rejectAction;
    id /* block */ _acceptAction;
    UILabel *_titleLabel;
    UIImageView *_avatarImageView;
    CAShapeLayer *_animatedAvatarBorderLayer;
    UILabel *_nameLabel;
    UIButton *_acceptButton;
    UIButton *_declineButton;
    NSString *_nickName;
    NSArray *_imageURLs;
    IESLiveCountTimer *_timer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *animatedAvatarBorderLayer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *declineButton;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) BOOL isFromAdmin;
@property (nonatomic) BOOL isOverTime;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (copy, nonatomic) id /* block */ acceptAction;

- (void)didSetAttachingDIContext;
- (void)startCountDown;
- (id /* block */)acceptAction;
- (void)setRejectAction:(id /* block */)arg0;
- (id /* block */)rejectAction;
- (id)makeAvatarBorderLayer;
- (void)setAnimatedAvatarBorderLayer:(id)arg0;
- (id)animatedAvatarBorderLayer;
- (void)acceptRequest;
- (void)declineRequest;
- (void)startBeating;
- (void)cancelCountDown;
- (void)setIsOverTime:(BOOL)arg0;
- (BOOL)isOverTime;
- (void)setAcceptAction:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 nickName:(id)arg1 imageURLs:(id)arg2 isFromAdmin:(BOOL)arg3;
- (BOOL)isFromAdmin;
- (void)setIsFromAdmin:(BOOL)arg0;
- (id)timer;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTimer:(id)arg0;
- (id)nickName;
- (id)nameLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;
- (id)imageURLs;
- (void)setImageURLs:(id)arg0;
- (id)declineButton;
- (void)setDeclineButton:(id)arg0;
- (void)layoutUI;

@end