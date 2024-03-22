//
//     Generated by private class-dump
//

@class UILabel, NSString, UIStackView;

@interface IESLiveVSSeekProgressText : UIView <IESLiveSeekProgressTextProtocal> {
    UIStackView *_containerView;
    UILabel *_currentLabel;
    UILabel *_durationLabel;
    UILabel *_divider;
    long long _labelStyle;
}

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UILabel *currentLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *divider;
@property (nonatomic) long long labelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)boldFontDescriptor;
- (void)updateWithOrientation:(BOOL)arg0;
- (double)getBottomGap:(id)arg0;
- (void)updateWithProgress:(id)arg0 duration:(id)arg1 needShadow:(BOOL)arg2;
- (void)updateWithProgress:(id)arg0 duration:(id)arg1;
- (id)mediumFontDescriptor;
- (long long)labelStyle;
- (id)init;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setup;
- (id)containerView;
- (void)setLabelStyle:(long long)arg0;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (id)currentLabel;
- (void)setCurrentLabel:(id)arg0;
- (id)divider;
- (void)setDivider:(id)arg0;

@end
