//
//     Generated by private class-dump
//

@protocol AWEStoryDataManagerProtocol <NSObject>

+ (long long)calcDaysFromBegin:(id)arg0 end:(id)arg1;
+ (id)sharedInstance;

- (void)loadPreviousStoryWithAwemeModel:(id)arg0 completion:(id /* block */)arg1;
- (void)loadMoreStoryWithAwemeModel:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchStoryWithAwemeModel:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchOfficialAwemeIsHostStatus:(BOOL)arg0 Completion:(id /* block */)arg1;

@end
