//
//     Generated by private class-dump
//

@interface HMDNetworkInjector : NSObject {
    id /* block */ _injectedEncryptBlock;
}

@property (copy) id /* block */ injectedEncryptBlock;

+ (id)sharedInstance;

- (id /* block */)encryptBlock;
- (void)setInjectedEncryptBlock:(id /* block */)arg0;
- (id /* block */)injectedEncryptBlock;
- (void)configEncryptBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end