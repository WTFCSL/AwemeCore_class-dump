//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGDHalfContainerParams : HalfContainerParams {
    BOOL _isFirstTimeReload;
    BOOL _isDismissing;
    BOOL _notFirstTime;
    BOOL _isArriving;
    BOOL _isLiveFloatUserClosed;
    BOOL _fromLive;
    BOOL _isFromNearbySecondJump;
    BOOL _initFullType;
    double _topOffset;
    double _baseOffset;
    long long _closeType;
    NSString *_nearbySessionId;
    NSString *_liveWindowRoomID;
}

@property (nonatomic) BOOL isFirstTimeReload;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL notFirstTime;
@property (nonatomic) BOOL isArriving;
@property (nonatomic) BOOL isLiveFloatUserClosed;
@property (nonatomic) BOOL fromLive;
@property (nonatomic) BOOL isFromNearbySecondJump;
@property (nonatomic) BOOL initFullType;
@property (nonatomic) double topOffset;
@property (nonatomic) double baseOffset;
@property (nonatomic) long long closeType;
@property (copy, nonatomic) NSString *nearbySessionId;
@property (copy, nonatomic) NSString *liveWindowRoomID;

- (long long)closeType;
- (void)setCloseType:(long long)arg0;
- (void)updateParams:(id)arg0;
- (BOOL)fromLive;
- (void)setFromLive:(BOOL)arg0;
- (void)setNearbySessionId:(id)arg0;
- (void)setBaseOffset:(double)arg0;
- (BOOL)initFullType;
- (BOOL)notFirstTime;
- (void)setNotFirstTime:(BOOL)arg0;
- (BOOL)isFromNearbySecondJump;
- (BOOL)isFirstTimeReload;
- (void)setIsFirstTimeReload:(BOOL)arg0;
- (BOOL)isLiveFloatUserClosed;
- (id)liveWindowRoomID;
- (void)setIsLiveFloatUserClosed:(BOOL)arg0;
- (void)setIsArriving:(BOOL)arg0;
- (BOOL)isArriving;
- (id)nearbySessionId;
- (void)setIsFromNearbySecondJump:(BOOL)arg0;
- (void)setLiveWindowRoomID:(id)arg0;
- (void)setInitFullType:(BOOL)arg0;
- (double)topOffset;
- (void)setTopOffset:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (double)baseOffset;
- (void)setIsDismissing:(BOOL)arg0;
- (unsigned long long)containerType;

@end
