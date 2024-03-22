//
//     Generated by private class-dump
//

@class UIView;

@interface IESECShopLiveFusionViewInfo : NSObject {
    UIView *_view;
    UIView *_superView;
    unsigned long long _index;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) UIView *superView;
@property (nonatomic) unsigned long long index;

+ (id)infoWithView:(id)arg0;

- (id)superView;
- (void)setSuperView:(id)arg0;
- (void)setIndex:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (unsigned long long)index;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end
