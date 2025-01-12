//
//     Generated by private class-dump
//

@class UIStackView, UIScrollView, IESLivePKGuestOperatePanelViewModel, IESLivePKGuestEmojiContainer, UILabel, UIView, UIButton;

@interface IESLivePKGuestOperatePanelView : UIView {
    IESLivePKGuestOperatePanelViewModel *_viewModel;
    UIView *_topContainerView;
    UILabel *_titleLabel;
    UIButton *_connectButton;
    UILabel *_remainTimeLabel;
    UIStackView *_itemsStackView;
    UIStackView *_modeItemsStackView;
    UIScrollView *_itemsScrollView;
    UIView *_lineView;
    UIView *_connectModeView;
    IESLivePKGuestEmojiContainer *_emojiContainer;
}

@property (retain, nonatomic) IESLivePKGuestOperatePanelViewModel *viewModel;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *connectButton;
@property (retain, nonatomic) UILabel *remainTimeLabel;
@property (retain, nonatomic) UIStackView *itemsStackView;
@property (retain, nonatomic) UIStackView *modeItemsStackView;
@property (retain, nonatomic) UIScrollView *itemsScrollView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *connectModeView;
@property (retain, nonatomic) IESLivePKGuestEmojiContainer *emojiContainer;

- (id)topContainerView;
- (void)setTopContainerView:(id)arg0;
- (double)itemMargin;
- (id)initWithViewModel:(id)arg0 diContext:(id)arg1;
- (id)emojiContainer;
- (id)remainTimeLabel;
- (void)setRemainTimeLabel:(id)arg0;
- (double)renderEmojiList:(double)arg0;
- (double)renderPanelItems;
- (double)renderTopContainerView;
- (void)setEmojiContainer:(id)arg0;
- (id)itemsStackView;
- (id)itemsScrollView;
- (id)modeItemsStackView;
- (id)connectModeView;
- (BOOL)showDisconnectBtn;
- (id)connectButton;
- (void)p_addObserveForGuestUser;
- (void)disconnectButtonAction:(id)arg0;
- (void)setConnectButton:(id)arg0;
- (void)setItemsStackView:(id)arg0;
- (void)setModeItemsStackView:(id)arg0;
- (void)setItemsScrollView:(id)arg0;
- (void)setConnectModeView:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (double)itemSpacing;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (void)binding;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupViews;

@end
