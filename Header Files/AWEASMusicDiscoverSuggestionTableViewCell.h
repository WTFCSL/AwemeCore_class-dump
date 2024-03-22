//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UILabel, UICollectionViewFlowLayout, UIView;
@protocol AWEASMusicDiscoverSuggestionTableViewCellDelegate;

@interface AWEASMusicDiscoverSuggestionTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isHideSeparator;
    NSArray *_words;
    id<AWEASMusicDiscoverSuggestionTableViewCellDelegate> _delegate;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    UIView *_separatorLine;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) NSArray *words;
@property (weak, nonatomic) id<AWEASMusicDiscoverSuggestionTableViewCellDelegate> delegate;
@property (nonatomic) BOOL isHideSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsHideSeparator:(BOOL)arg0;
- (BOOL)isHideSeparator;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)didMoveToSuperview;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)words;
- (void)setWords:(id)arg0;
- (void)setupUI;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg0;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg0;

@end
