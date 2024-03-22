//
//     Generated by private class-dump
//

@interface AWEPLVCardDescBaseElement : NSObject {
    long long _elementType;
    double _leftPaddingValue;
    double _rightPaddingValue;
    double _heightValue;
    double _bottomPaddingValue;
}

@property (nonatomic) double leftPaddingValue;
@property (nonatomic) double rightPaddingValue;
@property (nonatomic) double heightValue;
@property (nonatomic) double bottomPaddingValue;
@property (nonatomic) long long elementType;
@property (readonly, copy, nonatomic) id /* block */ leftPadding;
@property (readonly, copy, nonatomic) id /* block */ rightPadding;
@property (readonly, copy, nonatomic) id /* block */ height;
@property (readonly, copy, nonatomic) id /* block */ bottomPadding;

- (void)applyView:(id)arg0;
- (void)setLeftPaddingValue:(double)arg0;
- (void)setRightPaddingValue:(double)arg0;
- (void)setBottomPaddingValue:(double)arg0;
- (double)leftPaddingValue;
- (double)rightPaddingValue;
- (double)bottomPaddingValue;
- (id /* block */)height;
- (id /* block */)bottomPadding;
- (Class)viewClass;
- (long long)elementType;
- (void)setElementType:(long long)arg0;
- (double)heightValue;
- (void)setHeightValue:(double)arg0;
- (id /* block */)leftPadding;
- (id /* block */)rightPadding;

@end