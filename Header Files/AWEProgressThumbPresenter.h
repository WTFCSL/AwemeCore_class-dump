//
//     Generated by private class-dump
//

@class AWEProgressThumbView, NSString, AWEPageContext, UIImage, AWEProgressUIConfig;
@protocol AWEProgressContextProtocol;

@interface AWEProgressThumbPresenter : NSObject <AWEProgressStatusProtocol, AWEProgressChangeProtocol> {
    BOOL _requestBigThumb;
    BOOL _isPreviewEnlarged;
    AWEProgressThumbView *_thumbView;
    AWEPageContext<AWEProgressContextProtocol> *_context;
    AWEProgressUIConfig *_config;
    unsigned long long _currentStatus;
    double _currentProcess;
    UIImage *_engineBigImage;
}

@property (weak, nonatomic) AWEProgressThumbView *thumbView;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) double currentProcess;
@property (nonatomic) BOOL requestBigThumb;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (nonatomic) BOOL isPreviewEnlarged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)engineBigImage;
- (BOOL)requestBigThumb;
- (void)setRequestBigThumb:(BOOL)arg0;
- (void)setEngineBigImage:(id)arg0;
- (void)getVideoPreviewImageIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)refreshPreviewImage;
- (void)progressValueChangedTo:(double)arg0 animated:(BOOL)arg1;
- (void)loadPreviewWhenShow:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)showPreviewIfNeeded;
- (void)setIsPreviewEnlarged:(BOOL)arg0;
- (BOOL)isPreviewEnlarged;
- (void)changeProgressStatusTo:(unsigned long long)arg0 withAction:(unsigned long long)arg1 animate:(BOOL)arg2;
- (id)initWithTargeView:(id)arg0 UIConfig:(id)arg1 context:(id)arg2;
- (void)configThumbView;
- (id)currentThumbUIConfig;
- (id)framePreviewImageForProgress:(double)arg0 originalImage:(id)arg1;
- (void)setConfig:(id)arg0;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (void)setCurrentStatus:(unsigned long long)arg0;
- (double)currentProcess;
- (void)setContext:(id)arg0;
- (id)config;
- (id)thumbView;
- (id)context;
- (void)reset;
- (void)setThumbView:(id)arg0;
- (void)setCurrentProcess:(double)arg0;

@end
