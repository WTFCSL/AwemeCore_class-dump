//
//     Generated by private class-dump
//

@class NSString, AWEPublishBaseTask, UIView;
@protocol AWEPublishRetryViewProtocol;

@interface AWEPublishRetryViewManager : NSObject <AWEPublishTaskMessage, AWEUserMessage> {
    BOOL _retryFlag;
    BOOL _isShowing;
    BOOL _launched;
    BOOL _fromSecondVerify;
    UIView *_contextView;
    NSString *_retryTaskId;
    AWEPublishBaseTask *_taskV2;
    UIView<AWEPublishRetryViewProtocol> *_cnRetryView;
    UIView<AWEPublishRetryViewProtocol> *_livePlaybackErrorView;
    UIView<AWEPublishRetryViewProtocol> *_cnReplaceMusicErrorRetryView;
}

@property (weak, nonatomic) UIView<AWEPublishRetryViewProtocol> *cnRetryView;
@property (weak, nonatomic) UIView<AWEPublishRetryViewProtocol> *livePlaybackErrorView;
@property (weak, nonatomic) UIView<AWEPublishRetryViewProtocol> *cnReplaceMusicErrorRetryView;
@property (nonatomic) BOOL launched;
@property (nonatomic) BOOL fromSecondVerify;
@property (readonly, weak, nonatomic) UIView *contextView;
@property (copy, nonatomic) NSString *retryTaskId;
@property (retain, nonatomic) AWEPublishBaseTask *taskV2;
@property (nonatomic) BOOL retryFlag;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)task:(id)arg0 didBeginWithInfo:(id)arg1;
- (void)task:(id)arg0 didAppendWithInfo:(id)arg1;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)task:(id)arg0 didResumeAtStage:(id)arg1;
- (void)didFinishLogout;
- (void)setIsShowing:(BOOL)arg0;
- (BOOL)launched;
- (void)setLaunched:(BOOL)arg0;
- (void)setRetryFlag:(BOOL)arg0;
- (BOOL)retryFlag;
- (id)retryTaskId;
- (void)showRetryViewWhenLaunch;
- (id)taskV2;
- (id)toastAnchorView;
- (id)cnRetryView;
- (BOOL)fromSecondVerify;
- (void)onPublishFailedDraftEdit:(id)arg0;
- (void)p_showSecondVerifyCompletePublishRetryView:(id)arg0;
- (void)retryWithParams:(id)arg0;
- (void)p_getAndValidateRetryId:(id /* block */)arg0;
- (void)shouldShowRetryViewWithTask:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)showReplaceMusicPublishRetryViewWithTask:(id)arg0;
- (unsigned long long)p_retryViewType:(id)arg0;
- (id)p_repository;
- (id)p_title:(id)arg0;
- (id)retryViewWithType:(unsigned long long)arg0 title:(id)arg1;
- (void)p_closeTrackEvent;
- (void)setCnRetryView:(id)arg0;
- (void)p_postShowNote;
- (void)fetchCoverImageWithTaskId:(id)arg0 completion:(id /* block */)arg1;
- (void)setTaskV2:(id)arg0;
- (void)setRetryTaskId:(id)arg0;
- (void)setFromSecondVerify:(BOOL)arg0;
- (id)livePlaybackErrorView;
- (void)setLivePlaybackErrorView:(id)arg0;
- (id)cnReplaceMusicErrorRetryView;
- (void)setCnReplaceMusicErrorRetryView:(id)arg0;
- (void)p_postHideNote;
- (void)showlivePlaybackErrorViewIfNeeded;
- (void)p_showNormalRetryView:(id)arg0;
- (void)p_shouldShowRetryViewWithTask:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (BOOL)shouldShowLivePlaybackErrorViewIfNeededWithTask:(id)arg0 didEndWithResult:(long long)arg1;
- (BOOL)shouldShowReplaceMusicPublishRetryViewIfNeededWithTask:(id)arg0 didEndWithResult:(long long)arg1;
- (void)p_showRetryViewIfNeeded;
- (BOOL)p_removeDraftIfNeeded:(id)arg0;
- (id)consistentRetryId;
- (void)p_observeTask:(id)arg0;
- (void)cancelProductDetectPostWithTask:(id)arg0;
- (id)p_enterFrom;
- (void)showRetryViewIfNeeded;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (void)dealloc;
- (id)contextView;
- (void)listen;
- (void)cancelAndDismiss;

@end