//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESLiveAnnotationManager : NSObject {
    NSMutableDictionary *_rpcService2nativeService;
}

@property (retain, nonatomic) NSMutableDictionary *rpcService2nativeService;

+ (id)sharedInstance;

- (id)dataWithRoot:(id)arg0;
- (id)getAnnotationModel:(Class)arg0 onRoot:(id)arg1 withKey:(id)arg2;
- (id)rpcService2nativeService;
- (void)setRpcService2nativeService:(id)arg0;
- (void).cxx_destruct;

@end