//
//     Generated by private class-dump
//

@class UIColor, BDPAlertControllerActionButtonTheme;

@interface BDPAlertControllerActionTheme : BDPAlertControllerThemeBase {
    unsigned long long _edge;
    double _edgeWidth;
    UIColor *_edgeColor;
    double _height;
    BDPAlertControllerActionButtonTheme *_normal;
    BDPAlertControllerActionButtonTheme *_cancel;
    BDPAlertControllerActionButtonTheme *_destructive;
    BDPAlertControllerActionButtonTheme *_confirm;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (nonatomic) unsigned long long edge;
@property (nonatomic) double edgeWidth;
@property (retain, nonatomic) UIColor *edgeColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *normal;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *cancel;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *destructive;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *confirm;

- (double)edgeWidth;
- (void)setEdgeWidth:(double)arg0;
- (id)edgeColor;
- (void)setEdgeColor:(id)arg0;
- (unsigned long long)edge;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (void)setEdge:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (double)height;
- (id)normal;
- (void)setDestructive:(id)arg0;
- (id)destructive;
- (void)setCancel:(id)arg0;
- (id)cancel;
- (void)setHeight:(double)arg0;
- (id)confirm;
- (void)setConfirm:(id)arg0;
- (void)setNormal:(id)arg0;

@end
