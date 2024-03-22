//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface IESPlaybackVideoFreeTrialView : UIView {
    BOOL _enableAction;
    id /* block */ _actionBlock;
    double _topMargin;
    UIButton *_actionBtn;
    UILabel *_titleLbl;
    UILabel *_subTitleLbl;
}

@property (retain, nonatomic) UILabel *titleLbl;
@property (retain, nonatomic) UILabel *subTitleLbl;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL enableAction;
@property (nonatomic) double topMargin;
@property (retain, nonatomic) UIButton *actionBtn;

+ (id)trialView;
+ (double)contentHeight;

- (id)actionBtn;
- (void)setActionBtn:(id)arg0;
- (void)setTitleLbl:(id)arg0;
- (id)titleLbl;
- (BOOL)enableAction;
- (void)setSubTitleLbl:(id)arg0;
- (id)subTitleLbl;
- (void)actionDidFire:(id)arg0;
- (void)setEnableAction:(BOOL)arg0;
- (void)refreshWithTitle:(id)arg0 subTitle:(id)arg1 actionTitle:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (double)topMargin;
- (id /* block */)actionBlock;
- (void)layoutSubviews;
- (void)setActionBlock:(id /* block */)arg0;
- (void)setTopMargin:(double)arg0;

@end
