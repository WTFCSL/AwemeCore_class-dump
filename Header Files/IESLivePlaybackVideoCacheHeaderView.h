//
//     Generated by private class-dump
//

@class UILabel, UIButton, NSString;

@interface IESLivePlaybackVideoCacheHeaderView : UIView {
    NSString *_title;
    id /* block */ _resolutionButtonClicked;
    UILabel *_titleLabel;
    UIButton *_resolutionButton;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *resolutionButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ resolutionButtonClicked;

- (id)resolutionButton;
- (void)setResolutionButton:(id)arg0;
- (id /* block */)resolutionButtonClicked;
- (void)setResolutionButtonClicked:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)p_commonInit;

@end
