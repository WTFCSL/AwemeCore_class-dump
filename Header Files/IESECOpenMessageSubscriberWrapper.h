//
//     Generated by private class-dump
//

@class NSString;
@protocol IESECOpenMessageSubscriber;

@interface IESECOpenMessageSubscriberWrapper : NSObject <IESECLiveMessageSubscriber> {
    id<IESECOpenMessageSubscriber> _target;
}

@property (weak, nonatomic) id<IESECOpenMessageSubscriber> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithTarget:(id)arg0;

- (void).cxx_destruct;
- (void)setTarget:(id)arg0;
- (id)target;
- (void)messageReceived:(id)arg0;

@end
