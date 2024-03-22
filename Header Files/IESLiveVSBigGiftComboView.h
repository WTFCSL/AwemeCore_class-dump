//
//     Generated by private class-dump
//

@class IESLiveVSSendGiftCommandQueue, IESLiveVSGiftItem, UIImageView, CADisplayLink, UIView, NSString, UIButton;

@interface IESLiveVSBigGiftComboView : UIView <IESLiveVSSendGiftCommandQueueDelegate> {
    BOOL _isCountdowning;
    CADisplayLink *_displayLink;
    unsigned long long _originCountdown;
    double _currentCountdownRotate;
    UIView *_comboAnimationContentView;
    UIImageView *_comboBcakgroundImageView;
    UIImageView *_comboTextImageView;
    UIButton *_comboButton;
    IESLiveVSSendGiftCommandQueue *_sendCommandQueue;
    IESLiveVSGiftItem *_giftItem;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long originCountdown;
@property (nonatomic) double currentCountdownRotate;
@property (retain, nonatomic) UIView *comboAnimationContentView;
@property (retain, nonatomic) UIImageView *comboBcakgroundImageView;
@property (retain, nonatomic) UIImageView *comboTextImageView;
@property (retain, nonatomic) UIButton *comboButton;
@property (nonatomic) BOOL isCountdowning;
@property (retain, nonatomic) IESLiveVSSendGiftCommandQueue *sendCommandQueue;
@property (retain, nonatomic) IESLiveVSGiftItem *giftItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)destroyTimer;
- (BOOL)isCountdowning;
- (void)setIsCountdowning:(BOOL)arg0;
- (void)setComboAnimationContentView:(id)arg0;
- (id)comboAnimationContentView;
- (void)setComboBcakgroundImageView:(id)arg0;
- (void)setComboTextImageView:(id)arg0;
- (id)comboTextImageView;
- (id)comboBcakgroundImageView;
- (void)setCurrentCountdownRotate:(double)arg0;
- (unsigned long long)originCountdown;
- (double)currentCountdownRotate;
- (void)didComboButtonClicked:(id)arg0;
- (void)setOriginCountdown:(unsigned long long)arg0;
- (void)loadComboSubviews;
- (void)setComboButton:(id)arg0;
- (id)comboButton;
- (id)sendCommandQueue;
- (void)setSendCommandQueue:(id)arg0;
- (void)commandDidExecute:(id)arg0 command:(id)arg1 error:(id)arg2;
- (id)p_createCommand;
- (void)tapEmpty;
- (void)p_dismissWithInterrupt:(BOOL)arg0;
- (id)initWithGiftItem:(id)arg0;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)displayLink;
- (void)dealloc;
- (void)startAnimation;
- (id)giftItem;
- (void)setGiftItem:(id)arg0;

@end
