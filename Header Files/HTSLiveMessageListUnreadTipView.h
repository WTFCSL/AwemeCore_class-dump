//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface HTSLiveMessageListUnreadTipView : UIView {
    BOOL _shouldHidden;
    BOOL _hideForLanscape;
    BOOL _showShadowEffect;
    BOOL _inMention;
    BOOL _hasUnreadCount;
    id /* block */ _onTouched;
    UILabel *_messageLabel;
    UIView *_contentView;
    UIView *_shadowView;
    NSString *_unreadMessageText;
}

@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *shadowView;
@property (nonatomic) BOOL hasUnreadCount;
@property (nonatomic) BOOL inMention;
@property (copy, nonatomic) NSString *unreadMessageText;
@property (nonatomic) BOOL shouldHidden;
@property (nonatomic) BOOL hideForLanscape;
@property (nonatomic) BOOL showShadowEffect;
@property (copy, nonatomic) id /* block */ onTouched;

- (BOOL)hasUnreadCount;
- (BOOL)shouldShowTip;
- (BOOL)shouldHidden;
- (void)setShouldHidden:(BOOL)arg0;
- (BOOL)hideForLanscape;
- (BOOL)showShadowEffect;
- (void)refreshMessageCount:(long long)arg0 withTextFormat:(id)arg1;
- (void)setHasUnreadCount:(BOOL)arg0;
- (void)alertViewAppearAnimation;
- (BOOL)inMention;
- (void)setUnreadMessageText:(id)arg0;
- (void)setInMention:(BOOL)arg0;
- (id)unreadMessageText;
- (id /* block */)onTouched;
- (void)refreshMessageCount:(long long)arg0;
- (void)refreshMentionStatus:(BOOL)arg0;
- (void)setHideForLanscape:(BOOL)arg0;
- (void)setShowShadowEffect:(BOOL)arg0;
- (void)setOnTouched:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)shadowView;
- (void)setMessageLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setShadowView:(id)arg0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg0;
- (id)messageLabel;
- (void)setContentView:(id)arg0;

@end