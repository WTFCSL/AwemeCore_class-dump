//
//     Generated by private class-dump
//

@class HTSLiveMessageListFilter, NSString;

@interface IESLivePSScreenShareViewModel : IESLivePublicScreenViewModel <HTSLiveMessageSubscriber> {
    HTSLiveMessageListFilter *_messageFilter;
}

@property (retain, nonatomic) HTSLiveMessageListFilter *messageFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)messageFilter;
- (void)setMessageFilter:(id)arg0;
- (id)initWithInfoModel:(id)arg0 room:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (id)setupAdapterUpdater;
- (id)setupNodeManagerWithRefreshConfig:(id)arg0;
- (void)addSubscriberForMessages;
- (void)nativeGiftEndWith:(id)arg0;
- (void)p_filterMessage:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;
- (void)handleMessages:(id)arg0;

@end
