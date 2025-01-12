//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface BDPBubbleTipModel : NSObject {
    BOOL _hideCloseButton;
    BOOL _useDefaultContent;
    float _hideSecond;
    float _showSecond;
    UIColor *_bgColor;
    UIColor *_textColor;
    UIColor *_borderColor;
    double _borderWidth;
    double _radius;
    double _triangleWidth;
    double _triangleHeight;
    double _triangleRadius;
    NSString *_tipString;
    double _reverseOffsetX;
}

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double radius;
@property (nonatomic) double triangleWidth;
@property (nonatomic) double triangleHeight;
@property (nonatomic) double triangleRadius;
@property (copy, nonatomic) NSString *tipString;
@property (nonatomic) double reverseOffsetX;
@property (nonatomic) float hideSecond;
@property (nonatomic) float showSecond;
@property (nonatomic) BOOL hideCloseButton;
@property (nonatomic) BOOL useDefaultContent;

- (BOOL)hideCloseButton;
- (id)tipString;
- (void)setReverseOffsetX:(double)arg0;
- (double)reverseOffsetX;
- (void)setTipString:(id)arg0;
- (float)showSecond;
- (void)setShowSecond:(float)arg0;
- (void)setHideCloseButton:(BOOL)arg0;
- (double)triangleHeight;
- (double)triangleWidth;
- (void)setTriangleWidth:(double)arg0;
- (void)setTriangleHeight:(double)arg0;
- (double)triangleRadius;
- (void)setTriangleRadius:(double)arg0;
- (float)hideSecond;
- (void)setHideSecond:(float)arg0;
- (BOOL)useDefaultContent;
- (void)setUseDefaultContent:(BOOL)arg0;
- (double)borderWidth;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (double)radius;
- (void)setBorderWidth:(double)arg0;
- (void)setRadius:(double)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (id)bgColor;
- (void)setBgColor:(id)arg0;

@end
