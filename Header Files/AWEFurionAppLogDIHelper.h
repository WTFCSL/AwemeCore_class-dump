//
//     Generated by private class-dump
//

@protocol AWETrackingService;

@interface AWEFurionAppLogDIHelper : NSObject <FurionAppLogDIHelper> {
    id<AWETrackingService> _trackingService;
}

@property (weak, nonatomic) id<AWETrackingService> trackingService;

- (void)trackEvent:(id)arg0 withParams:(id)arg1;
- (id)trackingService;
- (void)setTrackingService:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
