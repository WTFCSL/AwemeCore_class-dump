//
//     Generated by private class-dump
//

@class NSString, TTTAttributedLabel, AWEUIButton, UILabel, UIImageView, UIView;

@interface AWEMediaDownloadBarView : UIView <TTTAttributedLabelDelegate> {
    long long _downloadBarViewMode;
    double _progress;
    double _height;
    AWEUIButton *_cancelButton;
    UILabel *_tipsLabel;
    TTTAttributedLabel *_retryLabel;
    UILabel *_progressLabel;
    UIImageView *_statusIconView;
    UIView *_blurView;
    id /* block */ _retryBlock;
    id /* block */ _cancelBlock;
    NSString *_progressFormat;
}

@property (retain, nonatomic) AWEUIButton *cancelButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) TTTAttributedLabel *retryLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIImageView *statusIconView;
@property (retain, nonatomic) UIView *blurView;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) double height;
@property (retain, nonatomic) NSString *progressFormat;
@property (nonatomic) long long downloadBarViewMode;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)arg0 didSelectLinkWithTransitInformation:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)retryLabel;
- (void)setRetryLabel:(id)arg0;
- (void)setDownloadBarViewMode:(long long)arg0;
- (id)statusIconView;
- (void)setRetryLabelAttributed;
- (void)setProgressFormat:(id)arg0;
- (long long)downloadBarViewMode;
- (id)progressFormat;
- (id)initWithMode:(long long)arg0 progress:(double)arg1 retryBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (void)setStatusIconView:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void)_updateProgress;
- (void)setBlurView:(id)arg0;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)blurView;
- (double)height;
- (double)progress;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setHeight:(double)arg0;
- (void)setProgress:(double)arg0;
- (void)_setupSubviews;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg0;
- (void)_retry:(id)arg0;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg0;

@end
