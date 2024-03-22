//
//     Generated by private class-dump
//

@class NSString, AWEOriginalAdCardModel, AWEAdWebViewController;

@protocol AWEAdWebViewModalManager <NSObject>

@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) id /* block */ appearingBlock;
@property (copy, nonatomic) id /* block */ disappearingBlock;
@property (retain, nonatomic) AWEAdWebViewController *cardWebViewController;
@property (nonatomic) BOOL isModalShowing;
@property (retain, nonatomic) AWEOriginalAdCardModel *cardInfo;

- (void)setRefer:(id)arg0;
- (id)refer;
- (void)triggerShowModalEvent;
- (void)setCardWebViewController:(id)arg0;
- (void)preloadWebViewIfNeededWithWebURL:(id)arg0 fromView:(id)arg1;
- (void)setIsModalShowing:(BOOL)arg0;
- (BOOL)isModalShowing;
- (void)showModalWithURL:(id)arg0;
- (void)dismissModalAnimated:(BOOL)arg0;
- (id /* block */)appearingBlock;
- (id)cardWebViewController;
- (id /* block */)disappearingBlock;
- (void)preloadWebViewFromView:(id)arg0;
- (void)showModal;
- (void)setAppearingBlock:(id /* block */)arg0;
- (void)setDisappearingBlock:(id /* block */)arg0;
- (void)reset;
- (id)cardInfo;
- (void)setCardInfo:(id)arg0;

@end
