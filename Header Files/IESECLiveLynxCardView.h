//
//     Generated by private class-dump
//

@class NSString, PuzzleHybridContainer, IESECLiveCardDataModel;

@interface IESECLiveLynxCardView : IESECLiveBaseCardView <IESHYHybridViewLifecycleProtocol> {
    PuzzleHybridContainer *_lynxCardView;
    IESECLiveCardDataModel *_cardViewModel;
    struct CGSize { double width; double height; } _lynxViewSize;
}

@property (retain, nonatomic) PuzzleHybridContainer *lynxCardView;
@property (nonatomic) struct CGSize { double width; double height; } lynxViewSize;
@property (retain, nonatomic) IESECLiveCardDataModel *cardViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardViewWithParams:(id)arg0 liveCardViewDelegate:(id)arg1;

- (id)cardModel;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0 withContainerID:(id)arg1;
- (void)updateWithCardModel:(id)arg0;
- (id)cardViewModel;
- (void)setCardViewModel:(id)arg0;
- (id)lynxCardView;
- (void)setLynxCardView:(id)arg0;
- (void)showOnEnter:(BOOL)arg0 followUp:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)enableUpdate;
- (void)addLynxEventSubscriber;
- (void)setupDependency;
- (id)p_cardEnvironment;
- (void)p_initCardModelWithParams:(id)arg0;
- (id)p_getInitialDataWithParams:(id)arg0;
- (void)setLynxViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)lynxViewWithURLString:(id)arg0 initialData:(id)arg1 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)p_getCurrentLiveRoomContext;
- (struct CGSize { double x0; double x1; })lynxViewSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGSize { double x0; double x1; })cardSize;
- (id)cardID;

@end