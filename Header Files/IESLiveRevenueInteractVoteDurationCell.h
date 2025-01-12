//
//     Generated by private class-dump
//

@class NSNumber, UILabel;
@protocol IESLiveSubscription;

@interface IESLiveRevenueInteractVoteDurationCell : UICollectionViewCell {
    id<IESLiveSubscription> _disposable;
    NSNumber *_duration;
    UILabel *_durationLabel;
}

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) UILabel *durationLabel;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)updateSelected:(BOOL)arg0;
- (void)updateDuration:(id)arg0 viewModel:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)duration;
- (void)prepareForReuse;
- (void)setDuration:(id)arg0;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;

@end
