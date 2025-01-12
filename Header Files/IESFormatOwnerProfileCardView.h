//
//     Generated by private class-dump
//

@class UIButton, NSString, UIImageView, UILabel, IESFormatOwnerProfileCardViewModel, YYLabel;

@interface IESFormatOwnerProfileCardView : UIView <UIGestureRecognizerDelegate> {
    id /* block */ _onClickJumpToOwnerProfilePageButton;
    id /* block */ _onClickAtOwnerNickname;
    IESFormatOwnerProfileCardViewModel *_viewModel;
    UIImageView *_avatar;
    UIImageView *_aiTag;
    UILabel *_digitalHumanNickname;
    YYLabel *_ownerCreateInfo;
    UILabel *_abilityDescription;
    UIButton *_jumpToProfilePageButton;
}

@property (retain, nonatomic) IESFormatOwnerProfileCardViewModel *viewModel;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIImageView *aiTag;
@property (retain, nonatomic) UILabel *digitalHumanNickname;
@property (retain, nonatomic) YYLabel *ownerCreateInfo;
@property (retain, nonatomic) UILabel *abilityDescription;
@property (retain, nonatomic) UIButton *jumpToProfilePageButton;
@property (copy, nonatomic) id /* block */ onClickJumpToOwnerProfilePageButton;
@property (copy, nonatomic) id /* block */ onClickAtOwnerNickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDigitalHumanNickname:(id)arg0;
- (void)setOnClickAtOwnerNickname:(id /* block */)arg0;
- (void)setOnClickJumpToOwnerProfilePageButton:(id /* block */)arg0;
- (void)refreshWithViewModel:(id)arg0;
- (void)popupInContainer:(id)arg0 completion:(id /* block */)arg1;
- (id)aiTag;
- (id)digitalHumanNickname;
- (id)ownerCreateInfo;
- (id /* block */)onClickAtOwnerNickname;
- (id)abilityDescription;
- (id)jumpToProfilePageButton;
- (void)setJumpToProfilePageButton:(id)arg0;
- (void)setAiTag:(id)arg0;
- (void)setOwnerCreateInfo:(id)arg0;
- (void)setAbilityDescription:(id)arg0;
- (id /* block */)onClickJumpToOwnerProfilePageButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end
