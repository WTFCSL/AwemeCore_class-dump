//
//     Generated by private class-dump
//

@class UIColor;

@interface AWEIMPanelViewModel : NSObject {
    Class _associateViewClass;
    UIColor *_backgroundColor;
    double _contentHeight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
}

@property (retain, nonatomic) Class associateViewClass;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double contentHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) double height;

- (void)setAssociateViewClass:(Class)arg0;
- (Class)associateViewClass;
- (id)init;
- (void).cxx_destruct;
- (double)contentHeight;
- (double)height;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)backgroundColor;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setContentHeight:(double)arg0;

@end
