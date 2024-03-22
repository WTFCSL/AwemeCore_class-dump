//
//     Generated by private class-dump
//

@class IESLiveInteractSubtitleViewModel, NSArray, NSString, IESLiveInteractSubtitleConfig, IESLiveInteractSubtitleCollectionViewCell;
@protocol IESLiveCompoundSubscription;

@interface IESLiveInteractSubtitleNormalView : UIView <IESLiveInteractSubtitleViewProtocol> {
    IESLiveInteractSubtitleViewModel *_viewModel;
    NSArray *_userModels;
    double _animDuration;
    IESLiveInteractSubtitleConfig *_config;
    id<IESLiveCompoundSubscription> _disposable;
    IESLiveInteractSubtitleCollectionViewCell *_firstCell;
    IESLiveInteractSubtitleCollectionViewCell *_secondCell;
    IESLiveInteractSubtitleCollectionViewCell *_incomingCell;
}

@property (weak, nonatomic) IESLiveInteractSubtitleViewModel *viewModel;
@property (copy, nonatomic) NSArray *userModels;
@property (nonatomic) double animDuration;
@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveInteractSubtitleCollectionViewCell *firstCell;
@property (retain, nonatomic) IESLiveInteractSubtitleCollectionViewCell *secondCell;
@property (retain, nonatomic) IESLiveInteractSubtitleCollectionViewCell *incomingCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)arg0;
- (void)initView;
- (void)bindViewModel;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (double)animDuration;
- (void)setAnimDuration:(double)arg0;
- (void)setUserModels:(id)arg0;
- (id)userModels;
- (void)updateUsers:(id)arg0;
- (void)setFirstCell:(id)arg0;
- (id)firstCell;
- (void)setSecondCell:(id)arg0;
- (id)secondCell;
- (void)setIncomingCell:(id)arg0;
- (id)incomingCell;
- (void)layoutSytleFrom;
- (id)userIdToUserName:(id)arg0;
- (void)setCellContent;
- (void)scrollIfNeeded;
- (id)getFormatName:(id)arg0;
- (void)scrollAnimationEmptyNameWithCompletion:(id /* block */)arg0;
- (void)scrollAnimationWithCompletion:(id /* block */)arg0;
- (void)layoutSytleTo;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)viewModel;
- (void)dealloc;

@end