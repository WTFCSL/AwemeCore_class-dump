//
//     Generated by private class-dump
//

@class UILabel, IESECLiveAnchorAirViewConfig, UIView;

@interface IESECLiveAnchorAirView : UIView {
    long long _time;
    double _width;
    id /* block */ _closeBlock;
    IESECLiveAnchorAirViewConfig *_config;
    UIView *_bkgView;
    UIView *_arrowView;
    UILabel *_textLabel;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _specialEdgeInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
}

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) UIView *arrowView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) long long time;
@property (nonatomic) double width;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } specialEdgeInsets;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly, nonatomic) IESECLiveAnchorAirViewConfig *config;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)closeView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1;
- (id)bkgView;
- (void)setBkgView:(id)arg0;
- (void)showWithView:(id)arg0 target:(id)arg1 attributedText:(id)arg2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })specialEdgeInsets;
- (void)showWithView:(id)arg0 target:(id)arg1 text:(id)arg2;
- (void)setBkgColor:(id)arg0;
- (void)setSpecialEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)textLabel;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRect;
- (void).cxx_destruct;
- (long long)time;
- (id)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTime:(long long)arg0;
- (void)setWidth:(double)arg0;
- (void)setTextColor:(id)arg0;
- (double)width;
- (void)setTextLabel:(id)arg0;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupUI;
- (void)setTextFont:(id)arg0;
- (void)handleTapGesture:(id)arg0;

@end
