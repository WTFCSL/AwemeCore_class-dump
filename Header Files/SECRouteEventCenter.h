//
//     Generated by private class-dump
//

@class SECEventCenter;

@interface SECRouteEventCenter : NSObject {
    SECEventCenter *_eventCenter;
}

@property (retain, nonatomic) SECEventCenter *eventCenter;

+ (void)publishEvent:(id)arg0;
+ (void)registerSubscriber:(id)arg0 forEventType:(id)arg1;
+ (id)shared;

- (void)publishEvent:(id)arg0;
- (id)eventCenter;
- (void)registerSubscriber:(id)arg0 forEventType:(id)arg1;
- (void)setEventCenter:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
