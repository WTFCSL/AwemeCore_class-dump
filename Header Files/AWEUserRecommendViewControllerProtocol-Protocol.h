//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol AWEUserRecommendTableViewModelProtocol;

@protocol AWEUserRecommendViewControllerProtocol <NSObject>

+ (double)userRecommendViewHeight:(long long)arg0;
+ (id)initWithConfigWithBuilderBlock:(id /* block */)arg0;

@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ moreBtnBlock;
@property (copy, nonatomic) id /* block */ deleteAllUserBlock;
@property (copy, nonatomic) NSString *userNickname;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) long long showMethod;
@property (readonly, nonatomic) NSObject<AWEUserRecommendTableViewModelProtocol> *viewModel;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)isColdLaunch;
- (void)refreshDataWithCompletion:(id /* block */)arg0;
- (void)setIsColdLaunch:(BOOL)arg0;
- (BOOL)needReloadData;
- (long long)showMethod;
- (void)setShowMethod:(long long)arg0;
- (void)refreshLiveStatus;
- (void)refreshDataWithCompletionAndError:(id /* block */)arg0;
- (void)configWithUserID:(id)arg0 enterFrom:(id)arg1 enterPosition:(id)arg2 isDirect:(BOOL)arg3 groupId:(id)arg4 label:(id)arg5 type:(long long)arg6 hasAwemeCell:(BOOL)arg7;
- (void)setUserNickname:(id)arg0;
- (void)setMoreBtnBlock:(id /* block */)arg0;
- (void)setDeleteAllUserBlock:(id /* block */)arg0;
- (id)userNickname;
- (id /* block */)deleteAllUserBlock;
- (id /* block */)moreBtnBlock;
- (void)clearRecommendData;
- (id)viewModel;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg0;

@end
