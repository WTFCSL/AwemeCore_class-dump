//
//     Generated by private class-dump
//

@class BDUGLuckyActivityTaskModel, AWECampaignWatchTaskModel, NSString, UIView;
@protocol AWEUGCountDownViewProtocol;

@interface AWEUGCampaignTaskViewAdapter : NSObject <AWEUGCountDownViewStateDelegate, AWEUGStateOutputerProtocol> {
    UIView<AWEUGCountDownViewProtocol> *_countDownView;
    BDUGLuckyActivityTaskModel *_baseInfoModel;
    AWECampaignWatchTaskModel *_watchTaskModel;
}

@property (retain, nonatomic) BDUGLuckyActivityTaskModel *baseInfoModel;
@property (retain, nonatomic) AWECampaignWatchTaskModel *watchTaskModel;
@property (retain, nonatomic) UIView<AWEUGCountDownViewProtocol> *countDownView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)countDownView;
- (void)setCountDownView:(id)arg0;
- (id)baseInfoModel;
- (void)setBaseInfoModel:(id)arg0;
- (void)taskDidEnterScene:(id)arg0;
- (void)taskDidLeveaScene:(id)arg0;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)arg0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)arg0 withTotalTime:(id)arg1;
- (void)taskDidFinishReportWithModel:(id)arg0;
- (void)setupCountDownViewWithTask:(id)arg0;
- (id)watchTaskModel;
- (id)initializeCountDownViewConfigWithTask:(id)arg0;
- (id)getCountDown:(double)arg0;
- (id)formIncompletePopupSchema:(id)arg0;
- (long long)p_getMinutes:(double)arg0;
- (long long)p_getSeconds:(long long)arg0 progress:(double)arg1;
- (void)setWatchTaskModel:(id)arg0;
- (id)initWithTask:(id)arg0;
- (void).cxx_destruct;
- (void)taskDidStart;

@end
