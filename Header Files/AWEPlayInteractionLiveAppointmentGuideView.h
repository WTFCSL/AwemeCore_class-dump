//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWEPlayInteractionLiveAppointmentGuideView : UIView {
    UIView *_appointmentContentView;
    UILabel *_dateLabel;
    UIView *_dividerLine;
    UILabel *_appointmentLabel;
    UILabel *_appointmentNextLabel;
}

@property (retain, nonatomic) UIView *appointmentContentView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIView *dividerLine;
@property (retain, nonatomic) UILabel *appointmentLabel;
@property (retain, nonatomic) UILabel *appointmentNextLabel;

- (id)dividerLine;
- (void)setDividerLine:(id)arg0;
- (void)updateWithModel:(id)arg0 isClick:(BOOL)arg1;
- (id)appointmentContentView;
- (id)appointmentLabel;
- (id)appointmentNextLabel;
- (void)setAppointmentContentView:(id)arg0;
- (void)setAppointmentLabel:(id)arg0;
- (void)setAppointmentNextLabel:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isAccessibilityElement;
- (id)dateLabel;
- (void)setupUI;
- (void)setDateLabel:(id)arg0;

@end
