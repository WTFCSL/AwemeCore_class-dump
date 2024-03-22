//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, NSMutableDictionary;
@protocol IESHYHybridViewProtocol, PuzzleKitViewStateCenterCapbility;

@interface PuzzleKitViewStateCenter : NSObject <PuzzleStateObserver, PuzzleHybridStateCenterProtocol> {
    id<PuzzleKitViewStateCenterCapbility> _capbility;
    id<IESHYHybridViewProtocol> _kitView;
    NSMutableSet *_customStateKeys;
    NSMutableSet *_puzzleStorageKeys;
    NSMutableDictionary *_layeredKeyMap;
    NSString *_logPath;
}

@property (weak, nonatomic) id<IESHYHybridViewProtocol> kitView;
@property (retain, nonatomic) NSMutableSet *customStateKeys;
@property (retain, nonatomic) NSMutableSet *puzzleStorageKeys;
@property (retain, nonatomic) NSMutableDictionary *layeredKeyMap;
@property (retain, nonatomic) NSString *logPath;
@property (retain, nonatomic) id<PuzzleKitViewStateCenterCapbility> capbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)kitView;
- (void)setKitView:(id)arg0;
- (id)propertyKeysFromURL:(id)arg0;
- (id)keysFromKeys:(id)arg0 otherKeys:(id *)arg1 subKeys:(id *)arg2;
- (id)_currentStateWithKeys:(id)arg0 otherKeys:(id)arg1 stateKeyValue:(id)arg2;
- (id)filterStateDict:(id)arg0 key:(id)arg1 stateKeyValue:(id)arg2;
- (id)logKeyForKey:(id)arg0;
- (id)layeredKeysFromKey:(id *)arg0;
- (void)addKeyPath:(id)arg0 value:(id)arg1 toStateDict:(id)arg2;
- (void)registerKeys:(id)arg0;
- (void)unregisterKeys:(id)arg0;
- (id)currentStateWithKeys:(id)arg0;
- (id)keysFromKeys:(id)arg0;
- (void)setLayeredKeyMap:(id)arg0;
- (id)layeredKeyMap;
- (id)initWithKitView:(id)arg0 capbility:(id)arg1;
- (void)configWithCapbility:(id)arg0 keys:(id)arg1;
- (id)customStateKeys;
- (id)puzzleStorageKeys;
- (id)capbility;
- (id)currentStorageStateKeys;
- (id)currentCustomStateKeys;
- (void)setCapbility:(id)arg0;
- (void)setCustomStateKeys:(id)arg0;
- (void)setPuzzleStorageKeys:(id)arg0;
- (id)logPath;
- (void)updateState:(id)arg0;
- (void)stateDidChange:(id)arg0;
- (void).cxx_destruct;
- (id)currentState;
- (void)setLogPath:(id)arg0;
- (void)addObservers;

@end
