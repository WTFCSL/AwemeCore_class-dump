//
//     Generated by private class-dump
//

@class AWEProcessIndicatorImagePresenter, AWEProcessIndicatorImageView, AWEPageContext, NSString, AWEProgressUIConfig;
@protocol AWEProgressElementDelegate, AWEProgressContextProtocol;

@interface AWEProgressProcessIndicatorElement : AWEBaseElement <AWEProgressElementProtocol> {
    id<AWEProgressElementDelegate> _delegate;
    AWEProcessIndicatorImageView *_indicatorView;
    AWEProcessIndicatorImagePresenter *_presenter;
    AWEProgressUIConfig *_config;
    AWEPageContext<AWEProgressContextProtocol> *_context;
}

@property (retain, nonatomic) AWEProcessIndicatorImageView *indicatorView;
@property (retain, nonatomic) AWEProcessIndicatorImagePresenter *presenter;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (id)initWithConfig:(id)arg0 context:(id)arg1;
- (void)viewDidDisposed;
- (void)progressValueChangedTo:(double)arg0 animated:(BOOL)arg1;
- (void)changeProgressStatusTo:(unsigned long long)arg0 withAction:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)presenter;
- (void)setContext:(id)arg0;
- (id)config;
- (void)setData:(id)arg0;
- (id)delegate;
- (id)indicatorView;
- (void)configuration;
- (id)context;
- (void)setPresenter:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)viewDidLoad;
- (void)setIndicatorView:(id)arg0;

@end
