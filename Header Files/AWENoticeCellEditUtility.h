//
//     Generated by private class-dump
//

@interface AWENoticeCellEditUtility : NSObject

+ (void)deleteNoticeWith:(id)arg0 viewController:(id)arg1 dataSource:(id)arg2 indexPath:(id)arg3;
+ (id)cellRowActionsWithTableView:(id)arg0 indexPath:(id)arg1 dataSource:(id)arg2 originDataSource:(id)arg3 classType:(Class)arg4 deletionCompletion:(id /* block */)arg5;
+ (id)cellRowActionsWithTableView:(id)arg0 indexPath:(id)arg1 currentDataSource:(id)arg2 allDatacontrollers:(id)arg3 classType:(Class)arg4 deletionCompletion:(id /* block */)arg5;
+ (void)deleteCommentInNoticeWith:(id)arg0 viewController:(id)arg1 dataSource:(id)arg2 indexPath:(id)arg3;
+ (void)deleteOwnPostedDanmakuNoticeWith:(id)arg0 viewController:(id)arg1 dataSource:(id)arg2 indexPath:(id)arg3;
+ (id)cellRowActionWithTitle:(id)arg0 actionType:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)__modularizedDisableNoticeWithModel:(id)arg0 tableView:(id)arg1 originDataSource:(id)arg2 allDatacontrollers:(id)arg3;
+ (void)__disableNoticeWithModel:(id)arg0 actionType:(unsigned long long)arg1 tableView:(id)arg2 originDataSource:(id)arg3 allDatacontrollers:(id)arg4;
+ (id)__accountTypeForTrackerWithModel:(id)arg0;
+ (void)__modularizedDisableDispatchWithModel:(id)arg0 disableButton:(id)arg1 tableView:(id)arg2 originDataSource:(id)arg3 allDatacontrollers:(id)arg4;
+ (void)__showNewReCheckViewWithNoticeModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)__disableDispatchWithModel:(id)arg0 actionType:(unsigned long long)arg1 tableView:(id)arg2 originDataSource:(id)arg3 allDatacontrollers:(id)arg4;
+ (void)__uploadVisitorOrHistoryNoticeSettingsWithType:(long long)arg0 toValue:(id)arg1 tableView:(id)arg2 dataSource:(id)arg3 allDatacontrollers:(id)arg4;
+ (void)__removeNoticeInTableView:(id)arg0 viewController:(id)arg1 dataSource:(id)arg2 indexPath:(id)arg3;

@end
