//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface HGButton : UIButton <HGAppearance, HGAppearanceStyleMessage> {
    NSArray *_hg_styleCategories;
    id /* block */ _clickBlock;
}

@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSArray *hg_styleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)applyAppearanceStyle;
+ (id)hg_styleForCategory:(id)arg0;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)setHg_styleCategories:(id)arg0;
- (void)setupAction;
- (id)hg_styleCategories;
- (void)onButtonClick:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)layoutSubviews;

@end