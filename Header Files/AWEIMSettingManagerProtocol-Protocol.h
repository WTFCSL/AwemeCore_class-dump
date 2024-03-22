//
//     Generated by private class-dump
//

@class AWEIMSettingModel;

@protocol AWEIMSettingManagerProtocol <NSObject>

@property (retain, nonatomic) AWEIMSettingModel *model;
@property (nonatomic) BOOL lastFetchSuccess;

- (id)chatBlockSettingModel;
- (void)updateWhoCanMessageMeWithSwitchValues:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchIMSettingWithCompletion:(id /* block */)arg0;
- (void)saveCurrentModel;
- (void)updateChatBlockSettingModel:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchIMSettingWithSource:(id)arg0 completion:(id /* block */)arg1;
- (void)clearIMSettingWhenLogout;
- (void)setLastFetchSuccess:(BOOL)arg0;
- (void)changeChatPrivacy:(long long)arg0 withURL:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)lastFetchSuccess;
- (void)setModel:(id)arg0;
- (id)model;

@end
