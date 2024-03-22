//
//     Generated by private class-dump
//

@class NSString, AWEChallengeFilterView, AWEChallengeDetailFilterModel, AWEChallengeVideoHeadView;
@protocol AWEChallengeDetailFilterCellDelegate;

@interface AWEChallengeDetailFilterCell : UICollectionViewCell <AWEChallengeVideoHeadViewDelegate, AWEChallengeFilterDelegate> {
    id<AWEChallengeDetailFilterCellDelegate> _delegate;
    AWEChallengeFilterView *_filterView;
    AWEChallengeVideoHeadView *_videoHeadView;
    AWEChallengeDetailFilterModel *_filterModel;
}

@property (weak, nonatomic) id<AWEChallengeDetailFilterCellDelegate> delegate;
@property (retain, nonatomic) AWEChallengeFilterView *filterView;
@property (retain, nonatomic) AWEChallengeVideoHeadView *videoHeadView;
@property (retain, nonatomic) AWEChallengeDetailFilterModel *filterModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFilterModel:(id)arg0;
- (id)filterModel;
- (void)updateSortType:(unsigned long long)arg0;
- (id)videoHeadView;
- (void)sortViewDidClick;
- (void)filterView:(id)arg0 didFinishedSelectSortType:(unsigned long long)arg1;
- (void)configWithFilterModel:(id)arg0;
- (void)setVideoHeadView:(id)arg0;
- (void).cxx_destruct;
- (id)filterView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFilterView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end