//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface TTBridgeRegisterMaker : NSObject {
    unsigned long long _authTypeValue;
    NSString *_pluginNameValue;
    NSString *_bridgeNameValue;
    long long _engineTypeValue;
    NSArray *_privateDomainsValue;
    id /* block */ _handlerValue;
    id /* block */ _handlerWithCommandValue;
    NSDictionary *_extraInfoValue;
}

@property (nonatomic) unsigned long long authTypeValue;
@property (copy, nonatomic) NSString *pluginNameValue;
@property (copy, nonatomic) NSString *bridgeNameValue;
@property (nonatomic) long long engineTypeValue;
@property (copy, nonatomic) NSArray *privateDomainsValue;
@property (copy, nonatomic) id /* block */ handlerValue;
@property (copy, nonatomic) id /* block */ handlerWithCommandValue;
@property (copy, nonatomic) NSDictionary *extraInfoValue;
@property (readonly, copy, nonatomic) id /* block */ authType;
@property (readonly, copy, nonatomic) id /* block */ pluginName;
@property (readonly, copy, nonatomic) id /* block */ bridgeName;
@property (readonly, copy, nonatomic) id /* block */ engineType;
@property (readonly, copy, nonatomic) id /* block */ privateDomains;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) id /* block */ handlerWithCommand;
@property (readonly, copy, nonatomic) id /* block */ extraInfo;

- (void)setPluginNameValue:(id)arg0;
- (void)setBridgeNameValue:(id)arg0;
- (void)setHandlerValue:(id /* block */)arg0;
- (id)pluginNameValue;
- (id)bridgeNameValue;
- (id /* block */)handlerValue;
- (id /* block */)bridgeName;
- (id /* block */)privateDomains;
- (id /* block */)handlerWithCommand;
- (void)setAuthTypeValue:(unsigned long long)arg0;
- (void)setEngineTypeValue:(long long)arg0;
- (void)setPrivateDomainsValue:(id)arg0;
- (void)setHandlerWithCommandValue:(id /* block */)arg0;
- (void)setExtraInfoValue:(id)arg0;
- (unsigned long long)authTypeValue;
- (long long)engineTypeValue;
- (id)privateDomainsValue;
- (id /* block */)handlerWithCommandValue;
- (id)extraInfoValue;
- (id /* block */)engineType;
- (void).cxx_destruct;
- (id /* block */)authType;
- (id /* block */)handler;
- (id /* block */)pluginName;
- (id /* block */)extraInfo;

@end
