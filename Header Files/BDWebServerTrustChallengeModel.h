//
//     Generated by private class-dump
//

@class NSURLAuthenticationChallenge;

@interface BDWebServerTrustChallengeModel : NSObject {
    NSURLAuthenticationChallenge *_challenge;
    id /* block */ _challengeCompletion;
    id /* block */ _ttnetCompletion;
}

@property (retain, nonatomic) NSURLAuthenticationChallenge *challenge;
@property (copy, nonatomic) id /* block */ challengeCompletion;
@property (copy, nonatomic) id /* block */ ttnetCompletion;

- (id /* block */)challengeCompletion;
- (void)setChallengeCompletion:(id /* block */)arg0;
- (id /* block */)ttnetCompletion;
- (void)setTtnetCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)challenge;
- (void)setChallenge:(id)arg0;

@end
