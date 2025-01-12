//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDPButton : UIButton <BDPAppearance, BDPAppearanceStyleMessage> {
    NSArray *_bdp_styleCategories;
    id /* block */ _clickBlock;
}

@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSArray *bdp_styleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)applyAppearanceStyle;
+ (id)bdp_styleForCategory:(id)arg0;
+ (void)applyAppearanceProcessWithisUpdating:(BOOL)arg0;
+ (void)applyAppearanceStyleAuthorize;
+ (void)applyAppearanceStyleAuthorizeForHG;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)setupAction;
- (void)onButtonClick:(id)arg0;
- (void)setBdp_styleCategories:(id)arg0;
- (id)bdp_styleCategories;
- (void)p_updateCategoryStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)layoutSubviews;

@end
