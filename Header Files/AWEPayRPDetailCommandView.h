//
//     Generated by private class-dump
//

@class UIProgressView, NSString, UIImageView, DUXButton, UILabel, UIView;

@interface AWEPayRPDetailCommandView : UIView {
    BOOL _sendButtonLoading;
    NSString *_commandContent;
    id /* block */ _sendCommandBlock;
    DUXButton *_sendCommandButton;
    UILabel *_commandRedPacketLabel;
    UIView *_commandContentView;
    UIView *_commandTitleContainerView;
    UIImageView *_leftDecorationView;
    UIImageView *_rightDecorationView;
    UILabel *_commandTitleLabel;
    UIImageView *_commandImageView;
    UIProgressView *_commandProgressView;
    UILabel *_commandSendSuccessLabel;
}

@property (retain, nonatomic) DUXButton *sendCommandButton;
@property (retain, nonatomic) UILabel *commandRedPacketLabel;
@property (retain, nonatomic) UIView *commandContentView;
@property (retain, nonatomic) UIView *commandTitleContainerView;
@property (retain, nonatomic) UIImageView *leftDecorationView;
@property (retain, nonatomic) UIImageView *rightDecorationView;
@property (retain, nonatomic) UILabel *commandTitleLabel;
@property (retain, nonatomic) UIImageView *commandImageView;
@property (retain, nonatomic) UIProgressView *commandProgressView;
@property (retain, nonatomic) UILabel *commandSendSuccessLabel;
@property (copy, nonatomic) NSString *commandContent;
@property (copy, nonatomic) id /* block */ sendCommandBlock;
@property (nonatomic) BOOL sendButtonLoading;

- (void)p_setupUI;
- (id)sendCommandButton;
- (id)commandRedPacketLabel;
- (id)commandContentView;
- (id)commandTitleContainerView;
- (id)leftDecorationView;
- (id)rightDecorationView;
- (id)commandTitleLabel;
- (id)commandImageView;
- (id)commandProgressView;
- (id)commandSendSuccessLabel;
- (id /* block */)sendCommandBlock;
- (void)p_sendCommandButtonClicked;
- (void)setCommandContent:(id)arg0;
- (void)setSendButtonLoading:(BOOL)arg0;
- (void)startOpenCommandRedpacketAnimation:(id /* block */)arg0;
- (void)startOpenCommandRedpacketSuccessAnimation:(id /* block */)arg0;
- (void)startOpenCommandRedpacketFailAnimation;
- (id)commandContent;
- (void)setSendCommandBlock:(id /* block */)arg0;
- (BOOL)sendButtonLoading;
- (void)setSendCommandButton:(id)arg0;
- (void)setCommandRedPacketLabel:(id)arg0;
- (void)setCommandContentView:(id)arg0;
- (void)setCommandTitleContainerView:(id)arg0;
- (void)setLeftDecorationView:(id)arg0;
- (void)setRightDecorationView:(id)arg0;
- (void)setCommandTitleLabel:(id)arg0;
- (void)setCommandImageView:(id)arg0;
- (void)setCommandProgressView:(id)arg0;
- (void)setCommandSendSuccessLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
