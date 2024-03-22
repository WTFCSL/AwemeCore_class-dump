//
//     Generated by private class-dump
//

@class NSString, IESECButton;

@interface IESECWinReplayButtonComponent : UIView <IESECLLComponent> {
    id /* block */ _clickReplayButtonBlock;
    IESECButton *_replayButton;
    NSString *_buttonText;
}

@property (retain, nonatomic) IESECButton *replayButton;
@property (retain, nonatomic) NSString *buttonText;
@property (copy, nonatomic) id /* block */ clickReplayButtonBlock;

+ (id /* block */)replayButtonWithButtonSize:(struct CGSize { double x0; double x1; })arg0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1 iconSize:(struct CGSize { double x0; double x1; })arg2 textFontSize:(double)arg3 iconTextSpacing:(double)arg4 backgroundColor:(id)arg5;

- (void)p_setupUI;
- (void)updateUIWithModel:(id)arg0;
- (void)setClickReplayButtonBlock:(id /* block */)arg0;
- (void)didTapReplayButton;
- (id /* block */)clickReplayButtonBlock;
- (id)init;
- (void).cxx_destruct;
- (id)buttonText;
- (void)setButtonText:(id)arg0;
- (id)replayButton;
- (void)setReplayButton:(id)arg0;

@end
