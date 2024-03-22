//
//     Generated by private class-dump
//

@class AWEFeedRelationView, NSString, UIImageView, AWECommentAnchorView, UILabel, UIView;
@protocol AFDAwemeMusicInfoViewProtocol;

@interface AWEAwemeBarrageAwemeView : AWEAwemeBarrageCommentView <AWEAwemeBarrageAwemeViewProtocol> {
    BOOL _isPinningStyle;
    UIImageView *_dislikeImageView;
    AWECommentAnchorView *_anchorView;
    AWEFeedRelationView *_relationView;
    UILabel *_dislikeLabel;
    UIView<AFDAwemeMusicInfoViewProtocol> *_musicInfoView;
}

@property (retain, nonatomic) UIImageView *dislikeImageView;
@property (retain, nonatomic) AWECommentAnchorView *anchorView;
@property (retain, nonatomic) AWEFeedRelationView *relationView;
@property (retain, nonatomic) UILabel *dislikeLabel;
@property (retain, nonatomic) UIView<AFDAwemeMusicInfoViewProtocol> *musicInfoView;
@property (nonatomic) BOOL isPinningStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)musicInfoView;
- (void)setMusicInfoView:(id)arg0;
- (void)configureUI;
- (id)relationView;
- (void)setRelationView:(id)arg0;
- (void)setDislikeImageView:(id)arg0;
- (id)dislikeImageView;
- (void)setDislikeLabel:(id)arg0;
- (id)dislikeLabel;
- (void)configureWithFrame:(id)arg0;
- (BOOL)isPinningStyle;
- (BOOL)shouldResponseEventForDislikeOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)shouldResponseEventForMusicOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)shouldResponseEventForAnchorOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)shouldResponseEventForRelationOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsPinningStyle:(BOOL)arg0;
- (void)updateStyle;
- (void)resume;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)pause;
- (id)anchorView;
- (void)setAnchorView:(id)arg0;
- (void)playAnimation;

@end
