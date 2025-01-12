//
//     Generated by private class-dump
//

@protocol BDBCGeckoConfigProtocol;

@interface BDBCGeckoService : NSObject {
    BOOL _isGeckoReady;
    id<BDBCGeckoConfigProtocol> _config;
}

@property (retain, nonatomic) id<BDBCGeckoConfigProtocol> config;
@property (nonatomic) BOOL isGeckoReady;

+ (id)sharedInstance;

- (void)setupServiceConfig:(id)arg0;
- (void)syncGecko;
- (void)setupGeckoIfNeed;
- (void)setIsGeckoReady:(BOOL)arg0;
- (id)geckoFilePathWithFileName:(id)arg0 channel:(id)arg1;
- (void)loadGeckoResourceForPath:(id)arg0 channel:(id)arg1 completion:(id /* block */)arg2;
- (id)geckoConfig;
- (id)geckoRootDir;
- (id)geckoFilePathWithFileName:(id)arg0;
- (void)loadGeckoResourceForPath:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isGeckoReady;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)dealloc;

@end
