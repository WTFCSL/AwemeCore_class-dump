//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface IESLivePageContainerView : UIView {
    UIView *_view;
    NSString *identifier;
    long long index;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentEdgeInsets;
}

@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) long long index;

- (void)setIndex:(long long)arg0;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)identifier;
- (void)setView:(id)arg0;
- (long long)index;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (id)view;
- (void)setIdentifier:(id)arg0;

@end