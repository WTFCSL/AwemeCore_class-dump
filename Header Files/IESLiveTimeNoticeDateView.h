//
//     Generated by private class-dump
//

@class NSString, NSArray, IGListAdapter, UICollectionView, UILabel, NSDictionary, IESLiveTimeNoticeViewModel;

@interface IESLiveTimeNoticeDateView : UIView <IGListAdapterDataSource, IGListSingleSectionControllerDelegate> {
    UILabel *_titleLabel;
    UICollectionView *_dateView;
    IGListAdapter *_listAdapter;
    NSArray *_selectedDays;
    NSDictionary *_daysMapper;
    IESLiveTimeNoticeViewModel *_viewModel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *dateView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) NSArray *selectedDays;
@property (retain, nonatomic) NSDictionary *daysMapper;
@property (weak, nonatomic) IESLiveTimeNoticeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (id)listAdapter;
- (void)setListAdapter:(id)arg0;
- (void)bindWithViewModel:(id)arg0;
- (id)selectedDays;
- (id)daysMapper;
- (void)setSelectedDays:(id)arg0;
- (void)setDaysMapper:(id)arg0;
- (void)setupDateCollectionView;
- (id)sortedDays;
- (void)didSelectSectionController:(id)arg0 withObject:(id)arg1;
- (void)setDateView:(id)arg0;
- (id)dateView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (void)setupTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;

@end
