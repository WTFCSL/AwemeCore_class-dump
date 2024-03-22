//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEMusicChartRankModel, UILabel;

@interface AWESelectMusicRankView : UIView <AWESelectMusicRankViewProtocol> {
    id /* block */ rankClickBlock;
    UIImageView *_rankImageView;
    UILabel *_rankLabel;
    UILabel *_rankShadowLabel;
    UILabel *_desLabel;
    UILabel *_entranceLabel;
    UIImageView *_entranceImageView;
    AWEMusicChartRankModel *_rankModel;
}

@property (retain, nonatomic) UIImageView *rankImageView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *rankShadowLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *entranceLabel;
@property (retain, nonatomic) UIImageView *entranceImageView;
@property (retain, nonatomic) AWEMusicChartRankModel *rankModel;
@property (copy, nonatomic) id /* block */ rankClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)desLabel;
- (void)setDesLabel:(id)arg0;
- (id)rankModel;
- (void)setRankModel:(id)arg0;
- (id)entranceImageView;
- (void)setEntranceImageView:(id)arg0;
- (void)setEntranceLabel:(id)arg0;
- (id)entranceLabel;
- (void)setRankImageView:(id)arg0;
- (id)rankImageView;
- (void)enterChart:(id)arg0;
- (id)rankShadowLabel;
- (id /* block */)rankClickBlock;
- (void)setRankClickBlock:(id /* block */)arg0;
- (void)setRankShadowLabel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)configureWithModel:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;

@end