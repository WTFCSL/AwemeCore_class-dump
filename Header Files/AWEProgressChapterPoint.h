//
//     Generated by private class-dump
//

@class NSString, UIImageView;

@interface AWEProgressChapterPoint : NSObject {
    BOOL _shouldShock;
    double _offset;
    double _timestamp;
    double _leftSide;
    double _rightSide;
    NSString *_descString;
    UIImageView *_pointView;
}

@property (nonatomic) double offset;
@property (nonatomic) double timestamp;
@property (nonatomic) double leftSide;
@property (nonatomic) double rightSide;
@property (copy, nonatomic) NSString *descString;
@property (retain, nonatomic) UIImageView *pointView;
@property (nonatomic) BOOL shouldShock;

- (id)pointView;
- (void)setPointView:(id)arg0;
- (void)setDescString:(id)arg0;
- (id)descString;
- (BOOL)shouldShock;
- (double)leftSide;
- (void)setLeftSide:(double)arg0;
- (double)rightSide;
- (void)setRightSide:(double)arg0;
- (void)setShouldShock:(BOOL)arg0;
- (double)timestamp;
- (void).cxx_destruct;
- (void)setOffset:(double)arg0;
- (double)offset;
- (void)setTimestamp:(double)arg0;

@end