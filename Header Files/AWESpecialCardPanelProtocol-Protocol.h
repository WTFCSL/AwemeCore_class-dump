//
//     Generated by private class-dump
//

@class NSString, AWEAwemePageContext, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol;

@protocol AWESpecialCardPanelProtocol <NSObject>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemePageContext *outerPageContext;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)outerPageContext;
- (void)setOuterPageContext:(id)arg0;
- (void)setModel:(id)arg0;
- (id)model;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (void)reset;
- (void)updateWithModel:(id)arg0;
- (void)willDisplay;

@optional

- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)didEndDisplaying;

@end
