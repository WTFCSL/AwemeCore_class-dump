//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface AWEEcomSearchMoreButtonCardView : UIView <AWESearchCachalotCardViewProtocol> {
    UILabel *_tipsLabel;
    UIView *_backgroundView;
    UIImageView *_iconView;
    UIView *_effectView;
}

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)arg0 width:(double)arg1;
+ (BOOL)hasMoreWithViewModel:(id)arg0;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)configUI;
- (id)backgroundView;
- (id)effectView;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEffectView:(id)arg0;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg0;
- (id)componentView;
- (void)updateWithViewModel:(id)arg0;

@end
