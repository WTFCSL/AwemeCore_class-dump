//
//     Generated by private class-dump
//

@protocol IESLiveRealStreamingProvider;

@interface IESLiveOpenPlatformShareScreenSEIChannel : NSObject {
    id<IESLiveRealStreamingProvider> _realStreamingProvider;
}

@property (retain, nonatomic) id<IESLiveRealStreamingProvider> realStreamingProvider;

- (id)realStreamingProvider;
- (void)setRealStreamingProvider:(id)arg0;
- (void)sendSEIWithStatus:(BOOL)arg0 timeInterval:(long long)arg1;
- (void)stopSEIChannel;
- (id)_SEIStringWithShareScreenStatus:(BOOL)arg0;
- (void)_sendSingleSEIWithModel:(id)arg0;
- (void).cxx_destruct;

@end
