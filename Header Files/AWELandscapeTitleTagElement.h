//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWELandscapeTitleTagElement : AWELandscapeInteractionBaseElement {
    BOOL _hasTrackShowPaidTag;
    BOOL _hasTrackShowHasUnlockedTag;
    UIView *_tagContainerView;
    UILabel *_tagLabel;
}

@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) BOOL hasTrackShowPaidTag;
@property (nonatomic) BOOL hasTrackShowHasUnlockedTag;

- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)tagContainerView;
- (void)trackShowHasUnlockedTagIfNeeded;
- (void)trackShowHasPaidTagIfNeeded;
- (BOOL)hasTrackShowPaidTag;
- (void)setHasTrackShowPaidTag:(BOOL)arg0;
- (BOOL)hasTrackShowHasUnlockedTag;
- (void)setHasTrackShowHasUnlockedTag:(BOOL)arg0;
- (void)setTagContainerView:(id)arg0;
- (void)updateState:(long long)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;

@end
