//
//     Generated by private class-dump
//

@interface AWEPOICustomView : UIView {
    id /* block */ _layoutSubviewsCallback;
    id /* block */ _sizeDidChangeCallback;
    struct CGSize { double width; double height; } _custom_intrinsicContentSize;
    struct CGSize { double width; double height; } _preSize;
}

@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (nonatomic) struct CGSize { double width; double height; } custom_intrinsicContentSize;
@property (copy, nonatomic) id /* block */ layoutSubviewsCallback;
@property (copy, nonatomic) id /* block */ sizeDidChangeCallback;

- (void)setPreSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })preSize;
- (struct CGSize { double x0; double x1; })custom_intrinsicContentSize;
- (id /* block */)layoutSubviewsCallback;
- (id /* block */)sizeDidChangeCallback;
- (void)setCustom_intrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setLayoutSubviewsCallback:(id /* block */)arg0;
- (void)setSizeDidChangeCallback:(id /* block */)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;

@end
