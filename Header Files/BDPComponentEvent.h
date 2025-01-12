//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDPComponentEvent : NSObject {
    NSString *_eventName;
    NSDictionary *_params;
    long long _componentId;
}

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long componentId;

- (long long)componentId;
- (void)setComponentId:(long long)arg0;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (id)params;
- (id)eventName;
- (void)setParams:(id)arg0;

@end
