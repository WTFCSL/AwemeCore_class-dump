//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPOISkeletonConfigModel : NSObject {
    double _skeletonCornerRadius;
    double _itemCornerRadius;
    NSArray *_backgroundColorsArray;
    NSArray *_itemColorsArray;
    long long _gradientDirection;
    NSString *_animation;
    NSArray *_items;
    struct CGPoint { double x; double y; } _origin;
}

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) double skeletonCornerRadius;
@property (nonatomic) double itemCornerRadius;
@property (retain, nonatomic) NSArray *backgroundColorsArray;
@property (retain, nonatomic) NSArray *itemColorsArray;
@property (nonatomic) long long gradientDirection;
@property (retain, nonatomic) NSString *animation;
@property (retain, nonatomic) NSArray *items;

- (double)skeletonCornerRadius;
- (void)setSkeletonCornerRadius:(double)arg0;
- (id)backgroundColorsArray;
- (void)setBackgroundColorsArray:(id)arg0;
- (id)itemColorsArray;
- (void)setItemColorsArray:(id)arg0;
- (void)setItems:(id)arg0;
- (double)itemCornerRadius;
- (void).cxx_destruct;
- (id)animation;
- (id)items;
- (void)setAnimation:(id)arg0;
- (struct CGPoint { double x0; double x1; })origin;
- (void)setItemCornerRadius:(double)arg0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (long long)gradientDirection;
- (void)setGradientDirection:(long long)arg0;

@end
