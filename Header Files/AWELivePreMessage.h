//
//     Generated by private class-dump
//

@class NSString;

@interface AWELivePreMessage : MTLModel <MTLJSONSerializing> {
    long long _messageType;
}

@property (nonatomic) long long messageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)messageType;
- (void)setMessageType:(long long)arg0;

@end