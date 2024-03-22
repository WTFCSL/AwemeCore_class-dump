//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIHalfScreenContainerParameters : NSObject {
    BOOL _fromLive;
    BOOL _isLiveFloatUserClosed;
    BOOL _disableDragFull;
    BOOL _useHalfHeight;
    BOOL _enableAccessibility;
    BOOL _delayShow;
    BOOL _supportFullToHalf;
    BOOL _fixedToFull;
    BOOL _fixedToHalf;
    float _halfRatio;
    NSString *_liveWindowRoomID;
    NSString *_nearbySessionId;
}

@property (nonatomic) float halfRatio;
@property (copy, nonatomic) NSString *liveWindowRoomID;
@property (nonatomic) BOOL fromLive;
@property (nonatomic) BOOL isLiveFloatUserClosed;
@property (nonatomic) BOOL disableDragFull;
@property (nonatomic) BOOL useHalfHeight;
@property (nonatomic, getter=isEnableAccessibility) BOOL enableAccessibility;
@property (nonatomic) BOOL delayShow;
@property (nonatomic) BOOL supportFullToHalf;
@property (nonatomic) BOOL fixedToFull;
@property (nonatomic) BOOL fixedToHalf;
@property (copy, nonatomic) NSString *nearbySessionId;

- (BOOL)fromLive;
- (BOOL)fixedToHalf;
- (void)setFixedToHalf:(BOOL)arg0;
- (void)setFromLive:(BOOL)arg0;
- (float)halfRatio;
- (void)setSupportFullToHalf:(BOOL)arg0;
- (void)setNearbySessionId:(id)arg0;
- (BOOL)isLiveFloatUserClosed;
- (id)liveWindowRoomID;
- (void)setIsLiveFloatUserClosed:(BOOL)arg0;
- (id)nearbySessionId;
- (void)setLiveWindowRoomID:(id)arg0;
- (BOOL)supportFullToHalf;
- (void)setHalfRatio:(float)arg0;
- (void)setDisableDragFull:(BOOL)arg0;
- (void)setUseHalfHeight:(BOOL)arg0;
- (void)setDelayShow:(BOOL)arg0;
- (void)setEnableAccessibility:(BOOL)arg0;
- (BOOL)delayShow;
- (BOOL)disableDragFull;
- (BOOL)fixedToFull;
- (BOOL)useHalfHeight;
- (BOOL)isEnableAccessibility;
- (void)setFixedToFull:(BOOL)arg0;
- (void).cxx_destruct;

@end
