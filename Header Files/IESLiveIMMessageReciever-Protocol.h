//
//     Generated by private class-dump
//

@protocol IESLiveIMMessageReciever <NSObject>

@property (retain, nonatomic) id<IESLiveIMMessageReciever> nextReceiver;

- (void)didRecieveMessages:(id)arg0;

@optional

- (void)setNextReceiver:(id)arg0;
- (void)didRecievePacket:(id)arg0;
- (id)nextReceiver;

@end