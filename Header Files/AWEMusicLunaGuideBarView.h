//
//     Generated by private class-dump
//

@interface AWEMusicLunaGuideBarView : UIView {
    id /* block */ _clickBlock;
}

@property (copy, nonatomic) id /* block */ clickBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (void)updateContentWithMainTitle:(id)arg0 subTitle:(id)arg1 mainButtonTitle:(id)arg2;
- (id /* block */)clickBlock;
- (void)setMainButtonTitle:(id)arg0;
- (id)p_colorWithLightColor:(id)arg0 darkColor:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg0 globalProps:(id)arg1;
- (void)didClickedMainButton;
- (id)p_imageWithLightImage:(id)arg0 darkImage:(id)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg0;
- (void)setSubTitle:(id)arg0;
- (void)setMainTitle:(id)arg0;

@end
