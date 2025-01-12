//
//     Generated by private class-dump
//

@class LOTAnimationView, NSString;

@interface AWETeenGeneralCollectButton : AWETeenGeneralBaseActionButton <AWETeenCollectMessage> {
    BOOL _isRequesting;
    BOOL _isPlayingAnim;
    LOTAnimationView *_collectAnimationView;
}

@property (retain, nonatomic) LOTAnimationView *collectAnimationView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isPlayingAnim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)btnClick;
- (void)setCollectAnimationView:(id)arg0;
- (id)collectAnimationView;
- (void)didFinishCollectWithItemID:(id)arg0 actionType:(unsigned long long)arg1 collectCount:(id)arg2;
- (void)configWithModel:(id)arg0 extra:(id)arg1;
- (void)p_updateCollectCount;
- (void)p_playCollectAnimationWithCollectStatus:(BOOL)arg0 requestFailed:(BOOL)arg1;
- (BOOL)isPlayingAnim;
- (void)setIsPlayingAnim:(BOOL)arg0;
- (id)p_lottieAnimationNameWithStatus:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
