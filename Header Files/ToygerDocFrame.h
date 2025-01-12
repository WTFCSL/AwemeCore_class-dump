//
//     Generated by private class-dump
//

@interface ToygerDocFrame : ToygerFrame {
    BOOL _hasDoc;
    BOOL _isCompleted;
    BOOL _isReflected;
    BOOL _isBlur;
    BOOL _isCopy;
    BOOL _topOK;
    BOOL _bottomOK;
    BOOL _leftOK;
    BOOL _rightOK;
    float _topScore;
    float _bottomScore;
    float _leftScore;
    float _rightScore;
}

@property (nonatomic) BOOL hasDoc;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) BOOL isReflected;
@property (nonatomic) BOOL isBlur;
@property (nonatomic) BOOL isCopy;
@property (nonatomic) float topScore;
@property (nonatomic) float bottomScore;
@property (nonatomic) float leftScore;
@property (nonatomic) float rightScore;
@property (nonatomic) BOOL topOK;
@property (nonatomic) BOOL bottomOK;
@property (nonatomic) BOOL leftOK;
@property (nonatomic) BOOL rightOK;

- (void)setHasDoc:(BOOL)arg0;
- (void)setIsReflected:(BOOL)arg0;
- (void)setIsCopy:(BOOL)arg0;
- (BOOL)hasDoc;
- (BOOL)isCopy;
- (float)bottomScore;
- (void)setBottomScore:(float)arg0;
- (float)leftScore;
- (void)setLeftScore:(float)arg0;
- (float)rightScore;
- (void)setRightScore:(float)arg0;
- (BOOL)topOK;
- (void)setTopOK:(BOOL)arg0;
- (BOOL)bottomOK;
- (void)setBottomOK:(BOOL)arg0;
- (BOOL)leftOK;
- (void)setLeftOK:(BOOL)arg0;
- (BOOL)rightOK;
- (void)setRightOK:(BOOL)arg0;
- (id)init;
- (BOOL)isCompleted;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isReflected;
- (BOOL)isBlur;
- (void)setIsBlur:(BOOL)arg0;
- (void)setIsCompleted:(BOOL)arg0;
- (float)topScore;
- (void)setTopScore:(float)arg0;

@end
