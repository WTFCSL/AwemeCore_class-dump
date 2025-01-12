//
//     Generated by private class-dump
//

@class UIButton, NSString, UIView, BDSCSearchTipView;

@interface BDSCLiveSearchNoPermissionView : UIView <BDSCSearchDeviceNoPermissionViewProtocol> {
    BOOL _isLandscape;
    BOOL _isLandscapeStream;
    id /* block */ _clickBlock;
    double _verticalContainerBottomOffset;
    BDSCSearchTipView *_tipView;
    UIView *_tipContainer;
    UIButton *_settingsButton;
    double _verticalTipViewHeight;
}

@property (retain, nonatomic) BDSCSearchTipView *tipView;
@property (retain, nonatomic) UIView *tipContainer;
@property (retain, nonatomic) UIButton *settingsButton;
@property (nonatomic) BOOL isLandscapeStream;
@property (nonatomic) double verticalTipViewHeight;
@property (nonatomic) double verticalContainerBottomOffset;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)setIsLandscapeStream:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isLandscape:(BOOL)arg1 isLandscapeStream:(BOOL)arg2;
- (void)setVerticalContainerBottomOffset:(double)arg0;
- (void)settingButtonClicked:(id)arg0;
- (BOOL)isLandscapeStream;
- (id)tipContainer;
- (void)setTipContainer:(id)arg0;
- (double)verticalContainerBottomOffset;
- (void)openSystemSettings;
- (void)didTapTipView;
- (double)verticalTipViewHeight;
- (void)setVerticalTipViewHeight:(double)arg0;
- (void).cxx_destruct;
- (void)setIsLandscape:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (BOOL)isLandscape;
- (void)layoutSubviews;
- (id)settingsButton;
- (void)setupSubviews;
- (void)setSettingsButton:(id)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;

@end
