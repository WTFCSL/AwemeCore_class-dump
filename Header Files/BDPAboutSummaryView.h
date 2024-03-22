//
//     Generated by private class-dump
//

@class BDPImageView, UILabel, BDPUniqueID;

@interface BDPAboutSummaryView : UIView {
    BDPImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_summaryLabel;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (readonly, nonatomic) BDPUniqueID *uniqueID;

- (void)updateSummaryLabelWidth;
- (void)addGestureRecognizerToNameLabel:(id)arg0;
- (void)addGestureRecognizerToIconView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setSummary:(id)arg0;
- (id)iconView;
- (void)setUniqueID:(id)arg0;
- (void)setIconView:(id)arg0;
- (id)nameLabel;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)layoutSubviews;
- (void)setNameLabel:(id)arg0;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg0;

@end