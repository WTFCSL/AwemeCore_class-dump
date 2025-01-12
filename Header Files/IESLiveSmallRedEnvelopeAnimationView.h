//
//     Generated by private class-dump
//

@class UIImageView, IESLiveSmallRedEnvelopeAnimationAvatar, UILabel;

@interface IESLiveSmallRedEnvelopeAnimationView : UIView {
    id /* block */ _actionBlock;
    UIImageView *_backgroundView;
    IESLiveSmallRedEnvelopeAnimationAvatar *_firstAvatarView;
    IESLiveSmallRedEnvelopeAnimationAvatar *_secondAvatarView;
    IESLiveSmallRedEnvelopeAnimationAvatar *_thirdAvatarView;
    UILabel *_descriptionLabel;
    UILabel *_diamondLabel;
}

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar *firstAvatarView;
@property (retain, nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar *secondAvatarView;
@property (retain, nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar *thirdAvatarView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *diamondLabel;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)firstAvatarView;
- (id)secondAvatarView;
- (void)setFirstAvatarView:(id)arg0;
- (void)setSecondAvatarView:(id)arg0;
- (id)diamondLabel;
- (void)setDiamondLabel:(id)arg0;
- (void)updateWithAvatars:(id)arg0 totalDiamond:(id)arg1 backgroungImage:(id)arg2;
- (id)thirdAvatarView;
- (id)buildRichTextForDiamond:(id)arg0;
- (void)setupAvatar:(id)arg0 user:(id)arg1 cornerRadius:(double)arg2;
- (void)setThirdAvatarView:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (id /* block */)actionBlock;
- (void)setBackgroundView:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (void)didTapView;

@end
