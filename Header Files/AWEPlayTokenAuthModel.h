//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPlayTokenAuthModel : AWEBaseApiModel {
    NSString *_vid;
    NSString *_token;
    NSString *_auth;
    NSString *_tvToken;
    NSString *_playAuthToken;
    NSArray *_hosts;
}

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *auth;
@property (copy, nonatomic) NSString *tvToken;
@property (copy, nonatomic) NSString *playAuthToken;
@property (copy, nonatomic) NSArray *hosts;

+ (id)JSONKeyPathsByPropertyKey;

- (id)vid;
- (void)setVid:(id)arg0;
- (id)tvToken;
- (void)setTvToken:(id)arg0;
- (id)playAuthToken;
- (void)setPlayAuthToken:(id)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (id)hosts;
- (void)setHosts:(id)arg0;
- (id)auth;
- (void)setAuth:(id)arg0;

@end