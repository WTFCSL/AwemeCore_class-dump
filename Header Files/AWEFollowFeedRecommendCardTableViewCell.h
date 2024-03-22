//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, UIView, UIViewController;
@protocol UIScrollViewDelegate, AWEFeedTableViewCellViewControllerProtocol;

@interface AWEFollowFeedRecommendCardTableViewCell : UITableViewCell <AWEFeedTableViewCellProtocol> {
    long long _indexPath;
    UIViewController<AWEFeedTableViewCellViewControllerProtocol> *_viewController;
    UIViewController *_parentVC;
    NSString *_referString;
    AWEAwemeModel *_registerElementModel;
    long long _cellDisplayState;
    long long _cellPageAppearState;
    id /* block */ _currentCellPageAppearStateBlock;
    struct EngineAudioWrapper { } *_audioWrapper;
    struct EngineVideoWrapper { } *videoWrapper;
}

@property (retain, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol> *viewController;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { } *videoWrapper;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (struct EngineAudioWrapper { } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { } *)arg0;
- (struct EngineVideoWrapper { } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { } *)arg0;
- (void)configWithModel:(id)arg0;
- (id)registerElementModel;
- (void)setRegisterElementModel:(id)arg0;
- (long long)cellDisplayState;
- (void)setCellDisplayState:(long long)arg0;
- (long long)cellPageAppearState;
- (void)setCellPageAppearState:(long long)arg0;
- (id /* block */)currentCellPageAppearStateBlock;
- (void)setCurrentCellPageAppearStateBlock:(id /* block */)arg0;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)prepareForDisplay;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setIndexPath:(long long)arg0;
- (void)stop;
- (long long)indexPath;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)configureWithModel:(id)arg0;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end
