//
//     Generated by private class-dump
//

@class ACCVideoCommentModel, BGView, UIImageView, AWEInteractionStickerModel, UILabel, NSString, YYLabel;
@protocol ACCStickerContainerProtocol;

@interface ACCVideoCommentStickerView : UIView <ACCStickerEditContentProtocol, ACCStickerContentDisplayProtocol> {
    BOOL _transparent;
    id<ACCStickerContainerProtocol> stickerContainer;
    id /* block */ coordinateDidChange;
    long long _stickerId;
    id /* block */ _triggerDragDeleteCallback;
    ACCVideoCommentModel *_videoCommentModel;
    UILabel *_replierLabel;
    UIImageView *_avatarImageView;
    YYLabel *_commentLabel;
    UIImageView *_emoIconImageView;
    BGView *_bgView;
    AWEInteractionStickerModel *_stickerModel;
}

@property (retain, nonatomic) UILabel *replierLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) YYLabel *commentLabel;
@property (retain, nonatomic) UIImageView *emoIconImageView;
@property (retain, nonatomic) BGView *bgView;
@property (retain, nonatomic) ACCVideoCommentModel *videoCommentModel;
@property (retain, nonatomic) AWEInteractionStickerModel *stickerModel;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStickerId:(long long)arg0;
- (long long)stickerId;
- (void)p_setupUI;
- (void)p_updateUI;
- (void)setStickerModel:(id)arg0;
- (id)stickerModel;
- (void)configWithModel:(id)arg0 completion:(id /* block */)arg1;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (id)initWithStickerModel:(id)arg0;
- (id)initWithStickerModel:(id)arg0 showVisualEffect:(BOOL)arg1 shouldRasterize:(BOOL)arg2;
- (id /* block */)coordinateDidChange;
- (id)copyForContext:(id)arg0;
- (void)setCoordinateDidChange:(id /* block */)arg0;
- (void)contentDidUpdateToScale:(double)arg0;
- (id /* block */)triggerDragDeleteCallback;
- (void)setTriggerDragDeleteCallback:(id /* block */)arg0;
- (id)initWithStickerModel:(id)arg0 showVisualEffect:(BOOL)arg1;
- (id)videoCommentModel;
- (id)replierLabel;
- (void)setVideoCommentModel:(id)arg0;
- (id)emoIconImageView;
- (void)setReplierLabel:(id)arg0;
- (void)setEmoIconImageView:(id)arg0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isTransparent;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setTransparent:(BOOL)arg0;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg0;

@end
