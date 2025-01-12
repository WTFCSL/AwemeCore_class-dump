//
//     Generated by private class-dump
//

@class NSArray, IESLiveCountTimer, UICollectionView, IESLiveEmptyView, NSString, UIButton;

@interface IESLiveRoomBattleChooseGuestPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isRequesting;
    UICollectionView *_collectionView;
    UIButton *_confirmButton;
    IESLiveCountTimer *_countTimer;
    IESLiveEmptyView *_emptyView;
    NSArray *_guestsInfoArray;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) IESLiveCountTimer *countTimer;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (copy, nonatomic) NSArray *guestsInfoArray;
@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)setCountTimer:(id)arg0;
- (id)countTimer;
- (void)setupCountTimer;
- (void)didTapConfirmButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 guestsInfo:(id)arg1 DIContext:(id)arg2;
- (void)confirmGuest;
- (long long)selectGuestCount;
- (id)generateUidsStr;
- (id)guestsInfoArray;
- (void)setGuestsInfoArray:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;

@end
