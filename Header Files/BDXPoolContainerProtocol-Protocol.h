//
//     Generated by private class-dump
//

@protocol BDXPoolContainerDelegate;

@protocol BDXPoolContainerProtocol <NSObject>

@property (weak, nonatomic) id<BDXPoolContainerDelegate> poolContainerDelegate;

- (void)loadWithURL:(id)arg0 context:(id)arg1;
- (void)setPoolContainerDelegate:(id)arg0;
- (id)poolContainerDelegate;
- (id)context;
- (id)originURL;

@optional

- (void)onReuse:(id)arg0;
- (void)onRecycle:(id)arg0;
- (void)didFetchFromPool:(id)arg0;
- (void)didRecycleIntoPool:(id)arg0;
- (void)updateLifeCycleMonitor:(id)arg0;
- (void)updateTracertMonitor:(id)arg0;

@end