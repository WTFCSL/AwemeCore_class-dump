//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProgressDecoratorDotInfoModel : NSObject {
    BOOL _shouldShock;
    double _percentage;
    double _leftMargin;
    double _rightMargin;
    NSString *_descString;
    double _timestamp;
}

@property (nonatomic) double percentage;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (copy, nonatomic) NSString *descString;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL shouldShock;

- (void)setDescString:(id)arg0;
- (id)descString;
- (BOOL)shouldShock;
- (void)setShouldShock:(BOOL)arg0;
- (double)rightMargin;
- (double)timestamp;
- (void).cxx_destruct;
- (void)setLeftMargin:(double)arg0;
- (double)leftMargin;
- (void)setTimestamp:(double)arg0;
- (void)setRightMargin:(double)arg0;
- (double)percentage;
- (void)setPercentage:(double)arg0;

@end
