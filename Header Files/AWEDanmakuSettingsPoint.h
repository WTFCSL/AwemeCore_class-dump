//
//     Generated by private class-dump
//

@class UIView;

@interface AWEDanmakuSettingsPoint : NSObject {
    BOOL _shouldShock;
    UIView *_view;
    double _value;
    double _leftValue;
    double _rightValue;
}

@property (retain, nonatomic) UIView *view;
@property (nonatomic) double value;
@property (nonatomic) double leftValue;
@property (nonatomic) double rightValue;
@property (nonatomic) BOOL shouldShock;

- (BOOL)shouldShock;
- (void)setShouldShock:(BOOL)arg0;
- (double)leftValue;
- (void)setLeftValue:(double)arg0;
- (double)rightValue;
- (void)setRightValue:(double)arg0;
- (void).cxx_destruct;
- (double)value;
- (void)setView:(id)arg0;
- (void)setValue:(double)arg0;
- (id)view;

@end
