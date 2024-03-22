//
//     Generated by private class-dump
//

@class NSString, ACCVideoReplyCommentModel;

@interface AWEInteractionVideoCommentStickerModel : AWEInteractionStickerModel {
    ACCVideoReplyCommentModel *_commentModel;
    NSString *_stickerConfig;
}

@property (retain, nonatomic) ACCVideoReplyCommentModel *commentModel;
@property (copy, nonatomic) NSString *stickerConfig;

+ (id)commentModelJSONTransformer;
+ (id)convertFromReplyCommentModel:(id)arg0;
+ (id)convertFromCommentModel:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentModel;
- (void)setCommentModel:(id)arg0;
- (void)setStickerConfig:(id)arg0;
- (id)stickerConfig;
- (BOOL)nativeSticker;
- (void).cxx_destruct;

@end