//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, IESLivePublicScreenFixedCardContainer, IESLivePublicScreenFixedCardModel, NSMutableArray, NSString;

@interface IESLivePublicScreenFixedCardFragment : IESLiveRoomComponent <IESLiveMessageInteractionModuleFixedCardInterface, IESLiveMessageInteractionModuleMessageListAction> {
    BOOL _messageListShown;
    BOOL _mountFinished;
    NSMutableDictionary *_registeredCardItems;
    NSMutableArray *_cardModelQueue;
    IESLivePublicScreenFixedCardModel *_currentCardModel;
    NSTimer *_timer;
    long long _displayedCardCount;
    IESLivePublicScreenFixedCardContainer *_currentDisplayingCard;
}

@property (retain, nonatomic) NSMutableDictionary *registeredCardItems;
@property (retain, nonatomic) NSMutableArray *cardModelQueue;
@property (retain, nonatomic) IESLivePublicScreenFixedCardModel *currentCardModel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL messageListShown;
@property (nonatomic) BOOL mountFinished;
@property (nonatomic) long long displayedCardCount;
@property (retain, nonatomic) IESLivePublicScreenFixedCardContainer *currentDisplayingCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (id)currentCardModel;
- (void)mountDidFinishForLevel:(long long)arg0;
- (void)setCurrentCardModel:(id)arg0;
- (void)showFixedCardView:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 forCardItem:(id)arg2;
- (void)dismissFixedCardWithName:(id)arg0;
- (BOOL)isExistCurrentCardMode;
- (void)showFixedCardView:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 forCardName:(id)arg2;
- (void)updateFixedCardSize:(struct CGSize { double x0; double x1; })arg0 forCardName:(id)arg1;
- (void)registerCard:(id)arg0;
- (void)messageListFirstFrameDidShow;
- (void)setCardModelQueue:(id)arg0;
- (void)setRegisteredCardItems:(id)arg0;
- (void)setDisplayedCardCount:(long long)arg0;
- (void)addCardModelToWithCardName:(id)arg0 duration:(double)arg1 params:(id)arg2;
- (void)checkCardQueue;
- (void)setMountFinished:(BOOL)arg0;
- (id)cardNameAllowList;
- (id)registeredCardItems;
- (id)localCardNameList;
- (void)checkRoomBottomCardInfoForItem:(id)arg0;
- (void)currentFixedCardDisplayStateDidChange;
- (void)setCurrentDisplayingCard:(id)arg0;
- (long long)displayedCardCount;
- (void)cardDisplayTimeOut;
- (id)currentDisplayingCard;
- (void)setMessageListShown:(BOOL)arg0;
- (id)cardModelQueue;
- (id)lowPriorityMutexCardNameList;
- (BOOL)cardHasEnqueueWithName:(id)arg0;
- (long long)priorityForCardName:(id)arg0;
- (BOOL)messageListShown;
- (BOOL)mountFinished;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;

@end