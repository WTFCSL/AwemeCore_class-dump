//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIView, NSArray, UIImageView, UIButton, AWEModernFeedVideoDeepQAPanelView, NSMutableArray, AWEModernFeedVideoDeepQABottomTipView;

@interface AWEModernFeedVideoDeepQAInteractView : UIView {
    BOOL _hasAddPointViews;
    NSString *_referString;
    double _progress;
    UIView *_progressView;
    id /* block */ _clickVideoTipView;
    id /* block */ _clickVideoAbstractSectionBlock;
    id /* block */ _videoActionBtnClicked;
    UIView *_progressBottomView;
    UIButton *_videoActionButton;
    UIImageView *_loadingImageView;
    AWEModernFeedVideoDeepQAPanelView *_videoAbstractPanel;
    AWEModernFeedVideoDeepQABottomTipView *_videoBottomView;
    AWEAwemeModel *_awemeModel;
    NSString *_path;
    unsigned long long _videoSizeType;
    NSArray *_dataArray;
    NSMutableArray *_pointViews;
    double _startExpandTime;
    double _endExpandTime;
}

@property (retain, nonatomic) UIView *progressBottomView;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) AWEModernFeedVideoDeepQAPanelView *videoAbstractPanel;
@property (retain, nonatomic) AWEModernFeedVideoDeepQABottomTipView *videoBottomView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long videoSizeType;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL hasAddPointViews;
@property (retain, nonatomic) NSMutableArray *pointViews;
@property (nonatomic) double startExpandTime;
@property (nonatomic) double endExpandTime;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIView *progressView;
@property (copy, nonatomic) id /* block */ clickVideoTipView;
@property (copy, nonatomic) id /* block */ clickVideoAbstractSectionBlock;
@property (copy, nonatomic) id /* block */ videoActionBtnClicked;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg0;
- (id)videoActionButton;
- (void)showPlayingUI;
- (void)showPauseUI;
- (void)setVideoActionButton:(id)arg0;
- (unsigned long long)videoSizeType;
- (void)setVideoSizeType:(unsigned long long)arg0;
- (id /* block */)clickVideoTipView;
- (void)videoTipViewTapped;
- (void)setClickVideoTipView:(id /* block */)arg0;
- (void)setInteractViewWhenVCAppear;
- (void)setInteractViewWhenVCDisappear;
- (void)configWithAwemeModel:(id)arg0 videoSizeType:(unsigned long long)arg1;
- (void)showLoadingImageUI;
- (void)updateVideoInteractViewWithPlayTime:(double)arg0;
- (void)setClickVideoAbstractSectionBlock:(id /* block */)arg0;
- (void)switchVideoStatusByClick;
- (void)setVideoActionBtnClicked:(id /* block */)arg0;
- (void)setPointViews:(id)arg0;
- (id)videoAbstractPanel;
- (id)videoBottomView;
- (id)progressBottomView;
- (id)pointViews;
- (void)setStartExpandTime:(double)arg0;
- (BOOL)hasAddPointViews;
- (void)addProgressPointsView;
- (void)setHasAddPointViews:(BOOL)arg0;
- (void)trackLayerDuration;
- (void)expandPanleWithAction:(id)arg0;
- (id /* block */)videoActionBtnClicked;
- (id)videoTitleTrackParams;
- (void)packAnimation;
- (void)expandAnimation;
- (void)setEndExpandTime:(double)arg0;
- (double)endExpandTime;
- (double)startExpandTime;
- (id /* block */)clickVideoAbstractSectionBlock;
- (void)closePanelWithAction:(id)arg0;
- (void)setProgressBottomView:(id)arg0;
- (void)setVideoAbstractPanel:(id)arg0;
- (void)setVideoBottomView:(id)arg0;
- (void)setPath:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)path;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (double)progress;
- (void)layoutSubviews;
- (void)setProgress:(double)arg0;
- (id)dataArray;
- (void)setDataArray:(id)arg0;

@end
