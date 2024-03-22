//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEPayPaymentCodeInnerPushManager : NSObject {
    BOOL _notiRegistered;
    NSMutableDictionary *_proxyMap;
}

@property (retain, nonatomic) NSMutableDictionary *proxyMap;
@property (nonatomic) BOOL notiRegistered;

+ (id)manager;

- (void)onFrontierMessageReceived:(id)arg0;
- (BOOL)notiRegistered;
- (void)setNotiRegistered:(BOOL)arg0;
- (id)proxyMap;
- (void)addObserver:(id)arg0 msgType:(id)arg1 callback:(id /* block */)arg2;
- (void)removeObserver:(id)arg0 msgType:(id)arg1;
- (void)setProxyMap:(id)arg0;
- (void).cxx_destruct;

@end
