//
//     Generated by private class-dump
//

@protocol AWECreateRepostControllerProtocol <NSObject>

@property (readonly, nonatomic) BOOL isShowingRepost;

- (void)exitInputView;
- (void)createRepostWithAweme:(id)arg0 fromAweme:(id)arg1 logDict:(id)arg2 completion:(id /* block */)arg3;
- (void)createRepostWithAweme:(id)arg0 fromAweme:(id)arg1 replyComment:(id)arg2 replySubComment:(id)arg3 notificationObject:(id)arg4 logDict:(id)arg5 sendRepostBlock:(id /* block */)arg6 needHideToastBlock:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)createRepostWithAweme:(id)arg0 fromAweme:(id)arg1 repostComment:(id)arg2 logDict:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)isShowingRepost;

@end
