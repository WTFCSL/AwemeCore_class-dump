//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, HTSLiveMessageListNode, NSDictionary, NSMutableArray, NSDate;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveMessageListPinManager : NSObject {
    BOOL _pausePin;
    id<IESLiveRoomServiceAdapter> _room;
    id /* block */ _addMessageToDeleteBlock;
    id /* block */ _addMessageToShowBlock;
    NSMutableArray *_waitPinNodes;
    HTSLiveMessageListNode *_currentPinNode;
    NSTimer *_pinTimer;
    NSDictionary *_pinViewMaps;
    NSDate *_timerPauseStartDate;
    NSDate *_timerPreviousFireDate;
    NSMutableDictionary *_pinnedViewShowDurationDict;
}

@property (retain, nonatomic) NSMutableArray *waitPinNodes;
@property (retain, nonatomic) HTSLiveMessageListNode *currentPinNode;
@property (retain, nonatomic) NSTimer *pinTimer;
@property (retain, nonatomic) NSDictionary *pinViewMaps;
@property (retain, nonatomic) NSDate *timerPauseStartDate;
@property (retain, nonatomic) NSDate *timerPreviousFireDate;
@property (nonatomic) BOOL pausePin;
@property (retain, nonatomic) NSMutableDictionary *pinnedViewShowDurationDict;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (copy, nonatomic) id /* block */ addMessageToDeleteBlock;
@property (copy, nonatomic) id /* block */ addMessageToShowBlock;

- (void)setAddMessageToShowBlock:(id /* block */)arg0;
- (void)setAddMessageToDeleteBlock:(id /* block */)arg0;
- (void)trackPinnedViewShowDuration;
- (BOOL)containPinMessage:(id)arg0;
- (void)reloadPinTimesWithNode:(id)arg0;
- (BOOL)isPinningMessage:(id)arg0;
- (void)refreshCurrentPinLayoutWithNode:(id)arg0;
- (void)p_setupPinnedViewTimerWithNode:(id)arg0;
- (void)commitPreparePinNode:(id)arg0;
- (void)commitPinNode:(id)arg0;
- (void)p_showPinnedViewWith:(id)arg0;
- (void)rePinCurrentPinViewWithWidth:(double)arg0;
- (void)pauseCurrentPin;
- (void)resumeCurrentPin;
- (id)timerPauseStartDate;
- (void)setTimerPauseStartDate:(id)arg0;
- (void)setTimerPreviousFireDate:(id)arg0;
- (id)timerPreviousFireDate;
- (id)waitPinNodes;
- (void)cancelPinNodeWhenDisplayTimeEnd:(id)arg0;
- (id)currentPinNode;
- (id /* block */)addMessageToDeleteBlock;
- (id)pinTimer;
- (void)setPinTimer:(id)arg0;
- (void)cancelPinNode:(id)arg0;
- (double)calculatePinTime:(id)arg0;
- (BOOL)pausePin;
- (void)pausePinTimer;
- (void)setCurrentPinNode:(id)arg0;
- (id)createPinnedViewWith:(id)arg0;
- (void)nodeDidPinned:(id)arg0;
- (double)accumulatePinnedViewShowDuration:(id)arg0;
- (id /* block */)addMessageToShowBlock;
- (void)setPausePin:(BOOL)arg0;
- (void)resumePinTimer;
- (id)fetchPinnedViewWith:(id)arg0;
- (void)tr_trackPublicHoverMessageShowWithNode:(id)arg0;
- (id)pinViewMaps;
- (id)pinnedViewShowDurationDict;
- (BOOL)isPinningNode:(id)arg0;
- (id)pinningNode;
- (void)setWaitPinNodes:(id)arg0;
- (void)setPinViewMaps:(id)arg0;
- (void)setPinnedViewShowDurationDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
