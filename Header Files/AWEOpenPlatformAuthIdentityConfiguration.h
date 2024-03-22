//
//     Generated by private class-dump
//

@class NSArray, BDPlatformAuthParamsModel, AWEOpenPlatformAuthFlowManager;
@protocol AWEOpenAuthInfoScopeLevelItemDataProtocol;

@interface AWEOpenPlatformAuthIdentityConfiguration : NSObject {
    AWEOpenPlatformAuthFlowManager *_flowManager;
    NSArray *_scopeItems;
    id<AWEOpenAuthInfoScopeLevelItemDataProtocol> _scopeModel;
    unsigned long long _scopeType;
    BDPlatformAuthParamsModel *_authParamsModel;
    unsigned long long _authScene;
    id /* block */ _bridgeAuthCompletionBlock;
}

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (copy, nonatomic) NSArray *scopeItems;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeLevelItemDataProtocol> scopeModel;
@property (nonatomic) unsigned long long scopeType;
@property (retain, nonatomic) BDPlatformAuthParamsModel *authParamsModel;
@property (nonatomic) unsigned long long authScene;
@property (copy, nonatomic) id /* block */ bridgeAuthCompletionBlock;

- (void)setAuthScene:(unsigned long long)arg0;
- (unsigned long long)authScene;
- (id)scopeItems;
- (void)setScopeItems:(id)arg0;
- (id)scopeModel;
- (void)setScopeModel:(id)arg0;
- (id)authParamsModel;
- (void)setAuthParamsModel:(id)arg0;
- (id /* block */)bridgeAuthCompletionBlock;
- (void)setBridgeAuthCompletionBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (void)setScopeType:(unsigned long long)arg0;
- (id)flowManager;
- (void)setFlowManager:(id)arg0;

@end
