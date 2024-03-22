//
//     Generated by private class-dump
//

@interface ACCScanModeTrackIdPerformanceTimestamp : NSObject {
    BOOL _shootScanRealityDurationHasTrack;
    BOOL _fectchTagTimestampHasTrack;
    BOOL _showDotTimestampHasTrack;
    BOOL _showTagTimestampHasTrack;
    unsigned long long _trackIdInitTimestamp;
    unsigned long long _trackIdFectchTagTimestamp;
    unsigned long long _trackIdShowDotTimestamp;
    unsigned long long _trackIdShowTagTimestamp;
}

@property (nonatomic) unsigned long long trackIdInitTimestamp;
@property (nonatomic) unsigned long long trackIdFectchTagTimestamp;
@property (nonatomic) unsigned long long trackIdShowDotTimestamp;
@property (nonatomic) unsigned long long trackIdShowTagTimestamp;
@property (nonatomic) BOOL shootScanRealityDurationHasTrack;
@property (nonatomic) BOOL fectchTagTimestampHasTrack;
@property (nonatomic) BOOL showDotTimestampHasTrack;
@property (nonatomic) BOOL showTagTimestampHasTrack;

- (BOOL)shootScanRealityDurationHasTrack;
- (void)setShootScanRealityDurationHasTrack:(BOOL)arg0;
- (unsigned long long)trackIdInitTimestamp;
- (BOOL)fectchTagTimestampHasTrack;
- (void)setFectchTagTimestampHasTrack:(BOOL)arg0;
- (void)setTrackIdFectchTagTimestamp:(unsigned long long)arg0;
- (BOOL)showDotTimestampHasTrack;
- (void)setShowDotTimestampHasTrack:(BOOL)arg0;
- (void)setTrackIdShowDotTimestamp:(unsigned long long)arg0;
- (BOOL)showTagTimestampHasTrack;
- (void)setShowTagTimestampHasTrack:(BOOL)arg0;
- (void)setTrackIdShowTagTimestamp:(unsigned long long)arg0;
- (unsigned long long)trackIdFectchTagTimestamp;
- (void)setTrackIdInitTimestamp:(unsigned long long)arg0;
- (unsigned long long)trackIdShowDotTimestamp;
- (unsigned long long)trackIdShowTagTimestamp;

@end
