//
//     Generated by private class-dump
//

@interface IESInfoStickerPinSelectedArea : NSObject {
    BOOL _isUsingSelectedPinArea;
    float _centerX;
    float _centerY;
    float _angle;
    float _rectWidth;
    float _rectHeight;
}

@property (nonatomic) float centerX;
@property (nonatomic) float centerY;
@property (nonatomic) float angle;
@property (nonatomic) float rectWidth;
@property (nonatomic) float rectHeight;
@property (nonatomic) BOOL isUsingSelectedPinArea;

- (BOOL)isUsingSelectedPinArea;
- (void)setIsUsingSelectedPinArea:(BOOL)arg0;
- (float)angle;
- (void)setAngle:(float)arg0;
- (float)centerX;
- (float)centerY;
- (void)setCenterX:(float)arg0;
- (void)setCenterY:(float)arg0;
- (float)rectWidth;
- (float)rectHeight;
- (void)setRectWidth:(float)arg0;
- (void)setRectHeight:(float)arg0;

@end