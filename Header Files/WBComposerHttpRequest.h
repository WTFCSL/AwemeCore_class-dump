//
//     Generated by private class-dump
//

@interface WBComposerHttpRequest : WBHttpRequest

+ (id)requestWithURL:(id)arg0 httpMethod:(id)arg1 params:(id)arg2 delegate:(id)arg3 withTag:(id)arg4;
+ (id)serializeURL:(id)arg0 params:(id)arg1 httpMethod:(id)arg2;

- (id)initWithURL:(id)arg0 httpMethod:(id)arg1 params:(id)arg2 delegate:(id)arg3 withTag:(id)arg4;
- (void)setHttpHeaderForRequest:(id)arg0;
- (id)postBodyHasRawData:(BOOL *)arg0;

@end