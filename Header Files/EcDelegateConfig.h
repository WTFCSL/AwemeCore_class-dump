//
//     Generated by private class-dump
//

@protocol EcHeimdallrProtocol, EcReachabilityChangedProtocol, EcCoverFetchProtocol, EcUserChangeProtocol, EcTeaProtocol, EcLogProtocol, EcTokenFetchProtocol;

@interface EcDelegateConfig : NSObject {
    id<EcTeaProtocol> _teaDelegate;
    id<EcHeimdallrProtocol> _heimDelegate;
    id<EcLogProtocol> _logDelegate;
    id<EcReachabilityChangedProtocol> _reachabilityDelegate;
    id<EcTokenFetchProtocol> _tokenFetchDelegate;
    id<EcCoverFetchProtocol> _coverFetchDelegate;
    id<EcUserChangeProtocol> _userChangeDelegate;
}

@property (weak, nonatomic) id<EcTeaProtocol> teaDelegate;
@property (weak, nonatomic) id<EcHeimdallrProtocol> heimDelegate;
@property (weak, nonatomic) id<EcLogProtocol> logDelegate;
@property (weak, nonatomic) id<EcReachabilityChangedProtocol> reachabilityDelegate;
@property (weak, nonatomic) id<EcTokenFetchProtocol> tokenFetchDelegate;
@property (weak, nonatomic) id<EcCoverFetchProtocol> coverFetchDelegate;
@property (weak, nonatomic) id<EcUserChangeProtocol> userChangeDelegate;

- (void)setLogDelegate:(id)arg0;
- (id)logDelegate;
- (id)userChangeDelegate;
- (id)tokenFetchDelegate;
- (id)coverFetchDelegate;
- (id)teaDelegate;
- (id)heimDelegate;
- (void)setTokenFetchDelegate:(id)arg0;
- (void)setTeaDelegate:(id)arg0;
- (void)setHeimDelegate:(id)arg0;
- (void)setCoverFetchDelegate:(id)arg0;
- (void)setUserChangeDelegate:(id)arg0;
- (void).cxx_destruct;
- (id)reachabilityDelegate;
- (void)setReachabilityDelegate:(id)arg0;

@end
