//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AFDVirtualAvatarProxy : NSObject <AWENaviUserInfoProtocol, AWENaviFlowObserverProtocol, AWENaviUIProtocol, AWENaviDataSourceProvider, AWEPublishTaskMessage> {
    NSMutableArray *_tasks;
}

@property (retain, nonatomic) NSMutableArray *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)arg0 didBeginWithInfo:(id)arg1;
- (id)userSwitcher;
- (id /* block */)showLoadingDialogWithTitle:(id)arg0 option:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)cacheExistForChannel:(id)arg0 fileName:(id)arg1;
- (void)fetchGeckoChannels:(id)arg0 fileNames:(id)arg1 cacheOnly:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)pathForGeckoResourceWithChannel:(id)arg0 fileName:(id)arg1;
- (void)showToastWithTitle:(id)arg0 type:(unsigned long long)arg1;
- (void)fetchMusicResources:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchDuetFriendsTask:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchNaviUserInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)addReportTask:(id)arg0;
- (void)didFinishCreateAvatar:(id)arg0 isFirstCreate:(BOOL)arg1;
- (BOOL)isHaveEmotions;
- (id)provideActivityViewForAvatarEditPage;
- (BOOL)isChildMode;
- (void)syncGeckoResourceWithChannels:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (long long)gender;
- (void)dealloc;
- (id)tasks;
- (void)setTasks:(id)arg0;
- (BOOL)isLogin;

@end