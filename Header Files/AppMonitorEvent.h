//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AppMonitorEvent : NSObject {
    NSString *_module;
    NSString *_monitorPoint;
    NSString *_eventId;
    NSDictionary *_extraInfo;
}

@property (retain, nonatomic) NSString *module;
@property (retain, nonatomic) NSString *monitorPoint;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (id)initWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2;
- (id)monitorPoint;
- (id)initWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3;
- (void)setMonitorPoint:(id)arg0;
- (void).cxx_destruct;
- (id)jsonDict;
- (id)module;
- (void)setModule:(id)arg0;
- (id)eventId;
- (void)setEventId:(id)arg0;
- (id)extraInfo;

@end
