//
//     Generated by private class-dump
//

@class IESLiveSlideBeautyPickerView, IESLiveBeautyEffectPickerView, HTSLiveFilterPickerView, NSString, UIView, NSMutableArray, UIButton;
@protocol IESLiveBeautyContainerViewDelegate;

@interface IESLiveBeautyContainerView : UIView {
    BOOL _useNewPanelStyle;
    BOOL _onShowToast;
    id<IESLiveBeautyContainerViewDelegate> _delegate;
    IESLiveSlideBeautyPickerView *_beautyView;
    IESLiveSlideBeautyPickerView *_bodyView;
    IESLiveSlideBeautyPickerView *_makeupView;
    IESLiveSlideBeautyPickerView *_vrBeautyView;
    IESLiveSlideBeautyPickerView *_vrMakeupView;
    HTSLiveFilterPickerView *_filterView;
    IESLiveBeautyEffectPickerView *_effectView;
    IESLiveSlideBeautyPickerView *_templateView;
    UIView *_containerView;
    UIView *_backgroundView;
    UIView *_secondaryBeautyView;
    UIView *_indicator;
    UIButton *_beautyButton;
    UIButton *_bodyButton;
    UIButton *_filterButton;
    UIButton *_makeupButton;
    UIButton *_templateButton;
    UIButton *_effectButton;
    UIButton *_VRBeautyButton;
    UIButton *_VRMakeupButton;
    NSMutableArray *_buttonArray;
    NSMutableArray *_viewArray;
    double _buttonOffsetX;
    NSString *_liveTypeStr;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *secondaryBeautyView;
@property (retain, nonatomic) UIView *indicator;
@property (retain, nonatomic) UIButton *beautyButton;
@property (retain, nonatomic) UIButton *bodyButton;
@property (retain, nonatomic) UIButton *filterButton;
@property (retain, nonatomic) UIButton *makeupButton;
@property (retain, nonatomic) UIButton *templateButton;
@property (retain, nonatomic) UIButton *effectButton;
@property (retain, nonatomic) UIButton *VRBeautyButton;
@property (retain, nonatomic) UIButton *VRMakeupButton;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) IESLiveSlideBeautyPickerView *beautyView;
@property (retain, nonatomic) IESLiveSlideBeautyPickerView *bodyView;
@property (retain, nonatomic) IESLiveSlideBeautyPickerView *makeupView;
@property (retain, nonatomic) IESLiveSlideBeautyPickerView *templateView;
@property (retain, nonatomic) IESLiveSlideBeautyPickerView *vrBeautyView;
@property (retain, nonatomic) IESLiveSlideBeautyPickerView *vrMakeupView;
@property (retain, nonatomic) IESLiveBeautyEffectPickerView *effectView;
@property (retain, nonatomic) HTSLiveFilterPickerView *filterView;
@property (retain, nonatomic) NSMutableArray *viewArray;
@property (nonatomic) double buttonOffsetX;
@property (copy, nonatomic) NSString *liveTypeStr;
@property (nonatomic) BOOL onShowToast;
@property (weak, nonatomic) id<IESLiveBeautyContainerViewDelegate> delegate;
@property (nonatomic) BOOL useNewPanelStyle;

- (void)buttonClicked:(id)arg0;
- (void)setButtonArray:(id)arg0;
- (id)buttonArray;
- (id)beautyButton;
- (id)liveTypeStr;
- (id)templateButton;
- (void)setTemplateButton:(id)arg0;
- (void)setBeautyButton:(id)arg0;
- (void)loadSegments:(id)arg0;
- (void)setUseNewPanelStyle:(BOOL)arg0;
- (void)setLiveTypeStr:(id)arg0;
- (void)disableBeautySelection:(BOOL)arg0;
- (void)setEnableFilterFeature:(BOOL)arg0;
- (void)setEnableMakeupFeature:(BOOL)arg0;
- (void)setIsBodyConflictByEffect:(BOOL)arg0;
- (id)makeupView;
- (id)beautyView;
- (id)vrBeautyView;
- (id)vrMakeupView;
- (void)clearRedDotForView:(id)arg0;
- (void)insertSecondaryViewAnimated:(id)arg0;
- (void)removeSecondaryViewAnimated;
- (BOOL)useNewPanelStyle;
- (void)updateAllBeautyCache;
- (void)undoAllBeautyEffect;
- (void)setButtonOffsetX:(double)arg0;
- (void)configUIWithSegmentType:(unsigned long long)arg0 index:(long long)arg1;
- (id)configButton:(unsigned long long)arg0 index:(long long)arg1;
- (double)buttonOffsetX;
- (id)configView:(unsigned long long)arg0 index:(long long)arg1;
- (void)setBeautyView:(id)arg0;
- (id)makeupButton;
- (void)setMakeupView:(id)arg0;
- (void)setVrBeautyView:(id)arg0;
- (void)setVrMakeupView:(id)arg0;
- (void)setBodyButton:(id)arg0;
- (void)setMakeupButton:(id)arg0;
- (void)setVRBeautyButton:(id)arg0;
- (void)setVRMakeupButton:(id)arg0;
- (id)bodyButton;
- (id)VRMakeupButton;
- (id)VRBeautyButton;
- (id)secondaryBeautyView;
- (void)addContainerView;
- (void)setSecondaryBeautyView:(id)arg0;
- (BOOL)onShowToast;
- (void)setOnShowToast:(BOOL)arg0;
- (id)backgroundView;
- (id)effectView;
- (void).cxx_destruct;
- (id)filterView;
- (void)setIndicator:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFilterView:(id)arg0;
- (id)indicator;
- (id)delegate;
- (void)setEffectView:(id)arg0;
- (void)setFilterButton:(id)arg0;
- (id)containerView;
- (id)filterButton;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)bodyView;
- (void)setBodyView:(id)arg0;
- (id)viewArray;
- (void)setViewArray:(id)arg0;
- (void)setTemplateView:(id)arg0;
- (id)templateView;
- (id)effectButton;
- (void)setEffectButton:(id)arg0;

@end
