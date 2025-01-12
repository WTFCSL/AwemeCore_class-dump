//
//     Generated by private class-dump
//

@class NSString, IESECWinGoodsObject, IESECLLView;
@protocol IESECWinFlexGoodsCellProtocol;

@interface IESECWinFlexGoodsCell : UICollectionViewCell <IESECWinProductCellProtocol> {
    IESECWinGoodsObject *_object;
    id<IESECWinFlexGoodsCellProtocol> delegate;
    IESECLLView *_llView;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (weak, nonatomic) id<IESECWinFlexGoodsCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithObject:(id)arg0;
+ (double)heightWithObject:(id)arg0;
+ (id /* block */)cellBuilderWithObjectForLowPrice:(id)arg0;

- (id)playItem;
- (void)startPlay;
- (void)setHasPlayed:(BOOL)arg0;
- (void)stopPlay;
- (void)pausePlay;
- (id)playerContainer;
- (id)llView;
- (void)setLlView:(id)arg0;
- (void)bindObject:(id)arg0;
- (void)clickGoodsSourceView;
- (void)clickFanCouponButtonView;
- (void)clickRecommendView;
- (void)clickGoodsCoverTagViewWithModel:(id)arg0;
- (void)tagListShow:(id)arg0 goodsModel:(id)arg1;
- (void)clickTagList:(id)arg0 goodsModel:(id)arg1;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (double)maxPlayDuration;
- (void)updatePlayableDurationAndCurrentTimeWithDuration:(double)arg0 currentTime:(double)arg1;
- (id)getGoodsObject;
- (void)animateWithUpdatedObject;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)hasPlayed;

@end
