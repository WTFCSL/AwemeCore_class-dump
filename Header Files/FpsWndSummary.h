//
//     Generated by private class-dump
//

@interface FpsWndSummary : NSObject {
    int _minus1FpsCount;
    int _minus3FpsCount;
    int _totalCount;
    double _avgPreviewFps;
}

@property (nonatomic) double avgPreviewFps;
@property (nonatomic) int minus1FpsCount;
@property (nonatomic) int minus3FpsCount;
@property (nonatomic) int totalCount;

- (double)avgPreviewFps;
- (void)setAvgPreviewFps:(double)arg0;
- (int)minus1FpsCount;
- (void)setMinus1FpsCount:(int)arg0;
- (int)minus3FpsCount;
- (void)setMinus3FpsCount:(int)arg0;
- (int)totalCount;
- (void)setTotalCount:(int)arg0;

@end