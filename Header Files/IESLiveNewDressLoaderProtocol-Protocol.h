//
//     Generated by private class-dump
//

@protocol IESLiveNewDressDataStoreProtocol;

@protocol IESLiveNewDressLoaderProtocol <NSObject>

@property (retain, nonatomic) id<IESLiveNewDressDataStoreProtocol> dataStore;

- (void)updateDressListWithCompletion:(id /* block */)arg0;
- (void)prefetchDressWith:(id)arg0 completion:(id /* block */)arg1;
- (void)setDataStore:(id)arg0;
- (id)dataStore;

@end
