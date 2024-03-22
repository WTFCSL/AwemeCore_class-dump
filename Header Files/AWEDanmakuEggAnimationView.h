//
//     Generated by private class-dump
//

@class NSString, IESLiveVideoGiftController;

@interface AWEDanmakuEggAnimationView : UIView <IESLiveVideoGiftControllerDelegate> {
    IESLiveVideoGiftController *_giftController;
    id /* block */ _alphaPlayerCompletionBlock;
}

@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (copy, nonatomic) id /* block */ alphaPlayerCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)arg0;
- (void)setGiftController:(id)arg0;
- (id)giftController;
- (void)setAlphaPlayerCompletionBlock:(id /* block */)arg0;
- (id /* block */)alphaPlayerCompletionBlock;
- (void)showEggLottieWithLottiePath:(id)arg0 lottieRatio:(double)arg1 completion:(id /* block */)arg2;
- (void)showAlphaPlayerWithPath:(id)arg0 danmakuSceneType:(long long)arg1 completion:(id /* block */)arg2;
- (void)stopAlphaPlayerIfNeed;
- (void).cxx_destruct;

@end
