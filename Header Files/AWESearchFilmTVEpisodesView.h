//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEGeneralSearchModel, UIView, NSMutableArray, AWEGeneralFilmTVSourceModel;

@interface AWESearchFilmTVEpisodesView : UIView <AWESearchFilmTVEpisodesProtocol> {
    BOOL fromChallenge;
    id /* block */ buttonClickedBlock;
    AWEGeneralSearchModel *_searchModel;
    AWEGeneralFilmTVSourceModel *_sourceModel;
    long long _buttonCount;
    NSMutableArray *_buttonArray;
    NSMutableArray *_vipLabelArray;
    NSArray *_modelArray;
    NSArray *_cellList;
    UIView *_footerView;
    UIView *_challengeStyleFooterView;
    UIView *_dividingLine;
}

@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) AWEGeneralFilmTVSourceModel *sourceModel;
@property (nonatomic) long long buttonCount;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) NSMutableArray *vipLabelArray;
@property (retain, nonatomic) NSArray *modelArray;
@property (retain, nonatomic) NSArray *cellList;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *challengeStyleFooterView;
@property (retain, nonatomic) UIView *dividingLine;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;
@property (nonatomic) BOOL fromChallenge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight:(id)arg0 ignoreBottomPadding:(BOOL)arg1;
+ (BOOL)enableFixEpisodesCellReuse;
+ (double)viewHeight:(id)arg0;

- (id)modelArray;
- (void)setModelArray:(id)arg0;
- (id)dividingLine;
- (void)setDividingLine:(id)arg0;
- (void)setButtonArray:(id)arg0;
- (id)buttonArray;
- (double)viewHeight:(id)arg0 ignoreBottomPadding:(BOOL)arg1;
- (void)updateSourceModel:(id)arg0;
- (void)setButtonClickedBlock:(id /* block */)arg0;
- (void)setFromChallenge:(BOOL)arg0;
- (id)cellList;
- (BOOL)fromChallenge;
- (id)challengeStyleFooterView;
- (void)setButtonCount:(long long)arg0;
- (id)createViewModels:(id)arg0;
- (id)vipLabelArray;
- (void)updatePaymentStatus:(id)arg0 withLabel:(id)arg1;
- (void)cellSelected:(id)arg0;
- (id /* block */)buttonClickedBlock;
- (void)updateEpisodesModel:(id)arg0;
- (void)setVipLabelArray:(id)arg0;
- (void)setCellList:(id)arg0;
- (void)setChallengeStyleFooterView:(id)arg0;
- (id)footerView;
- (void)buttonTapped:(id)arg0;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)buttonCount;
- (id)sourceModel;
- (id)searchModel;
- (void)setSearchModel:(id)arg0;
- (void)setSourceModel:(id)arg0;

@end