//
//     Generated by private class-dump
//

@interface IESECAlertUIConfig : NSObject {
    double _leftPadding;
    double _rightPadding;
    double _topPadding;
    double _bottomPadding;
    double _middlePadding;
    double _imageTopPadding;
    double _imageRadius;
    double _buttonHeight;
    double _cornerRadius;
    double _maxTotalWidth;
    double _maxCustomViewHeight;
    struct CGSize { double width; double height; } _imageSize;
}

@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double middlePadding;
@property (nonatomic) double imageTopPadding;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageRadius;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double maxTotalWidth;
@property (nonatomic) double maxCustomViewHeight;

- (void)setLeftPadding:(double)arg0;
- (void)setRightPadding:(double)arg0;
- (void)setImageTopPadding:(double)arg0;
- (double)imageRadius;
- (void)setImageRadius:(double)arg0;
- (void)setMiddlePadding:(double)arg0;
- (double)imageTopPadding;
- (double)maxTotalWidth;
- (void)setMaxTotalWidth:(double)arg0;
- (double)maxCustomViewHeight;
- (void)setMaxCustomViewHeight:(double)arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)buttonHeight;
- (double)cornerRadius;
- (double)bottomPadding;
- (double)topPadding;
- (void)setCornerRadius:(double)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (double)middlePadding;
- (void)setBottomPadding:(double)arg0;
- (void)setTopPadding:(double)arg0;
- (void)setButtonHeight:(double)arg0;
- (double)leftPadding;
- (double)rightPadding;

@end
