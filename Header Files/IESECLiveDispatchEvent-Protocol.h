//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@protocol IESECLiveDispatchEvent <NSObject>

@property (retain, nonatomic) NSDictionary *eventData;
@property (copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) long long type;

- (id)eventData;
- (long long)type;
- (void)setEventName:(id)arg0;
- (id)eventName;
- (void)setEventData:(id)arg0;

@end