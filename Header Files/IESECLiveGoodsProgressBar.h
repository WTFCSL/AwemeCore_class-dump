//
//     Generated by private class-dump
//

@class IESECLiveSaleProgressView, NSString, IESECLigoContext, IESECLiveCountDownElementModel;

@interface IESECLiveGoodsProgressBar : UIView <IESECLigoComponentProtocol> {
    IESECLigoContext *_ligoContext;
    IESECLiveCountDownElementModel *_countDownInfo;
    IESECLiveSaleProgressView *_progressView;
}

@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (retain, nonatomic) IESECLiveCountDownElementModel *countDownInfo;
@property (retain, nonatomic) IESECLiveSaleProgressView *progressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLigoContext:(id)arg0;
- (id)ligoContext;
- (void)updateComponentWithModel:(id)arg0;
- (id)initWithLigoContext:(id)arg0;
- (void)updateWithProgressBarModel:(id)arg0;
- (id)countDownInfo;
- (void)setCountDownInfo:(id)arg0;
- (void)updateCountDownInterval;
- (id)p_getProgressGradientColors:(id)arg0;
- (void).cxx_destruct;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)setupUI;

@end