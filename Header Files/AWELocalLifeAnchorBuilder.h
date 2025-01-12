//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWEAwemeModel;
@protocol AWEPOIPlayInteractionVCManagerProtocol;

@interface AWELocalLifeAnchorBuilder : NSObject {
    AWEAwemeModel *_aweme;
    NSDictionary *_logExtra;
    NSString *_referString;
    id<AWEPOIPlayInteractionVCManagerProtocol> _playerManager;
    long long _scene;
}

@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (readonly, copy, nonatomic) NSDictionary *logExtra;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> playerManager;
@property (readonly, nonatomic) long long scene;

- (id)referString;
- (id)logExtra;
- (id)aweme;
- (id)playerManager;
- (id /* block */)setAweme;
- (id /* block */)setLogExtra;
- (id /* block */)setScene;
- (id /* block */)setReferString;
- (id /* block */)setPlayerManager;
- (id)init;
- (void).cxx_destruct;
- (long long)scene;

@end
