//
//     Generated by private class-dump
//

@protocol IESLiveLayoutViewProvider;

@protocol IESLiveLayoutScene <NSObject>

@property (weak, nonatomic) id<IESLiveLayoutViewProvider> provider;

- (void)layoutPluginIfNeed;
- (void)setProvider:(id)arg0;
- (id)provider;
- (unsigned long long)currentScene;

@end
