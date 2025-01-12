//
//     Generated by private class-dump
//

@class UIImageView, UILabel;
@protocol IESLiveCompoundSubscription, IESLiveTeamFightBaseProvider;

@interface IESLiveTeamFightCountDownTopBar : UIView {
    UIImageView *_bgView;
    UILabel *_statusLabel;
    UILabel *_timeLabel;
    id<IESLiveCompoundSubscription> _disposable;
    id<IESLiveTeamFightBaseProvider> _provider;
    long long _teamFightType;
}

@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (weak, nonatomic) id<IESLiveTeamFightBaseProvider> provider;
@property (nonatomic) long long teamFightType;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)bindAction;
- (void)showResult;
- (long long)teamFightType;
- (id)countDownStr:(long long)arg0;
- (void)openExplanationPanel;
- (id)fightStatusText;
- (id)showResultStatusText;
- (id)statusNameWith:(int)arg0 teamFightInfoType:(long long)arg1;
- (id)initWithType:(long long)arg0 DIContext:(id)arg1;
- (void)setTeamFightType:(long long)arg0;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (void)setTimeLabel:(id)arg0;
- (void)dealloc;
- (id)timeLabel;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupViews;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;

@end
