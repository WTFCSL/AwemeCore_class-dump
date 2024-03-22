//
//     Generated by private class-dump
//

@interface IESLivePlayerMiddlewarePropertyContainer : NSObject {
    BOOL _isEnqueuingReusedRoom;
    BOOL _smoothSwitching;
    BOOL _headTrackingHasSet;
    unsigned long long _generateStageType;
}

@property (nonatomic) unsigned long long generateStageType;
@property (nonatomic) BOOL isEnqueuingReusedRoom;
@property (nonatomic) BOOL smoothSwitching;
@property (nonatomic) BOOL headTrackingHasSet;

- (BOOL)smoothSwitching;
- (BOOL)headTrackingHasSet;
- (void)setHeadTrackingHasSet:(BOOL)arg0;
- (void)setSmoothSwitching:(BOOL)arg0;
- (void)setGenerateStageType:(unsigned long long)arg0;
- (BOOL)isEnqueuingReusedRoom;
- (void)setIsEnqueuingReusedRoom:(BOOL)arg0;
- (unsigned long long)generateStageType;
- (id)init;

@end