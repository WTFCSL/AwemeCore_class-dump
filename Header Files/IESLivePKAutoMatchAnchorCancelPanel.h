//
//     Generated by private class-dump
//

@class IESLivePKAnchorSpeedAutoMatchPanel, NSString, UICollectionView, IESLiveCountTimer, UILabel, NSDictionary, UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKAutoMatchAnchorCancelPanel : HTSLivePopUpView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate> {
    id /* block */ _actionBlock;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_centerNicknameLabel;
    UIButton *_actionButton;
    UICollectionView *_collectionView;
    IESLiveCountTimer *_timer;
    long long _currentIndex;
    long long _userCount;
    NSDictionary *_paperWriterDictionary;
    id<IESLiveCompoundSubscription> _disposable;
    IESLivePKAnchorSpeedAutoMatchPanel *_speedAutoMatchPanel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *centerNicknameLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long userCount;
@property (copy, nonatomic) NSDictionary *paperWriterDictionary;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLivePKAnchorSpeedAutoMatchPanel *speedAutoMatchPanel;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTimer;
- (void)addTimer;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)bindAction;
- (void)actionButtonDidClick:(id)arg0;
- (void)cancelButtonDidClick:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 DIContext:(id)arg1;
- (void)p_setupStartCell;
- (void)setPaperWriterDictionary:(id)arg0;
- (id)p_timeFormatted:(long long)arg0;
- (id)paperWriterDictionary;
- (id)centerNicknameLabel;
- (void)setCenterNicknameLabel:(id)arg0;
- (void)updateCenterIndex:(long long)arg0;
- (void)changeAlphaInScreenCell;
- (id)cellWithIndex:(long long)arg0;
- (void)setSpeedAutoMatchPanel:(id)arg0;
- (id)speedAutoMatchPanel;
- (void)p_nextpage;
- (void)showSpeedAutoMatchPanelIfNeed;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)timer;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (long long)currentIndex;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)setTimer:(id)arg0;
- (id /* block */)actionBlock;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (long long)userCount;
- (void)setUserCount:(long long)arg0;
- (void)setupData;
- (void)layoutUI;

@end