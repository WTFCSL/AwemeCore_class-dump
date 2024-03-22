//
//     Generated by private class-dump
//

@class NSString;
@protocol WKURLSchemeTask;

@interface BDWebURLSchemeTaskProxy : NSObject <BDWebURLSchemeTaskDelegate> {
    BOOL _stopped;
    id<WKURLSchemeTask> _target;
}

@property BOOL stopped;
@property (weak, nonatomic) id<WKURLSchemeTask> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)schemeTaskRedirectionSelector;

- (void)URLSchemeTask:(id)arg0 didFailWithError:(id)arg1;
- (void)URLSchemeTask:(id)arg0 didLoadData:(id)arg1;
- (void)URLSchemeTaskDidFinishLoading:(id)arg0;
- (void)URLSchemeTask:(id)arg0 didReceiveResponse:(id)arg1;
- (void)URLSchemeTask:(id)arg0 didPerformRedirection:(id)arg1 newRequest:(id)arg2;
- (void)webView:(id)arg0 willRecordMainFrameModel:(id)arg1;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setTarget:(id)arg0;
- (id)target;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)setStopped:(BOOL)arg0;
- (BOOL)stopped;

@end
