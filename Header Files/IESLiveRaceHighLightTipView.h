//
//     Generated by private class-dump
//

@class HTSLiveEpisodeHighLight, UIImageView, IESLiveRaceHighLightTipShareBtn, UILabel, UIView;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveRaceHighLightTipView : UIView {
    id /* block */ _shareAction;
    UIView *_contentView;
    UILabel *_titleLable;
    UIImageView *_hotTagView;
    UIImageView *_imageView;
    UIImageView *_tipArrow;
    IESLiveRaceHighLightTipShareBtn *_shareBtn;
    HTSLiveEpisodeHighLight *_model;
    id<IESLiveRoomServiceAdapter> _mixedRoom;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIImageView *hotTagView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (retain, nonatomic) IESLiveRaceHighLightTipShareBtn *shareBtn;
@property (retain, nonatomic) HTSLiveEpisodeHighLight *model;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> mixedRoom;
@property (copy, nonatomic) id /* block */ shareAction;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (id)shareBtn;
- (void)setShareBtn:(id)arg0;
- (id /* block */)shareAction;
- (void)setShareAction:(id /* block */)arg0;
- (id)initWithRoomModel:(id)arg0;
- (void)setTipArrow:(id)arg0;
- (id)mixedRoom;
- (void)setMixedRoom:(id)arg0;
- (void)showHighLightTipInView:(id)arg0 onView:(id)arg1 model:(id)arg2;
- (id)hotTagView;
- (void)p_showSelfInView:(id)arg0 onView:(id)arg1;
- (void)setHotTagView:(id)arg0;
- (BOOL)needSportsStyle;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)imageView;
- (void)setup;
- (void)setImageView:(id)arg0;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)tipArrow;

@end
