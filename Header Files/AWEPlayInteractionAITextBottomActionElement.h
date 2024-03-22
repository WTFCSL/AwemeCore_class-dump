//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEPlayInteractionAITextBottomActionElement : AWEPlayInteractionBaseActionButtonElement {
    UIView *_aiTextEntranceView;
    UILabel *_aiTextLabel;
    UIImageView *_iconImageV;
    UIView *_contentView;
    id /* block */ _showAnimationHandler;
}

@property (retain, nonatomic) UIView *aiTextEntranceView;
@property (retain, nonatomic) UILabel *aiTextLabel;
@property (retain, nonatomic) UIImageView *iconImageV;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ showAnimationHandler;

- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (id)iconImageV;
- (void)setIconImageV:(id)arg0;
- (id /* block */)showAnimationHandler;
- (void)trackAITextButtonShow;
- (void)setupButtonStyle;
- (void)onAITextEntranceViewClicked:(id)arg0;
- (id)aiTextEntranceView;
- (id)aiTextLabel;
- (BOOL)shouldAITextActiveWithData:(id)arg0 context:(id)arg1;
- (void)setAiTextEntranceView:(id)arg0;
- (void)setAiTextLabel:(id)arg0;
- (void)setShowAnimationHandler:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (void)reset;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;

@end