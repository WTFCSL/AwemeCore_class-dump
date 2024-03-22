//
//     Generated by private class-dump
//

@class UILabel, UIView, UISwitch, NSArray, NSTimer, HTSEventContext, UIButton, NSString, UIPageControl, UIScrollView;

@interface IESLiveVREntranceView : UIView <UIScrollViewDelegate> {
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_switchContainerView;
    UIView *_separatorView;
    UILabel *_switchTitleLabel;
    UISwitch *_switchBtn;
    UILabel *_introLabel;
    UIButton *_introButton;
    UILabel *_guideLabel;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    NSArray *_originImageArray;
    NSArray *_usedImageArray;
    NSTimer *_timer;
    HTSEventContext *_trackContext;
    unsigned long long _liveType;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *switchContainerView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *switchTitleLabel;
@property (retain, nonatomic) UISwitch *switchBtn;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIButton *introButton;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (copy, nonatomic) NSArray *originImageArray;
@property (copy, nonatomic) NSArray *usedImageArray;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) unsigned long long liveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (id)switchBtn;
- (void)setSwitchBtn:(id)arg0;
- (void)invalidTimer;
- (id)switchTitleLabel;
- (void)trackGuideShowWithContent:(id)arg0;
- (id)initWithTrackContext:(id)arg0;
- (void)setInitialSwitchStatus:(BOOL)arg0;
- (void)setOriginImageArray:(id)arg0;
- (void)showVRIntroBubbleView;
- (void)setSwitchContainerView:(id)arg0;
- (id)switchContainerView;
- (void)setSwitchTitleLabel:(id)arg0;
- (void)handleSwitchClick:(id)arg0;
- (void)setIntroButton:(id)arg0;
- (id)introButton;
- (void)openVRLiveIntroURL;
- (id)originImageArray;
- (void)setUsedImageArray:(id)arg0;
- (id)usedImageArray;
- (void)addContentOffsetObserverToScrollView:(id)arg0;
- (void)changeVRLiveSwitchStatus:(BOOL)arg0;
- (void)trackClickDeviceNotSupportWithPopType:(id)arg0 buttonType:(id)arg1;
- (void)openVRLiveDeviceLimitURL;
- (void)trackShowDeviceNotSupportWithPopType:(id)arg0;
- (void)trackFisheyeSwitchStatus:(BOOL)arg0;
- (void)trackFisheyeInstanceClick;
- (id)timer;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)setPageControl:(id)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setSeparatorView:(id)arg0;
- (id)titleLabel;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (void)setTimer:(id)arg0;
- (id)separatorView;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)scrollView;
- (void)setupTimer;
- (id)pageControl;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (id)introLabel;
- (void)setIntroLabel:(id)arg0;
- (void)scrollImage;

@end