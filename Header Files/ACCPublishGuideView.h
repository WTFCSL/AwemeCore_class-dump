//
//     Generated by private class-dump
//

@class NSString, UILabel, UIImageView;

@interface ACCPublishGuideView : UIView {
    NSString *_titleStr;
    NSString *_subTitleStr;
    UILabel *_mainLabel;
    UILabel *_hintLabel;
    UIImageView *_arrowView;
    id /* block */ _dismissBlock;
}

@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *subTitleStr;
@property (readonly, nonatomic) UILabel *mainLabel;
@property (readonly, nonatomic) UILabel *hintLabel;
@property (readonly, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (void)showGuideIn:(id)arg0 under:(id)arg1 then:(id)arg2 title:(id)arg3 subTitle:(id)arg4 dismissBlock:(id /* block */)arg5;
+ (BOOL)isViewGuidePopped:(id)arg0;
+ (void)setViewGuidePopped:(id)arg0;
+ (const void *)bindKey;
+ (void)showGuideIn:(id)arg0 under:(id)arg1 then:(id)arg2 dismissBlock:(id /* block */)arg3;
+ (void)showAnimationIn:(id)arg0 enterFrom:(id)arg1;

- (id)titleStr;
- (void)setTitleStr:(id)arg0;
- (void)setSubTitleStr:(id)arg0;
- (id)subTitleStr;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 titleStr:(id)arg1 subTitleStr:(id)arg2;
- (void)updateWithBottomView:(id)arg0;
- (void)dismissAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)arrowView;
- (id)hintLabel;
- (id)mainLabel;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)p_init;

@end