//
//     Generated by private class-dump
//

@class BDNovelVipCenterPendantInfo, NSTimer, BDNovelCommonVipCountdownHander, UILabel, UIImageView, BDNovelCommonVipCenterViewModel;

@interface BDNovelVipCenterPendantView : UIView {
    BOOL _isPutAway;
    BDNovelVipCenterPendantInfo *_info;
    BDNovelCommonVipCountdownHander *_discountTimerHandler;
    NSTimer *_timer;
    UILabel *_timeLabel;
    UIImageView *_imageView;
    UIImageView *_closeView;
    BDNovelCommonVipCenterViewModel *_viewModel;
}

@property (retain, nonatomic) BDNovelCommonVipCountdownHander *discountTimerHandler;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) BDNovelCommonVipCenterViewModel *viewModel;
@property (nonatomic) BOOL isPutAway;
@property (retain, nonatomic) BDNovelVipCenterPendantInfo *info;

- (id)discountTimerHandler;
- (void)setDiscountTimerHandler:(id)arg0;
- (id)initWithPendantInfo:(id)arg0 viewModel:(id)arg1;
- (void)showPendantIfSatisfyFrequency:(id /* block */)arg0;
- (BOOL)isPutAway;
- (void)pendantViewPutAway:(BOOL)arg0;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (void)onPendantPanned:(id)arg0;
- (void)onPendantTapped:(id)arg0;
- (id)translateTimeToString:(unsigned long long)arg0;
- (void)recordDateOfClosePendant;
- (id)extraTrackerDict;
- (void)setIsPutAway:(BOOL)arg0;
- (id)stringOfDate;
- (void)onCloseButtonClicked:(id)arg0;
- (id)timer;
- (id)info;
- (void)updateTimer;
- (void).cxx_destruct;
- (id)imageView;
- (void)setInfo:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setImageView:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)viewModel;
- (id)timeLabel;
- (void)setupViews;

@end