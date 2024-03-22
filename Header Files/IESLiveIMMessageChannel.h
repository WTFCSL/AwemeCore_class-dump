//
//     Generated by private class-dump
//

@class IESLiveIMExtraTransport, NSString;
@protocol IESLiveIMChannelDelegate, IESLiveIMTransport;

@interface IESLiveIMMessageChannel : IESLiveIMBaseChannel <IESLiveIMMessageChannel> {
    IESLiveIMExtraTransport *_extraLink;
}

@property (retain, nonatomic) IESLiveIMExtraTransport *extraLink;
@property (retain, nonatomic) id<IESLiveIMTransport> currentTransport;
@property (weak, nonatomic) id<IESLiveIMChannelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)arg0;
- (void)switchTransportWithRule:(long long)arg0;
- (void)openLongLink;
- (id)extraLink;
- (void)setExtraLink:(id)arg0;
- (void).cxx_destruct;
- (void)open;
- (void)close;

@end