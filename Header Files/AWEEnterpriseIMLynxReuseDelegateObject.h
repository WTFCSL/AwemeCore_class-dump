//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEEnterpriseIMLynxReuseDelegateObjectDelegate;

@interface AWEEnterpriseIMLynxReuseDelegateObject : NSObject <BDLynxViewDelegate, BDLynxViewUIDelegate, BDXContainerLifecycleProtocol> {
    id<AWEEnterpriseIMLynxReuseDelegateObjectDelegate> _delegate;
    NSString *_messageId;
}

@property (weak, nonatomic) id<AWEEnterpriseIMLynxReuseDelegateObjectDelegate> delegate;
@property (copy, nonatomic) NSString *messageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)lynxViewDidStartLoading:(id)arg0;
- (void)lynxViewDidFirstScreen:(id)arg0;
- (void)handleLynxViewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)lynxView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)lynxView:(id)arg0 didFailDownloadWithError:(id)arg1;
- (void)lynxView:(id)arg0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)messageId;
- (void)setMessageId:(id)arg0;

@end
