//
//     Generated by private class-dump
//

@protocol IESLiveGeckoFileLoader;

@interface IESLiveLaunchTaskHybrid : IESLiveBaseLaunchTask {
    id<IESLiveGeckoFileLoader> _fileLoader;
    long long _excuteCnt;
}

@property (retain, nonatomic) id<IESLiveGeckoFileLoader> fileLoader;
@property (nonatomic) long long excuteCnt;

- (void)excute;
- (void)fetchResourceWithCompletion:(id /* block */)arg0;
- (id)fileLoader;
- (id)prefetchDataForPath:(id)arg0 geckoKey:(id)arg1 channel:(id)arg2;
- (void)setFileLoader:(id)arg0;
- (long long)excuteCnt;
- (void)setExcuteCnt:(long long)arg0;
- (void).cxx_destruct;

@end
