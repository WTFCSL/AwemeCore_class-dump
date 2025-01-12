//
//     Generated by private class-dump
//

@protocol AWERatingStartViewDelegate;

@interface AWERatingStarView : UIView {
    double _index;
    id<AWERatingStartViewDelegate> _delegate;
}

@property (nonatomic) double index;
@property (weak, nonatomic) id<AWERatingStartViewDelegate> delegate;

+ (id)createStarLayerWithImgae:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (id)createLayer:(struct CGSize { double x0; double x1; })arg0;
+ (id)createStarWithImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 index:(double)arg2;
+ (id)createStarWithImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 index:(double)arg2 color:(id)arg3 gridentLayer:(id)arg4;
+ (id)createPartialStarWithFillPercentage:(double)arg0 fullImage:(id)arg1 emptyImage:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3 index:(double)arg4;

- (void)onTaped:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 index:(long long)arg1;
- (void)setIndex:(double)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (double)index;
- (void)setDelegate:(id)arg0;

@end
