//
//     Generated by private class-dump
//

@class UIButton;

@interface IESLivePlaybackCommentSettingView : UIView {
    id /* block */ _didClickSettingView;
    UIButton *_settingButton;
}

@property (retain, nonatomic) UIButton *settingButton;
@property (copy, nonatomic) id /* block */ didClickSettingView;

- (void)didSetAttachingDIContext;
- (id)settingButton;
- (void)setSettingButton:(id)arg0;
- (void)setDidClickSettingView:(id /* block */)arg0;
- (void)addRedDotIfNeeded;
- (void)didClickCommentSettingBtn;
- (id /* block */)didClickSettingView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupView;

@end
