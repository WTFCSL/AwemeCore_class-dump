//
//     Generated by private class-dump
//

@interface AWECommentSendHelper : NSObject

+ (void)sendCommentCompletionWithItemID:(id)arg0 commentModel:(id)arg1 error:(id)arg2 sucessCompletion:(id /* block */)arg3 retryBlock:(id /* block */)arg4;
+ (void)comment:(id)arg0 publishParameterModel:(id)arg1 content:(id)arg2 context:(id)arg3 interactionViewController:(id)arg4 needToast:(BOOL)arg5 sendSuccessBlock:(id /* block */)arg6;
+ (void)sendCommentSucessWithItemID:(id)arg0 commentModel:(id)arg1 interactionViewController:(id)arg2 completion:(id /* block */)arg3 needToast:(BOOL)arg4;
+ (void)sendCommentFailedWithError:(id)arg0 retryBlock:(id /* block */)arg1 needToast:(BOOL)arg2;
+ (void)repost:(id)arg0 inputView:(id)arg1 context:(id)arg2;

@end
