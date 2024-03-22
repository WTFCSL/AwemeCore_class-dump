//
//     Generated by private class-dump
//

@class UIImageView, IESLiveNativeAppAudienceShelfIMChatViewModel, UILabel, UIView, UIButton;

@interface IESLiveNativeAppAudienceShelfIMChatView : UIView {
    UIView *_edgeView;
    UIImageView *_avatarImage;
    UIImageView *_identiImage;
    UILabel *_nickName;
    UILabel *_descLabel;
    UIButton *_enterButton;
    IESLiveNativeAppAudienceShelfIMChatViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) UIImageView *identiImage;
@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) IESLiveNativeAppAudienceShelfIMChatViewModel *viewModel;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)enterButton;
- (void)setEnterButton:(id)arg0;
- (id)edgeView;
- (void)setEdgeView:(id)arg0;
- (id)identiImage;
- (void)enterButtonDidClick:(id)arg0;
- (void)setIdentiImage:(id)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)nickName;
- (id)viewModel;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (void)updateWithModel:(id)arg0;
- (void)setUpUI;

@end