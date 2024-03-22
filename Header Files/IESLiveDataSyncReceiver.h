//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveWRDSMessageSubscriber, IESLiveIMMessageReciever;

@interface IESLiveDataSyncReceiver : NSObject <IESLiveIMMessageReciever> {
    id<IESLiveIMMessageReciever> nextReceiver;
    id<IESLiveWRDSMessageSubscriber> _subscriber;
    Class _syncDataClass;
}

@property (weak, nonatomic) id<IESLiveWRDSMessageSubscriber> subscriber;
@property (retain, nonatomic) Class syncDataClass;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> nextReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSyncDataClass:(Class)arg0;
- (void)setNextReceiver:(id)arg0;
- (void)didRecieveMessages:(id)arg0;
- (void)didRecievePacket:(id)arg0;
- (id)nextReceiver;
- (void).cxx_destruct;
- (id)subscriber;
- (void)setSubscriber:(id)arg0;
- (Class)syncDataClass;

@end