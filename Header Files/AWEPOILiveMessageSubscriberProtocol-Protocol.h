//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol AWEPOILiveMessageSubscriberProtocol <NSObject>

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSDictionary *extra;
@property (readonly, copy, nonatomic) NSString *bizId;
@property (readonly, nonatomic) BOOL isGlobalListener;

- (BOOL)onReceiveMessage:(id)arg0;
- (BOOL)isGlobalListener;
- (id)extra;
- (id)eventName;
- (id)bizId;

@end
