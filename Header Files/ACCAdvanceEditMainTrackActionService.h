//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface ACCAdvanceEditMainTrackActionService : NSObject <ACCAdvanceEditMainTrackActionServiceProtocol> {
    BOOL _isMainTrackExtended;
    BOOL _isExtendScrolling;
    NSHashTable *_listenerArray;
    id /* block */ _simulateClickBlock;
}

@property (retain, nonatomic) NSHashTable *listenerArray;
@property (copy, nonatomic) id /* block */ simulateClickBlock;
@property (nonatomic) BOOL isMainTrackExtended;
@property (nonatomic) BOOL isExtendScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listenerArray;
- (void)setListenerArray:(id)arg0;
- (void)setSimulateClickBlock:(id /* block */)arg0;
- (id /* block */)simulateClickBlock;
- (BOOL)isMainTrackExtended;
- (void)setIsMainTrackExtended:(BOOL)arg0;
- (BOOL)isExtendScrolling;
- (void)setIsExtendScrolling:(BOOL)arg0;
- (void)simulateClickCurrentPiece;
- (void)notifyAddButtonAction;
- (void)notifyMainTrackExtendAction;
- (void)notifyMainTrackStoreAction;
- (void)notifyMainTrackLongPressBeginAction;
- (void)notifyMainTrackLongPressEndAction;
- (void)notifyTrimMaterialTimeRangeAction;
- (void)setSimulationBlockForClickCurrentPiece:(id /* block */)arg0;
- (void)clearListener;
- (void)removeListener:(id)arg0;
- (void).cxx_destruct;
- (void)addListener:(id)arg0;

@end