//
//     Generated by private class-dump
//

@class NSHashTable;

@interface AWEEnergyConsumeSubIndexMonitor : NSObject {
    BOOL _enableAniCountTrack;
    BOOL _enableDisplaylinkCountTrack;
    BOOL _enableLocationTimeTrack;
    NSHashTable *_BDPlayers;
    NSHashTable *_LOTViews;
    NSHashTable *_displayLinks;
    double _calculateLocationDuration;
    double _lastLocationStartTime;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSHashTable *BDPlayers;
@property (retain, nonatomic) NSHashTable *LOTViews;
@property (retain, nonatomic) NSHashTable *displayLinks;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) double calculateLocationDuration;
@property (nonatomic) double lastLocationStartTime;
@property (nonatomic) BOOL enableAniCountTrack;
@property (nonatomic) BOOL enableDisplaylinkCountTrack;
@property (nonatomic) BOOL enableLocationTimeTrack;

+ (id)shared;

- (void)clearLocationDuration;
- (double)locationDuration;
- (BOOL)enableAniCountTrack;
- (id)BDPlayers;
- (id)LOTViews;
- (BOOL)enableDisplaylinkCountTrack;
- (id)displayLinks;
- (BOOL)enableLocationTimeTrack;
- (double)lastLocationStartTime;
- (void)setLastLocationStartTime:(double)arg0;
- (double)calculateLocationDuration;
- (void)setCalculateLocationDuration:(double)arg0;
- (void)addBDPlayer:(id)arg0;
- (void)removeBDPlayer:(id)arg0;
- (void)addLOTView:(id)arg0;
- (void)removeLOTView:(id)arg0;
- (long long)BDAnimationsCount;
- (long long)lottieAnimationsCount;
- (void)setDisplayLink:(id)arg0 target:(id)arg1 selector:(SEL)arg2;
- (void)updateDisplayLinkInfo;
- (long long)runDisplayLinkCount;
- (long long)pauseDisplayLinkCount;
- (long long)displayLinkRunCount:(long long *)arg0 pauseCount:(long long *)arg1;
- (void)recordLocationStart;
- (void)recordLocationEnd;
- (void)setEnableAniCountTrack:(BOOL)arg0;
- (void)setEnableDisplaylinkCountTrack:(BOOL)arg0;
- (void)setEnableLocationTimeTrack:(BOOL)arg0;
- (void)setBDPlayers:(id)arg0;
- (void)setLOTViews:(id)arg0;
- (void)setDisplayLinks:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })lock;
- (void)dealloc;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;

@end