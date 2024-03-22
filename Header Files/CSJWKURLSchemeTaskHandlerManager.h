//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface CSJWKURLSchemeTaskHandlerManager : NSObject {
    NSMutableDictionary *_handlerDic;
    long long _count;
}

@property (retain, nonatomic) NSMutableDictionary *handlerDic;
@property (nonatomic) long long count;

+ (id)sharedInstance;
+ (void)webView:(id)arg0 stopURLSchemeTask:(id)arg1;
+ (void)webView:(id)arg0 startURLSchemeTask:(id)arg1;

- (id)handlerDic;
- (id)p_handlerKey:(id)arg0 task:(id)arg1;
- (void)setHandlerDic:(id)arg0;
- (void)setCount:(long long)arg0;
- (id)init;
- (void)webView:(id)arg0 stopURLSchemeTask:(id)arg1;
- (void).cxx_destruct;
- (long long)count;
- (void)webView:(id)arg0 startURLSchemeTask:(id)arg1;

@end