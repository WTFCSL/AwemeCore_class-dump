//
//     Generated by private class-dump
//

@class NSString, BDXContext;
@protocol AnnieXCardModelProtocol, BDXPrefetchConfigLoader, BDXBridgeNetworkServiceProtocol;

@interface BDXPrefetchDataConfig : NSObject {
    id<BDXPrefetchConfigLoader> _configLoader;
    NSString *_accessKey;
    unsigned long long _fromType;
    id<BDXBridgeNetworkServiceProtocol> _networkService;
    BDXContext *_context;
    id<AnnieXCardModelProtocol> _cardModel;
}

@property (retain, nonatomic) id<BDXPrefetchConfigLoader> configLoader;
@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) unsigned long long fromType;
@property (retain, nonatomic) id<BDXBridgeNetworkServiceProtocol> networkService;
@property (retain, nonatomic) BDXContext *context;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;

- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)configLoader;
- (void)setConfigLoader:(id)arg0;
- (id)networkService;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setNetworkService:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (unsigned long long)fromType;
- (void)setFromType:(unsigned long long)arg0;

@end
