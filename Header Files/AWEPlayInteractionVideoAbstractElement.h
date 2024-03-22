//
//     Generated by private class-dump
//

@class NSString, AWEPlayInteractionVideoAbstractView;

@interface AWEPlayInteractionVideoAbstractElement : AWEPlayInteractionLeftElement <AWEPlayInteractionComponentGlobalPriorityComponentProtocol> {
    BOOL _hasClicked;
    BOOL _cancelShowCommentPanel;
    AWEPlayInteractionVideoAbstractView *_videoAbstractView;
}

@property (retain, nonatomic) AWEPlayInteractionVideoAbstractView *videoAbstractView;
@property (nonatomic) BOOL cancelShowCommentPanel;
@property (nonatomic) BOOL hasClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)arg0 context:(id)arg1;

- (void)viewDidDisposed;
- (void)updateViewLayout;
- (BOOL)hasClicked;
- (void)setHasClicked:(BOOL)arg0;
- (void)viewController_willDisplay;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)arg0;
- (void)shouldCancelShowCommentPanel;
- (void)viewController_viewDidAppear;
- (void)trackClickCommentBtn;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (void)dynamicWidthRemakeLayout;
- (void)openCommentPanelWithEnterSource:(unsigned long long)arg0 delayTime:(double)arg1;
- (id)videoAbstractView;
- (void)videoAbstractViewClick;
- (void)updateSectionBtnWithPlayTime:(double)arg0 completion:(id /* block */)arg1;
- (void)trackVideoAbstractWithActionType:(id)arg0;
- (void)trackVideoAbstractAppear;
- (void)setVideoAbstractView:(id)arg0;
- (void)handleClickEventWithPlayTime:(double)arg0 playTimeStr:(id)arg1;
- (void)trackVideoSummaryProgress;
- (void)setCancelShowCommentPanel:(BOOL)arg0;
- (BOOL)cancelShowCommentPanel;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end