//
//     Generated by private class-dump
//

@class UIImageView, LOTAnimationView, UILabel, UIView, AWEAwemeModel;
@protocol AWELiveAppointmentAnchorViewDeleate;

@interface AWELiveAppointmentAnchorView : UIView {
    BOOL _hasReservation;
    id<AWELiveAppointmentAnchorViewDeleate> _delegate;
    UIImageView *_iconImage;
    UILabel *_tagLabel;
    UILabel *_appointTimeLabel;
    UILabel *_appointStatusLabel;
    LOTAnimationView *_lottie;
    UIView *_maskView;
    AWEAwemeModel *_awemeModel;
    UIView *_lineView;
    long long _anchorType;
}

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *appointTimeLabel;
@property (retain, nonatomic) UILabel *appointStatusLabel;
@property (retain, nonatomic) LOTAnimationView *lottie;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) BOOL hasReservation;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) long long anchorType;
@property (weak, nonatomic) id<AWELiveAppointmentAnchorViewDeleate> delegate;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)p_setupUI;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)setHasReservation:(BOOL)arg0;
- (id)lottie;
- (void)setLottie:(id)arg0;
- (void)updateReservationStatus:(BOOL)arg0;
- (BOOL)liveHasOrdered;
- (void)setAppointTimeLabel:(id)arg0;
- (void)tapLiveAppointment;
- (void)setAppointStatusLabel:(id)arg0;
- (id)appointTimeLabel;
- (id)appointStatusLabel;
- (id)iconImage;
- (long long)anchorType;
- (void).cxx_destruct;
- (id)maskView;
- (id)initWithType:(long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setIconImage:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (BOOL)hasReservation;
- (void)updateWithModel:(id)arg0;
- (void)setAnchorType:(long long)arg0;

@end