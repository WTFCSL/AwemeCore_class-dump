//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESECLiveDispatchEventBase : NSObject <IESECLiveDispatchEvent> {
    NSDictionary *eventData;
    NSString *eventName;
    long long type;
}

@property (retain, nonatomic) NSDictionary *eventData;
@property (copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventData;
- (void).cxx_destruct;
- (long long)type;
- (void)setEventName:(id)arg0;
- (id)eventName;
- (void)setEventData:(id)arg0;

@end
