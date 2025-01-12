//
//     Generated by private class-dump
//

@class AWECommentModel, AWEBarrageViewerModel, AWEBarrageDiggModel, AWEBarrageGoldLikeModel, AWEBarrageCoinModel, AWEURLModel;

@interface AWEBarrageModel : AWEBaseApiModel {
    long long _type;
    AWECommentModel *_comment;
    AWEBarrageDiggModel *_digg;
    AWEBarrageViewerModel *_viewer;
    AWEBarrageCoinModel *_coin;
    AWEBarrageGoldLikeModel *_goldLike;
    AWEURLModel *_avatarURLModel;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) AWECommentModel *comment;
@property (retain, nonatomic) AWEBarrageDiggModel *digg;
@property (retain, nonatomic) AWEBarrageViewerModel *viewer;
@property (retain, nonatomic) AWEBarrageCoinModel *coin;
@property (retain, nonatomic) AWEBarrageGoldLikeModel *goldLike;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;

+ (id)commentJSONTransformer;
+ (id)diggUserJSONTransformer;
+ (id)viewerUserJSONTransformer;
+ (id)coinJSONTransformer;
+ (id)goldLikeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)goldLike;
- (void)setAvatarURLModel:(id)arg0;
- (void)setGoldLike:(id)arg0;
- (id)avatarURLModel;
- (id)digg;
- (id)viewer;
- (void)setDigg:(id)arg0;
- (void)setViewer:(id)arg0;
- (void)setCoin:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)comment;
- (void)setComment:(id)arg0;
- (id)coin;

@end
