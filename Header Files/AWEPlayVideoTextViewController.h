//
//     Generated by private class-dump
//

@class AWEPlayInteractionViewController, NSString, AWEPlayInteractionContext, AWEAwemeModel, UIScrollView;
@protocol AWEPlayAiToTextPanelViewControllerDelegate;

@interface AWEPlayVideoTextViewController : UIViewController <AWEPlayAiToTextPanelVCProtocol> {
    NSString *_exitMethod;
    AWEAwemeModel *_awemeModel;
    AWEPlayInteractionContext *_context;
    id<AWEPlayAiToTextPanelViewControllerDelegate> _delegate;
    NSString *_referString;
    UIScrollView *_scrollView;
    AWEPlayInteractionViewController *_container;
    double _contentHeight;
    id /* block */ _sectionDidSelectBlock;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayAiToTextPanelViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *referString;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) AWEPlayInteractionViewController *container;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ sectionDidSelectBlock;
@property (copy, nonatomic) NSString *exitMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)dismissLoadingView;
- (void)setExitMethod:(id)arg0;
- (id)exitMethod;
- (id)formattedJumpTimeForTime:(id)arg0;
- (double)caculateHeightForContent:(id)arg0 width:(double)arg1;
- (void)setSectionDidSelectBlock:(id /* block */)arg0;
- (void)updateSectionStatusWithTime:(double)arg0;
- (void)dismissPanle;
- (id /* block */)sectionDidSelectBlock;
- (id)container;
- (void)hideMenu;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (id)scrollView;
- (void)setContentHeight:(double)arg0;

@end