//
//     Generated by private class-dump
//

@class NSString, NSNumber, IESECGoodsDetailTimeCountdownView;

@interface IESECSliceXActivityCountdownView : IESECSliceXViewElementView <IESECGoodsDetailViewUpdateMessage> {
    BOOL _isSmallMode;
    IESECGoodsDetailTimeCountdownView *_countdownView;
    NSString *_currentDetailPageID;
    NSNumber *_currentTime;
    long long _prefixSize;
    long long _timerSize;
}

@property (retain, nonatomic) IESECGoodsDetailTimeCountdownView *countdownView;
@property (copy, nonatomic) NSString *currentDetailPageID;
@property (nonatomic) BOOL isSmallMode;
@property (retain, nonatomic) NSNumber *currentTime;
@property (nonatomic) long long prefixSize;
@property (nonatomic) long long timerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSmallMode;
- (void)setIsSmallMode:(BOOL)arg0;
- (void)goodsDetailActivityDidUpdateCountdown:(id)arg0 goodsDetailUID:(id)arg1;
- (void)setPrefixSize:(long long)arg0;
- (void)setTimerSize:(long long)arg0;
- (long long)prefixSize;
- (long long)timerSize;
- (BOOL)updateWithSliceXElement:(id)arg0 error:(id *)arg1;
- (void)updateCountdown:(long long)arg0 expireTime:(long long)arg1 prefix:(id)arg2;
- (id)currentDetailPageID;
- (void)setCurrentDetailPageID:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setCurrentTime:(id)arg0;
- (id)currentTime;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (void)dealloc;
- (id)countdownView;
- (void)setCountdownView:(id)arg0;

@end
