//
//     Generated by private class-dump
//

@class UIColor, NSString, BDARVADModel, UIButton, BDARVSourceModel, BDARVPatchADModel, UIImageView, NSDictionary, UILabel, BDARVFeedADModel;
@protocol BDARVCardViewProtocol;

@interface BDARVCardView : UIView <BDARCardViewTypeProtocol> {
    BOOL _isVideoMute;
    BOOL _hasSendShow;
    BOOL _hasSendShowOver;
    NSString *_adUnitID;
    NSString *_creatorId;
    unsigned long long _loadState;
    BDARVSourceModel *_sourceModel;
    UIButton *_touchControl;
    UIButton *_closeButton;
    UIButton *_reportButton;
    UILabel *_titleLabel;
    UILabel *_sourceLabel;
    UIImageView *_playImageView;
    UILabel *_durationLabel;
    UIImageView *_contentImageView;
    UILabel *_cornerLabel;
    UIButton *_actionButton;
    UIColor *_btnHighlightColor;
    UIColor *_btnNormalColor;
    NSDictionary *_playerConfig;
    double _scaleRate;
    BDARVADModel *_adModel;
    double _imageHeight;
    double _imageWidth;
    BDARVFeedADModel *_feedAdModel;
    BDARVPatchADModel *_patchAdModel;
    NSString *_refer;
    id<BDARVCardViewProtocol> _innerDelegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutFrame;
}

@property (nonatomic) double scaleRate;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (retain, nonatomic) BDARVADModel *adModel;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (retain, nonatomic) BDARVFeedADModel *feedAdModel;
@property (retain, nonatomic) BDARVPatchADModel *patchAdModel;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL hasSendShow;
@property (nonatomic) BOOL hasSendShowOver;
@property (weak, nonatomic) id<BDARVCardViewProtocol> innerDelegate;
@property (readonly, copy, nonatomic) NSString *adUnitID;
@property (readonly, copy, nonatomic) NSString *creatorId;
@property (retain, nonatomic) UIButton *touchControl;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *reportButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UILabel *cornerLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (nonatomic) BOOL isVideoMute;
@property (copy, nonatomic) UIColor *btnHighlightColor;
@property (copy, nonatomic) UIColor *btnNormalColor;
@property (copy, nonatomic) NSDictionary *playerConfig;

+ (id)cardViewWithSource:(id)arg0 patchAdModel:(id)arg1 displayType:(long long)arg2 delegate:(id)arg3;
+ (id)cardViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 displayType:(long long)arg1 source:(id)arg2 delegate:(id)arg3;
+ (id)cardViewWithSource:(id)arg0 feedAdModel:(id)arg1 delegate:(id)arg2;

- (void)setRefer:(id)arg0;
- (id)adModel;
- (void)setAdModel:(id)arg0;
- (void)closeAction:(id)arg0;
- (void)setSourceLabel:(id)arg0;
- (double)scaleRate;
- (void)setScaleRate:(double)arg0;
- (id)refer;
- (id)touchControl;
- (void)sendShowEvent;
- (void)resizeLayout;
- (id)playerConfig;
- (void)pureMonitorWithEvent:(id)arg0 param:(id)arg1;
- (void)tapAction:(id)arg0 forEvent:(id)arg1;
- (id)adUnitID;
- (void)setPlayerConfig:(id)arg0;
- (void)setTouchControl:(id)arg0;
- (void)setLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)cornerLabel;
- (BOOL)hasSendShowOver;
- (void)setHasSendShowOver:(BOOL)arg0;
- (BOOL)hasSendShow;
- (void)setHasSendShow:(BOOL)arg0;
- (void)layoutWithOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (void)layoutWithWidth:(double)arg0;
- (void)clickTimeMonitor;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCornerLabel:(id)arg0;
- (id)innerDelegate;
- (void)setupSubview;
- (void)playerHitCache:(double)arg0 rewardAdType:(unsigned long long)arg1;
- (void)reportAction:(id)arg0;
- (void)actionBtnClick:(id)arg0 forEvent:(id)arg1;
- (struct CGSize { double x0; double x1; })titleFrameSize:(double)arg0;
- (id)reportButton;
- (void)setReportButton:(id)arg0;
- (void)setInnerDelegate:(id)arg0;
- (id)feedAdModel;
- (void)sendCardViewEventWithLabel:(id)arg0;
- (void)setFeedAdModel:(id)arg0;
- (void)hideCloseBtn;
- (void)sendShowOverEvent:(id)arg0;
- (void)sendCardViewEventWithTag:(id)arg0 label:(id)arg1 refer:(id)arg2;
- (void)sendCardViewEventWithTag:(id)arg0 label:(id)arg1 refer:(id)arg2 adExtra:(id)arg3;
- (BOOL)isVerticalVideo;
- (void)remuse;
- (void)setIsVideoMute:(BOOL)arg0;
- (void)setBtnNormalColor:(id)arg0;
- (void)setBtnHighlightColor:(id)arg0;
- (BOOL)isVideoMute;
- (id)btnHighlightColor;
- (id)btnNormalColor;
- (id)patchAdModel;
- (void)setPatchAdModel:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)loadState;
- (void)close;
- (void)stop;
- (void)show;
- (id)titleLabel;
- (void)loadImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (BOOL)hasVideo;
- (void)hide;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setTitleLabel:(id)arg0;
- (double)imageWidth;
- (id)sourceModel;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)sourceLabel;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (id)contentImageView;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (double)imageHeight;
- (void)setImageHeight:(double)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;
- (void)setContentImageView:(id)arg0;
- (void)setImageWidth:(double)arg0;
- (void)setSourceModel:(id)arg0;
- (void)setLoadState:(unsigned long long)arg0;
- (void)updateUI:(id)arg0;
- (id)creatorId;

@end
