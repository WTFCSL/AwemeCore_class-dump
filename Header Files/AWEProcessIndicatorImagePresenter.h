//
//     Generated by private class-dump
//

@class NSString, AWEProcessIndicatorImageView, AWEPageContext, AWEProgressUIConfig, AWEProgressIndicatorUIConfig;
@protocol AWEProgressContextProtocol;

@interface AWEProcessIndicatorImagePresenter : NSObject <AWEProgressStatusProtocol, AWEProgressChangeProtocol> {
    AWEProcessIndicatorImageView *_indicatorView;
    AWEPageContext<AWEProgressContextProtocol> *_context;
    AWEProgressUIConfig *_config;
    unsigned long long _currentStatus;
    AWEProgressIndicatorUIConfig *_indicatorUIConfig;
    double _currentPercentage;
}

@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) AWEProgressIndicatorUIConfig *indicatorUIConfig;
@property (nonatomic) double currentPercentage;
@property (readonly, nonatomic) AWEProcessIndicatorImageView *indicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressValueChangedTo:(double)arg0 animated:(BOOL)arg1;
- (void)configIndicatorView;
- (void)setCurrentPercentage:(double)arg0;
- (id)indicatorUIConfig;
- (id)formatedStringWithDuration:(long long)arg0 shouldShowHours:(BOOL)arg1;
- (void)changeProgressStatusTo:(unsigned long long)arg0 withAction:(unsigned long long)arg1 animate:(BOOL)arg2;
- (id)initWithTargeView:(id)arg0 UIConfig:(id)arg1 context:(id)arg2;
- (void)setIndicatorUIConfig:(id)arg0;
- (void)setConfig:(id)arg0;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (void)setCurrentStatus:(unsigned long long)arg0;
- (void)setContext:(id)arg0;
- (id)config;
- (id)indicatorView;
- (id)context;
- (double)currentPercentage;

@end
