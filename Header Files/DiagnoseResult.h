//
//     Generated by private class-dump
//

@interface DiagnoseResult : NSObject {
    int _maxValue;
    int _avgValue;
    int _overCount;
}

@property (nonatomic) int maxValue;
@property (nonatomic) int avgValue;
@property (nonatomic) int overCount;

- (int)overCount;
- (void)setAvgValue:(int)arg0;
- (void)setOverCount:(int)arg0;
- (int)maxValue;
- (id)description;
- (void)setMaxValue:(int)arg0;
- (int)avgValue;

@end
