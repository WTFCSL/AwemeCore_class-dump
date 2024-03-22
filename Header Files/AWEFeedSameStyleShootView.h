//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, UILabel, UIView;

@interface AWEFeedSameStyleShootView : UIView <AWEFeedSameStyleShootViewProtocol> {
    UIColor *_toColor;
    UIView *_contentView;
    UILabel *_tipsLabel;
    UIImageView *_iconImageView;
    double _originAlpha;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double originAlpha;
@property (retain, nonatomic) UIColor *toColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)p_setupUI;
- (void)initBackgroundColor;
- (void)setOriginAlpha:(double)arg0;
- (double)originAlpha;
- (void)updateTips:(id)arg0;
- (id)init;
- (void)updateBackgroundColor;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)contentView;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (id)iconImageView;
- (id)defaultBackgroundColor;
- (void)setContentView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)toColor;
- (void)setToColor:(id)arg0;

@end