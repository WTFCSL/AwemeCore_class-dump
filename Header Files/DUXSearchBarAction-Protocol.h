//
//     Generated by private class-dump
//

@protocol DUXSearchBarAction <NSObject, NSCopying>

@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double x0; double x1; } actionSize;
@property (nonatomic) double actionPadding;

- (void)setActionPadding:(double)arg0;
- (id /* block */)onClick;
- (void)setOnClick:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })actionSize;
- (double)actionPadding;
- (void)setActionSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg0;
- (id)actionView;

@end
