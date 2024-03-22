//
//     Generated by private class-dump
//

@class AWEChallengeDetailFilterCell, NSString;
@protocol AWEChallengeDetailFilterSectionControllerDelegate;

@interface AWEChallengeDetailFilterSectionController : AWEBaseListSectionController <AWEChallengeDetailFilterCellDelegate> {
    id<AWEChallengeDetailFilterSectionControllerDelegate> _delegate;
    double _sectionHeight;
    AWEChallengeDetailFilterCell *_staticFilterCell;
}

@property (nonatomic) double sectionHeight;
@property (retain, nonatomic) AWEChallengeDetailFilterCell *staticFilterCell;
@property (weak, nonatomic) id<AWEChallengeDetailFilterSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didBindSectionViewModel;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (void)updateContentAlpha:(double)arg0;
- (void)didChangeSortType:(unsigned long long)arg0;
- (void)setStaticFilterCell:(id)arg0;
- (id)staticFilterCell;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)sectionBackgroundColor;
- (double)sectionHeight;
- (void)setSectionHeight:(double)arg0;

@end
