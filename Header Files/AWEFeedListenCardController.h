//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedListenCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol> {
    BOOL _showFlag;
    BOOL _hasDisappear;
    id<AWESpecialCardContextProtocol> cardContext;
    id<AWESpecialCardDelegate> cardDelegate;
    NSString *_clickType;
    NSDictionary *_insertCardLogPassback;
}

@property (nonatomic) BOOL showFlag;
@property (nonatomic) BOOL hasDisappear;
@property (copy, nonatomic) NSString *clickType;
@property (retain, nonatomic) NSDictionary *insertCardLogPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (id)cardContext;
- (void)setCardContext:(id)arg0;
- (id)clickType;
- (void)setClickType:(id)arg0;
- (id)dateOfHour:(long long)arg0 minute:(long long)arg1 date:(id)arg2;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;
- (void)cardWillDisplay:(id)arg0 withAweme:(id)arg1;
- (void)cardDidEndDisplaying:(id)arg0 withAweme:(id)arg1;
- (void)cardDidAppear:(id)arg0 withAweme:(id)arg1;
- (void)cardTemplateButtonClickWithParams:(id)arg0;
- (BOOL)isBasicConditionsInvalid;
- (void)markAlreadyShow;
- (void)setShowFlag:(BOOL)arg0;
- (void)insertCard;
- (BOOL)showFlag;
- (id)getCurrentDate;
- (void)setHasDisappear:(BOOL)arg0;
- (BOOL)hasDisappear;
- (void)onDislike;
- (id)insertCardLogPassback;
- (void)calculateTimeAndInsertListenCardIfNeeded;
- (BOOL)isLateNight:(id)arg0;
- (void)insertFeedListenCardIfNeeded;
- (BOOL)isFrequencyControlOK;
- (BOOL)isEarlierThan0600:(id)arg0;
- (BOOL)isLaterThan2230:(id)arg0;
- (BOOL)currentIsInLastShowCardPeriodBy:(id)arg0;
- (BOOL)frequencyTimeControlIsOkByLastDate:(id)arg0 checkDate:(id)arg1 cooldownDays:(double)arg2;
- (void)setInsertCardLogPassback:(id)arg0;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewDidDisappear;

@end