//
//     Generated by private class-dump
//

@class NSString, AWEProgressLoadingView;

@interface AWEStudioProgressLoadingView : NSObject <AWEStudioProgressLoadingViewProtocol> {
    double progress;
    long long status;
    AWEProgressLoadingView *_progressView;
}

@property (retain, nonatomic) AWEProgressLoadingView *progressView;
@property (nonatomic) double progress;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)targetProgressView;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)status;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (double)progress;
- (void)setProgress:(double)arg0;
- (id)initWithType:(long long)arg0 title:(id)arg1;
- (void)showAnimated:(BOOL)arg0;

@end
