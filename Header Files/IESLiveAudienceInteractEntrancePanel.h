//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView, HTSEventContext, UILabel, UIView, UIButton;

@interface IESLiveAudienceInteractEntrancePanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    NSArray *_configurations;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UIButton *_switchButton;
    UIView *_line;
    UIView *_preApplyListView;
    HTSEventContext *_trackContext;
}

@property (copy, nonatomic) NSArray *configurations;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *preApplyListView;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setSwitchButton:(id)arg0;
- (BOOL)p_needToShowPreApplyList;
- (void)p_trackSwitchButton;
- (void)didClickSwitchButton;
- (void)setPreApplyListView:(id)arg0;
- (id)preApplyListView;
- (id)initWithConfigurations:(id)arg0 trackContext:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (id)configurations;
- (void)setCollectionView:(id)arg0;
- (void)setConfigurations:(id)arg0;
- (id)line;
- (void)setTitleLabel:(id)arg0;
- (void)setupConstraints;
- (void)setLine:(id)arg0;
- (void)setupViews;
- (id)switchButton;

@end
