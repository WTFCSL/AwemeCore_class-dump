//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelWebScriptMessageHandlerProxy : NSProxy <WKScriptMessageHandler> {
    id _object;
}

@property (weak, nonatomic) id object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weakProxy:(id)arg0;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id)object;
- (id)initWithObject:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)setObject:(id)arg0;

@end
