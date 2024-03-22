//
//     Generated by private class-dump
//

@class IESLiveComponentLoadOptimezer, NSMutableDictionary, NSString, IESLiveState, IESLiveStateTransition, NSMutableArray;
@protocol IESLiveBootableModel;

@interface IESLiveStateMachine : NSObject {
    BOOL _actived;
    BOOL _discardEventThatCanNotFire;
    IESLiveState *_currentState;
    IESLiveState *_initialState;
    IESLiveState *_finalState;
    IESLiveStateTransition *_latestTransition;
    id /* block */ _resetBlock;
    id /* block */ _atEndBlock;
    id<IESLiveBootableModel> _room;
    NSString *_label;
    IESLiveComponentLoadOptimezer *_loadOptimezer;
    long long _loadLevel;
    NSMutableDictionary *_stateNodes;
    NSMutableDictionary *_stateLines;
    NSMutableArray *_eventQueue;
}

@property (retain, nonatomic) NSMutableDictionary *stateNodes;
@property (retain, nonatomic) NSMutableDictionary *stateLines;
@property (retain, nonatomic) IESLiveState *currentState;
@property (retain, nonatomic) IESLiveStateTransition *latestTransition;
@property (nonatomic, getter=isActive) BOOL actived;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) IESLiveState *initialState;
@property (retain, nonatomic) IESLiveState *finalState;
@property (copy, nonatomic) id /* block */ resetBlock;
@property (copy, nonatomic) id /* block */ atEndBlock;
@property (weak, nonatomic) id<IESLiveBootableModel> room;
@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) IESLiveComponentLoadOptimezer *loadOptimezer;
@property (nonatomic) long long loadLevel;
@property (readonly, nonatomic) BOOL atEnd;
@property (readonly, nonatomic) BOOL makeFirstStep;
@property (readonly, nonatomic) BOOL makeFinalStep;
@property (nonatomic) BOOL discardEventThatCanNotFire;

- (void)setDiscardEventThatCanNotFire:(BOOL)arg0;
- (BOOL)fireEventNamed:(id)arg0;
- (void)setActived:(BOOL)arg0;
- (BOOL)makeFirstStep;
- (id)loadOptimezer;
- (void)setLoadOptimezer:(id)arg0;
- (void)setLoadLevel:(long long)arg0;
- (BOOL)makeFinalStep;
- (void)setAtEndBlock:(id /* block */)arg0;
- (void)setStateLines:(id)arg0;
- (id)stateLines;
- (void)p_initializeInitState;
- (BOOL)p_canFireEvent:(id)arg0;
- (BOOL)discardEventThatCanNotFire;
- (void)setLatestTransition:(id)arg0;
- (id /* block */)atEndBlock;
- (void)p_checkEventQueue:(id)arg0;
- (long long)loadLevel;
- (id)p_greedyEventPrefixSequence:(id)arg0;
- (BOOL)canFireEventNamed:(id)arg0;
- (id)latestTransition;
- (void)addEvents:(id)arg0;
- (void)setEventQueue:(id)arg0;
- (void)setCurrentState:(id)arg0;
- (id)initialState;
- (id)init;
- (void)setInitialState:(id)arg0;
- (void)active;
- (void).cxx_destruct;
- (id)eventQueue;
- (id)currentState;
- (void)setLabel:(id)arg0;
- (void)addState:(id)arg0;
- (id)identifier;
- (void)addEvent:(id)arg0;
- (BOOL)isActive;
- (id)description;
- (id)label;
- (void)dealloc;
- (void)reset;
- (BOOL)atEnd;
- (void)addStates:(id)arg0;
- (id)finalState;
- (void)setFinalState:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)stateNodes;
- (void)setStateNodes:(id)arg0;
- (BOOL)fireEvent:(id)arg0;
- (id /* block */)resetBlock;
- (void)setResetBlock:(id /* block */)arg0;

@end