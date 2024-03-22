//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface IESLiveInteractiveSettingGuidePanelSceneSwitch : UIView {
    BOOL _isSelected;
    UIView *_backgroundView;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    id /* block */ _tapBlock;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) BOOL isSelected;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)setupGuesture;
- (id)backgroundView;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setBackgroundView:(id)arg0;
- (BOOL)isSelected;
- (void)setIconImageView:(id)arg0;
- (void)setupViews;

@end