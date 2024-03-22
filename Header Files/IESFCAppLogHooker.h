//
//     Generated by private class-dump
//

@class NSDictionary;

@interface IESFCAppLogHooker : NSObject {
    BOOL _enableHook;
    NSDictionary *_eventMap;
}

@property (nonatomic) BOOL enableHook;
@property (retain, nonatomic) NSDictionary *eventMap;

+ (void)hookAppLogEvents;
+ (id)sharedInstance;

- (void)onEventV3:(id)arg0 parameter:(id)arg1;
- (BOOL)enableHook;
- (id)eventMap;
- (void)setEventMap:(id)arg0;
- (id)buildEventMap;
- (void)hookAppLogEvents;
- (void)setEnableHook:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end