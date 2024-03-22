//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEInteractionEditTagStickerModel, CALayer, UIView, UILabel;
@protocol ACCStickerContainerProtocol;

@interface ACCEditTagSubLineStickerView : UIView <ACCStickerEditContentProtocol, ACCEditTagStickerViewProtocol> {
    BOOL _transparent;
    id /* block */ coordinateDidChange;
    long long stickerId;
    id<ACCStickerContainerProtocol> stickerContainer;
    AWEInteractionEditTagStickerModel *_interactionStickerModel;
    double _maxContentWidth;
    double _maxTextWidth;
    unsigned long long _numberOfLines;
    CALayer *_animationLayer;
    UIView *_pointView;
    UIImageView *_iconView;
    UIView *_tagBackgroundView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_rightArrowImageView;
}

@property (retain, nonatomic) CALayer *animationLayer;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (readonly, nonatomic) AWEInteractionEditTagStickerModel *interactionStickerModel;
@property (nonatomic) double maxContentWidth;
@property (nonatomic) double maxTextWidth;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideSticker;
- (void)setStickerId:(long long)arg0;
- (long long)stickerId;
- (id)pointView;
- (void)setPointView:(id)arg0;
- (void)setMaxContentWidth:(double)arg0;
- (double)maxContentWidth;
- (void)setRightArrowImageView:(id)arg0;
- (id)rightArrowImageView;
- (id)tagBackgroundView;
- (void)setTagBackgroundView:(id)arg0;
- (void)updateInteractionModel:(id)arg0;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (id)editTagInfo;
- (id)initWithStickerModel:(id)arg0;
- (double)calculateContentSizeWithMaxTextWidth:(double)arg0;
- (id /* block */)coordinateDidChange;
- (id)copyForContext:(id)arg0;
- (void)setCoordinateDidChange:(id /* block */)arg0;
- (void)showSticker;
- (id)interactionStickerModel;
- (void)setInteractionStickerModel:(id)arg0;
- (void)showHeartAnimation;
- (void)showAppearAnimation;
- (struct CGPoint { double x0; double x1; })normalizedTagCenterPoint;
- (BOOL)showIconImage;
- (void)setSubtitleLabel:(id)arg0;
- (BOOL)showSubtitle;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)subtitleLabel;
- (unsigned long long)numberOfLines;
- (void)setNumberOfLines:(unsigned long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isTransparent;
- (void)setupUI;
- (void)updateUI;
- (id)animationLayer;
- (void)setAnimationLayer:(id)arg0;
- (void)setTransparent:(BOOL)arg0;
- (double)maxTextWidth;
- (void)setMaxTextWidth:(double)arg0;

@end
