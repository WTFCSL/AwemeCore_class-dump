//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESLiveOpenPlatformExplainCardViewProtocol;

@interface IESLiveOpenPlatformExplainCardContainerView : UIView <HTSLivePluginLayoutView> {
    UIView<IESLiveOpenPlatformExplainCardViewProtocol> *_cardView;
}

@property (retain, nonatomic) UIView<IESLiveOpenPlatformExplainCardViewProtocol> *cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)setupCardViewWithCardViewModel:(id)arg0;
- (void)showCardViewWithCardViewModel:(id)arg0 animationWillStartBlock:(id /* block */)arg1 didStartBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)hideCardViewWithAnimationWillStartBlock:(id /* block */)arg0 didStartBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)replaceCardViewWithCardViewModel:(id)arg0 animationWillStartBlock:(id /* block */)arg1 didStartBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)viewType;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end
