//
//     Generated by private class-dump
//

@class NSString, IESECLLView;
@protocol IESECFeedContentCardCellDelegate, IESECFeedContentCardCellModel;

@interface IESECFeedContentCardCell : UICollectionViewCell <IESECRelationInlineProtocol> {
    IESECLLView *_llView;
    id<IESECFeedContentCardCellModel, IESECFeedContentCardCellDelegate> _viewModel;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (retain, nonatomic) id<IESECFeedContentCardCellModel, IESECFeedContentCardCellDelegate> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForCellWithModel:(id)arg0;
+ (id /* block */)cellBuilderWithModel:(id)arg0;

- (id)playItem;
- (void)bindViewModel:(id)arg0;
- (id)playerContainer;
- (id)llView;
- (void)setLlView:(id)arg0;
- (BOOL)isDanmakuEnable;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end