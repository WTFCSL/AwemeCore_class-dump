//
//     Generated by private class-dump
//

@interface AWELeftSideBarViewControllerTrackModel : NSObject {
    BOOL _isSlideWhileShow;
    BOOL _isClickWhileShow;
    double _openTimeInterval;
    double _willResignActiveTimeInterval;
    double _unActiveTimeInterval;
    double _latestTimeInterval;
    double _durationTimeInterval;
}

@property (nonatomic) BOOL isSlideWhileShow;
@property (nonatomic) BOOL isClickWhileShow;
@property (nonatomic) double openTimeInterval;
@property (nonatomic) double willResignActiveTimeInterval;
@property (nonatomic) double unActiveTimeInterval;
@property (nonatomic) double latestTimeInterval;
@property (nonatomic) double durationTimeInterval;

- (BOOL)isClickWhileShow;
- (void)setIsClickWhileShow:(BOOL)arg0;
- (void)setLatestTimeInterval:(double)arg0;
- (double)latestTimeInterval;
- (void)setDurationTimeInterval:(double)arg0;
- (void)setWillResignActiveTimeInterval:(double)arg0;
- (double)willResignActiveTimeInterval;
- (double)unActiveTimeInterval;
- (void)setUnActiveTimeInterval:(double)arg0;
- (BOOL)isSlideWhileShow;
- (void)setIsSlideWhileShow:(BOOL)arg0;
- (double)openTimeInterval;
- (void)setOpenTimeInterval:(double)arg0;
- (double)durationTimeInterval;

@end
