//
//     Generated by private class-dump
//

@protocol IESLiveInteractiveQuickStartServiceProtocol <NSObject>

@property (copy, nonatomic) id /* block */ monitorBlock;

- (void)setMonitorBlock:(id /* block */)arg0;
- (id /* block */)monitorBlock;
- (void)updateWithRoom:(id)arg0;
- (void)quickStartMultiAudioWithScene:(long long)arg0 requestSource:(long long)arg1 extraParam:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithRoom:(id)arg0;

@end