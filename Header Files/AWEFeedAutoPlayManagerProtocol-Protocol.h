//
//     Generated by private class-dump
//

@protocol AWEFeedAutoPlayManagerProtocol <NSObject>

@property (readonly, nonatomic) long long autoPlayState;
@property (copy, nonatomic) id /* block */ userInteractFilterBlock;

- (BOOL)autoNextFilterWithAweme:(id)arg0 context:(id)arg1;
- (void)setUserInteractFilterBlock:(id /* block */)arg0;
- (BOOL)userInteractFilter;
- (void)updateAutoPlayState:(long long)arg0;
- (id /* block */)userInteractFilterBlock;
- (long long)autoPlayState;

@end
