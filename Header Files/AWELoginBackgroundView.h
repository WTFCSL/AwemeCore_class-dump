//
//     Generated by private class-dump
//

@class NSString, AWELoginBackgroundViewNavigationBarConfig, AWELoginAmbientView, NSObject;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWELoginBackgroundView : UIView <AWELoginAmbientViewDelegate> {
    long long _statusBarStyle;
    AWELoginAmbientView *_ambientView;
    AWELoginBackgroundViewNavigationBarConfig *_navBarConfig;
    NSObject<AWEUserLoginUILayoutConfig> *_layoutConfig;
    NSObject<AWEUserLoginUIAmbientConfig> *_ambientConfig;
}

@property (retain, nonatomic) AWELoginAmbientView *ambientView;
@property (retain, nonatomic) AWELoginBackgroundViewNavigationBarConfig *navBarConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (nonatomic) long long statusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLayoutConfig:(id)arg0;
- (void)p_setupUI;
- (void)showHeaderView;
- (id)ambientConfig;
- (void)setAmbientConfig:(id)arg0;
- (void)updateNavigationBarConfig:(id /* block */)arg0;
- (void)headerViewLoadImageWithView:(id)arg0;
- (id)ambientView;
- (void)p_updateNavigationBar;
- (void)p_updateBackground;
- (id)navBarConfig;
- (void)setAmbientView:(id)arg0;
- (void)setNavBarConfig:(id)arg0;
- (long long)statusBarStyle;
- (void).cxx_destruct;
- (void)setStatusBarStyle:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)hideHeaderView;
- (void)updateModel:(id /* block */)arg0;
- (id)layoutConfig;

@end
