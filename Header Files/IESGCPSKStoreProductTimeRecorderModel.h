//
//     Generated by private class-dump
//

@interface IESGCPSKStoreProductTimeRecorderModel : NSObject {
    BOOL _cacheHit;
    double _openTime;
    double _presentTime;
    double _startLoadTime;
    double _finishLoadTime;
}

@property (nonatomic) double openTime;
@property (nonatomic) double presentTime;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double finishLoadTime;
@property (nonatomic) BOOL cacheHit;

- (double)startLoadTime;
- (void)setStartLoadTime:(double)arg0;
- (double)openTime;
- (void)setOpenTime:(double)arg0;
- (void)setFinishLoadTime:(double)arg0;
- (double)finishLoadTime;
- (double)presentTime;
- (void)setPresentTime:(double)arg0;
- (BOOL)cacheHit;
- (void)setCacheHit:(BOOL)arg0;

@end
