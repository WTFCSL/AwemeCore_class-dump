//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDataLayerFetchDataToken : NSObject {
    NSString *_tokenId;
    long long _currentState;
    NSString *_dependencyTokenId;
}

@property (copy, nonatomic) NSString *tokenId;
@property (nonatomic) long long currentState;
@property (copy) NSString *dependencyTokenId;

- (void)setTokenId:(id)arg0;
- (id)dependencyTokenId;
- (void)setDependencyTokenId:(id)arg0;
- (void)updateState:(long long)arg0;
- (BOOL)isFinished;
- (void)setCurrentState:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)currentState;
- (void)cancel;
- (BOOL)isCancelled;
- (void)addDependency:(id)arg0;
- (id)tokenId;

@end
