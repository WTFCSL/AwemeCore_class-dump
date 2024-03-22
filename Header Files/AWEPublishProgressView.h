//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString, AWETaskProgressView, AWEPublishBaseTask, NSHashTable, UIButton;
@protocol AWEPublishCancelDialogProtocol;

@interface AWEPublishProgressView : UIView <AWEPublishTaskMessage, AWEPublishCancelDialogDelegate, AWEPublishProgressViewProtocol> {
    BOOL _isInPublish;
    BOOL _isInFollowFeed;
    BOOL _isFirstPublishStimulateAnimating;
    BOOL _needShowFlag;
    id /* block */ _canBeginShowBlock;
    id /* block */ _addProgressViewInControllerForQuickShareBlock;
    id /* block */ _didClickBlock;
    id /* block */ _beginPublishBlock;
    id /* block */ _endPublishBlock;
    unsigned long long _displayType;
    NSHashTable *_containerTab;
    UIButton *_button;
    AWETaskProgressView *_currentTaskView;
    AWETaskProgressView *_nextTaskView;
    UITapGestureRecognizer *_taskViewGestureRecognizer;
    AWEPublishBaseTask *_delayedPublishTask;
    id _token;
    id<AWEPublishCancelDialogProtocol> _cancelDialog;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) AWETaskProgressView *currentTaskView;
@property (retain, nonatomic) AWETaskProgressView *nextTaskView;
@property (weak, nonatomic) UITapGestureRecognizer *taskViewGestureRecognizer;
@property (nonatomic) BOOL isInPublish;
@property (nonatomic) BOOL isFirstPublishStimulateAnimating;
@property (retain, nonatomic) AWEPublishBaseTask *delayedPublishTask;
@property (retain, nonatomic) id token;
@property (nonatomic) BOOL needShowFlag;
@property (retain, nonatomic) id<AWEPublishCancelDialogProtocol> cancelDialog;
@property (copy, nonatomic) id /* block */ canBeginShowBlock;
@property (copy, nonatomic) id /* block */ addProgressViewInControllerForQuickShareBlock;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (copy, nonatomic) id /* block */ beginPublishBlock;
@property (copy, nonatomic) id /* block */ endPublishBlock;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) BOOL isInFollowFeed;
@property (retain, nonatomic) NSHashTable *containerTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })taskViewSize;
+ (Class)aAWEPublishProgressViewDOUYINLiteAdapterClass;
+ (struct CGSize { double x0; double x1; })viewSize;

- (void)task:(id)arg0 didAppendWithInfo:(id)arg1;
- (void)task:(id)arg0 progressDidChangeWithInfo:(id)arg1;
- (void)task:(id)arg0 didRemoveWithResult:(long long)arg1 error:(id)arg2 info:(id)arg3;
- (void)task:(id)arg0 didResumeAtStage:(id)arg1;
- (void)setEndPublishBlock:(id /* block */)arg0;
- (void)setCanBeginShowBlock:(id /* block */)arg0;
- (BOOL)canShow:(id)arg0;
- (void)setIsInPublish:(BOOL)arg0;
- (id /* block */)endPublishBlock;
- (BOOL)isInPublish;
- (id /* block */)didClickBlock;
- (void)setDidClickBlock:(id /* block */)arg0;
- (void)setIsInFollowFeed:(BOOL)arg0;
- (id)containerTab;
- (void)setBeginPublishBlock:(id /* block */)arg0;
- (void)setAddProgressViewInControllerForQuickShareBlock:(id /* block */)arg0;
- (void)publishCancelDialogDidFinish;
- (void)onRetryViewShow:(id)arg0;
- (void)onRetryViewHide:(id)arg0;
- (id)currentTaskView;
- (id /* block */)canBeginShowBlock;
- (void)showAddToControllerIfNeeded;
- (void)forceShow:(BOOL)arg0;
- (id /* block */)addProgressViewInControllerForQuickShareBlock;
- (void)p_hide;
- (id)cancelDialog;
- (void)p_removeSubViews;
- (void)setCurrentTaskView:(id)arg0;
- (id)nextTaskView;
- (void)setNextTaskView:(id)arg0;
- (void)configPorgressView;
- (id /* block */)beginPublishBlock;
- (BOOL)configProgressViewCondition:(id)arg0;
- (void)p_dequeue;
- (void)p_beginPublish;
- (void)setNeedShowFlag:(BOOL)arg0;
- (void)publishShareToastWithType:(unsigned long long)arg0 task:(id)arg1 model:(id)arg2;
- (void)showProgressIfNeed:(id)arg0;
- (void)showPublishShareToastWithTask:(id)arg0;
- (void)showWelfareActivityOutOfMoneyAlertWithTask:(id)arg0;
- (void)enableCancelAction;
- (id)taskViewGestureRecognizer;
- (void)taskProgressViewTapped:(id)arg0;
- (void)setTaskViewGestureRecognizer:(id)arg0;
- (void)replaceCurrentTaskViewWithAnimation;
- (void)p_buttonPressed;
- (void)configProgressViewWithTaskV2:(id)arg0;
- (void)p_enableCancelSheetAfterSeconds:(double)arg0 forTask:(id)arg1;
- (void)configProgressViewWithQuickShareTask:(id)arg0;
- (void)configNextPublishTask:(id)arg0 withAnimation:(BOOL)arg1;
- (BOOL)isInFollowFeed;
- (BOOL)p_enableAutoSaveShareContentWithTask:(id)arg0;
- (id)aAWEPublishProgressViewDOUYINLiteAdapter;
- (BOOL)p_ifHotSearchPageNeedShowToast:(id)arg0;
- (void)setCancelDialog:(id)arg0;
- (void)showSaveDraftSuccessToastOnTaskCancellation:(id)arg0;
- (void)p_fetchTokenWithContext:(id)arg0 isFlowerRedPacketPublish:(BOOL)arg1;
- (BOOL)p_hasAlbumPermission;
- (id)generalPublishString;
- (void)setContainerTab:(id)arg0;
- (BOOL)isFirstPublishStimulateAnimating;
- (void)setIsFirstPublishStimulateAnimating:(BOOL)arg0;
- (id)delayedPublishTask;
- (void)setDelayedPublishTask:(id)arg0;
- (BOOL)needShowFlag;
- (unsigned long long)displayType;
- (void).cxx_destruct;
- (void)setDisplayType:(unsigned long long)arg0;
- (id)button;
- (void)setButton:(id)arg0;
- (void)setToken:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)token;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (BOOL)show:(BOOL)arg0;
- (void)dismiss:(BOOL)arg0;

@end