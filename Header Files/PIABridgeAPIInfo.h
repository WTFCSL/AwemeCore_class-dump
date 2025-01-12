//
//     Generated by private class-dump
//

@class NSString;

@interface PIABridgeAPIInfo : NSObject {
    BOOL _isSynchronous;
    BOOL _isOnMainThread;
    NSString *_APIName;
    id /* block */ _APIHandler;
    long long _version;
}

@property (copy, nonatomic) NSString *APIName;
@property (copy, nonatomic) id /* block */ APIHandler;
@property (nonatomic) long long version;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL isOnMainThread;

+ (id)APIInfoWithName:(id)arg0 version:(long long)arg1 APIHandler:(id /* block */)arg2;
+ (id)APIInfoWithName:(id)arg0 version:(long long)arg1 isSynchronous:(BOOL)arg2 isOnMainThread:(BOOL)arg3 APIHandler:(id /* block */)arg4;

- (id)APIName;
- (void)setIsOnMainThread:(BOOL)arg0;
- (void)setAPIName:(id)arg0;
- (BOOL)isOnMainThread;
- (void)setAPIHandler:(id /* block */)arg0;
- (id)initWithName:(id)arg0 version:(long long)arg1 isSynchronous:(BOOL)arg2 isOnMainThread:(BOOL)arg3 APIHandler:(id /* block */)arg4;
- (id /* block */)APIHandler;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (long long)version;
- (BOOL)isSynchronous;
- (void)setIsSynchronous:(BOOL)arg0;

@end
