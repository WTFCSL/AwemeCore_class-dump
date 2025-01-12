//
//     Generated by private class-dump
//

@class NLETrack_OC, DVEAudioSpeedSliderView, NSString, DVEDoneInfo, UIView;
@protocol DVEToastProtocol, DVEMulitpleTrackViewServiceProtocol;

@interface DVEAudioSpeedViewController : DVEBaseBarController <DVEBaseBarTopViewDelegate, DVEBaseBarBottomViewDelegate, DVEBaseTooltipSliderDelegate> {
    BOOL _isValueChanged;
    DVEAudioSpeedSliderView *_sliderView;
    NLETrack_OC *_originalTrack;
    id<DVEMulitpleTrackViewServiceProtocol> _multipleTrackViewService;
    id<DVEToastProtocol> _toast;
    DVEDoneInfo *_doneInfo;
    UIView *_maskView;
}

@property (nonatomic) BOOL isValueChanged;
@property (readonly, nonatomic) BOOL isRewind;
@property (retain, nonatomic) DVEAudioSpeedSliderView *sliderView;
@property (retain, nonatomic) NLETrack_OC *originalTrack;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<DVEToastProtocol> toast;
@property (retain, nonatomic) DVEDoneInfo *doneInfo;
@property (retain, nonatomic) UIView *maskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOriginalTrack:(id)arg0;
- (void)setDoneInfo:(id)arg0;
- (float)convertToSliderValue:(float)arg0;
- (void)commitSlotChange:(id)arg0;
- (void)handleTapForImage:(id)arg0;
- (void)handlePanForImage:(id)arg0;
- (void)dismissWithType:(unsigned long long)arg0;
- (id)doneInfo;
- (void)topView:(id)arg0 didClickCancelButton:(id)arg1;
- (id)originalTrack;
- (void)topView:(id)arg0 didClickApplyButton:(id)arg1;
- (BOOL)isValueChanged;
- (float)convertToSpeedValue:(float)arg0;
- (BOOL)isRewind;
- (id)multipleTrackViewService;
- (void)setIsValueChanged:(BOOL)arg0;
- (void)didClickedApplyToAllView:(id)arg0;
- (void)initSet;
- (void)setMultipleTrackViewService:(id)arg0;
- (id)covertSliderTextWith:(id)arg0;
- (void)saveEdit:(id /* block */)arg0;
- (id)sliderView;
- (void)sliderValueChanged:(id)arg0;
- (void).cxx_destruct;
- (id)maskView;
- (void)setSliderView:(id)arg0;
- (void)viewDidLoad;
- (void)addObserver;
- (void)setMaskView:(id)arg0;
- (void)setupUI;
- (double)viewHeight;
- (void)setToast:(id)arg0;
- (id)toast;
- (void)initData;

@end
