//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, AWEBarrageModel, NSAttributedString, AWECommentAnchorModel;

@protocol AWEAwemeBarrageFrameProtocol <NSObject>

+ (id)defaultAvatarImage;
+ (double)barrageMoveLength:(BOOL)arg0;
+ (double)barrageMoveTime:(BOOL)arg0;

@property (retain, nonatomic) AWEBarrageModel *model;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarImageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } barrageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } authorLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dislikeBtnFrame;
@property (retain, nonatomic) NSAttributedString *authorLabelAttrbutedString;
@property (retain, nonatomic) NSAttributedString *contentLabelAttrbutedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } iconImageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } musicInfoViewFrame;
@property (retain, nonatomic) NSString *musicLabelString;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } anchorViewFrame;
@property (retain, nonatomic) AWECommentAnchorModel *anchorModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } relationViewFrame;
@property (retain, nonatomic) id relationModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dislikeLabelFrame;
@property (retain, nonatomic) NSAttributedString *dislikeAttrbutedString;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)setMusicLabelString:(id)arg0;
- (id)musicLabelString;
- (id)anchorModel;
- (void)setAnchorModel:(id)arg0;
- (void)setAuthorLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRelationModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })authorLabelFrame;
- (void)setContentLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentLabelFrame;
- (id)relationModel;
- (id)avatarURLModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dislikeBtnFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })musicInfoViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })relationViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dislikeLabelFrame;
- (id)dislikeAttrbutedString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarImageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barrageViewFrame;
- (id)authorLabelAttrbutedString;
- (id)contentLabelAttrbutedString;
- (void)setAvatarImageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAuthorLabelAttrbutedString:(id)arg0;
- (void)setContentLabelAttrbutedString:(id)arg0;
- (void)setAnchorViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDislikeBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBarrageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIconImageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)calculateWithModel:(id)arg0 containerWidth:(double)arg1 awemeModel:(id)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconImageViewFrame;
- (void)setMusicInfoViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRelationViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDislikeLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDislikeAttrbutedString:(id)arg0;
- (void)setModel:(id)arg0;
- (id)model;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundViewFrame;
- (void)setBackgroundViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
