//
//     Generated by private class-dump
//

@class UIStackView, IESLiveKTVMultiChorusButton, IESLiveKtvSongStruct, PlaylistTab, IESLiveSongCellTagLabel, UIImageView, UIButton, IESLiveKTVMultiChorusInfoView, UIView, IESLiveSongWantListenInfoView, UILabel;
@protocol IESLiveSubscription, IESLiveSongBaseCellDelegate, IESLiveKTVOrderPanelProtocol;

@interface IESLiveSongBaseCell : IESLiveListViewCell {
    id<IESLiveSongBaseCellDelegate> _delegate;
    id<IESLiveKTVOrderPanelProtocol> _panelModel;
    PlaylistTab *_category;
    UIView *_leftContainerView;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_singerLabel;
    UILabel *_timeLabel;
    UIButton *_favoriteButton;
    UIStackView *_scoreLabels;
    IESLiveSongCellTagLabel *_clipSingTag;
    IESLiveSongWantListenInfoView *_wantListenInfoView;
    IESLiveKTVMultiChorusButton *_multiChorusButton;
    IESLiveKTVMultiChorusInfoView *_multiChorusInfoView;
    IESLiveKtvSongStruct *_musicModel;
    double _titleLabelMaxWidth;
    UIImageView *_chorusIcon;
    UILabel *_coverTimeLable;
    id<IESLiveSubscription> _favoriteDisposable;
}

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *scoreLabels;
@property (retain, nonatomic) IESLiveSongCellTagLabel *clipSingTag;
@property (retain, nonatomic) UILabel *singerLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (retain, nonatomic) IESLiveSongWantListenInfoView *wantListenInfoView;
@property (retain, nonatomic) IESLiveKTVMultiChorusButton *multiChorusButton;
@property (retain, nonatomic) IESLiveKTVMultiChorusInfoView *multiChorusInfoView;
@property (retain, nonatomic) UIImageView *chorusIcon;
@property (retain, nonatomic) UILabel *coverTimeLable;
@property (retain, nonatomic) IESLiveKtvSongStruct *musicModel;
@property (retain, nonatomic) id<IESLiveSubscription> favoriteDisposable;
@property (weak, nonatomic) id<IESLiveSongBaseCellDelegate> delegate;
@property (weak, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (retain, nonatomic) PlaylistTab *category;
@property (retain, nonatomic) UIView *leftContainerView;
@property (nonatomic) double titleLabelMaxWidth;

+ (double)heightForItem:(id)arg0;

- (id)musicModel;
- (id)leftContainerView;
- (void)setMusicModel:(id)arg0;
- (void)setLeftContainerView:(id)arg0;
- (id)panelModel;
- (void)__setupUIs;
- (void)setPanelModel:(id)arg0;
- (void)renderWithItem:(id)arg0;
- (void)updateMultiChorusJoinState:(BOOL)arg0;
- (id)multiChorusButton;
- (id)singerLabel;
- (id)multiChorusInfoView;
- (void)setMultiChorusButton:(id)arg0;
- (void)setSingerLabel:(id)arg0;
- (void)setMultiChorusInfoView:(id)arg0;
- (void)setTitleLabelMaxWidth:(double)arg0;
- (double)titleLabelMaxWidth;
- (id)wantListenInfoView;
- (void)p_didClickedFavoriteButton;
- (id)clipSingTag;
- (struct CGSize { double x0; double x1; })scoreLabelsSize;
- (void)setCoverTimeLable:(id)arg0;
- (id)coverTimeLable;
- (void)setWantListenInfoView:(id)arg0;
- (void)didClickMultiChorus:(BOOL)arg0;
- (void)setChorusIcon:(id)arg0;
- (id)chorusIcon;
- (void)remakeOptimizeUIConstraint;
- (unsigned long long)getMusicRealDuration:(id)arg0;
- (id)favoriteDisposable;
- (void)setFavoriteDisposable:(id)arg0;
- (void)setClipSingTag:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)category;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setCategory:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (id)delegate;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)timeLabel;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;
- (void)setScoreLabels:(id)arg0;
- (id)scoreLabels;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
