//
//     Generated by private class-dump
//

@class AWEPageContext, NSString, AWEAwemeModel;
@protocol AWEFeedAnchorPresenterDelegate, AWEPlayInteractionViewControllerProtocol, AWEBDXPopupShrinkVideoHelper;

@interface AWEFeedAnchorBasePresenter : NSObject <AWEFeedAnchorPriorityConfigProtocol> {
    BOOL _hasAnimated;
    id<AWEFeedAnchorPresenterDelegate> _presenterDelegate;
    AWEAwemeModel *_model;
    AWEPageContext *_interactionContext;
    id<AWEPlayInteractionViewControllerProtocol> _interactionViewController;
    NSString *_referString;
    long long _sceneType;
    id /* block */ _blockPeriod;
    id<AWEBDXPopupShrinkVideoHelper> _bdxPopupHelper;
}

@property (copy, nonatomic) id /* block */ blockPeriod;
@property (nonatomic) BOOL hasAnimated;
@property (retain, nonatomic) id<AWEBDXPopupShrinkVideoHelper> bdxPopupHelper;
@property (weak, nonatomic) id<AWEFeedAnchorPresenterDelegate> presenterDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)referString;
- (void)setInteractionViewController:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (void)setHasAnimated:(BOOL)arg0;
- (BOOL)hasAnimated;
- (void)anchorViewWillShowOnSuperview:(id)arg0;
- (void)anchorViewDidStartAnimation:(id)arg0;
- (void)anchorViewDidClicked:(id)arg0;
- (id)paramsForShow:(id)arg0;
- (void)trackEventWithEventName:(id)arg0 params:(id)arg1 extraInfo:(id)arg2;
- (id)paramsForClick:(id)arg0;
- (id)addParamsForOpenURL:(id)arg0 extraInfo:(id)arg1;
- (BOOL)tryOpenBulletPopup:(id)arg0;
- (id)paramsForStartAnimation:(id)arg0;
- (id)bdxPopupHelper;
- (id /* block */)blockPeriod;
- (void)setBlockPeriod:(id /* block */)arg0;
- (void)setBdxPopupHelper:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)presenterDelegate;
- (void)reset;
- (void)setPresenterDelegate:(id)arg0;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (id)interactionContext;
- (void)setInteractionContext:(id)arg0;
- (id)interactionViewController;

@end
