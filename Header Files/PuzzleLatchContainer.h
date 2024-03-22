//
//     Generated by private class-dump
//

@class NSString, NSDictionary, PuzzleLatchDriverModel, NSMutableSet, NSMutableArray, PuzzleLatchBridgeExcutor;
@protocol IESHYHybridViewProtocol, IESLatchLynxBridgeExcutorProtocol;

@interface PuzzleLatchContainer : NSObject <IESLatchHybridContainerProtocol> {
    BOOL _preferNativePrefetch;
    BOOL _enableCheckVersion;
    NSString *_urlString;
    NSString *_containerID;
    NSString *_lynxContainerID;
    NSString *_latchID;
    NSDictionary *_globalProps;
    NSDictionary *_initalProps;
    id _lynxView;
    id<IESLatchLynxBridgeExcutorProtocol> _bridgeExcutor;
    double _latchStartTimeStamp;
    unsigned long long _prefetchFrom;
    PuzzleLatchDriverModel *_model;
    PuzzleLatchBridgeExcutor *_excutor;
    id<IESHYHybridViewProtocol> _kitView;
    NSMutableArray *_presendEvents;
    NSMutableSet *_bridgeHandlers;
}

@property (retain, nonatomic) PuzzleLatchDriverModel *model;
@property (retain, nonatomic) PuzzleLatchBridgeExcutor *excutor;
@property (weak, nonatomic) id<IESHYHybridViewProtocol> kitView;
@property (retain, nonatomic) NSMutableArray *presendEvents;
@property (retain, nonatomic) NSMutableSet *bridgeHandlers;
@property (nonatomic) BOOL preferNativePrefetch;
@property (readonly, copy, nonatomic) NSString *businessID;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, copy, nonatomic) NSString *lynxContainerID;
@property (readonly, copy, nonatomic) NSString *latchID;
@property (readonly, copy, nonatomic) NSDictionary *globalProps;
@property (readonly, copy, nonatomic) NSDictionary *initalProps;
@property (readonly, copy, nonatomic) NSDictionary *routerParam;
@property (readonly, weak, nonatomic) id lynxView;
@property (readonly, nonatomic) id<IESLatchLynxBridgeExcutorProtocol> bridgeExcutor;
@property (readonly, nonatomic) double startTimeStamp;
@property (readonly, nonatomic) double latchStartTimeStamp;
@property (nonatomic) unsigned long long prefetchFrom;
@property (nonatomic) BOOL enableCheckVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)kitView;
- (id)lynxView;
- (id)globalProps;
- (void)setKitView:(id)arg0;
- (id)routerParam;
- (BOOL)enableCheckVersion;
- (unsigned long long)prefetchFrom;
- (BOOL)preferNativePrefetch;
- (id)latchID;
- (void)setPrefetchFrom:(unsigned long long)arg0;
- (void)setEnableCheckVersion:(BOOL)arg0;
- (id)excutor;
- (void)setExcutor:(id)arg0;
- (id)initalProps;
- (void)invokeJSEvent:(id)arg0 withParams:(id)arg1;
- (id)lynxContainerID;
- (id)bridgeExcutor;
- (double)latchStartTimeStamp;
- (id)bridgeHandlers;
- (void)setBridgeHandlers:(id)arg0;
- (void)setPreferNativePrefetch:(BOOL)arg0;
- (id)presendEvents;
- (id)getPreGlobalProps;
- (id)getPreInitialProps;
- (id)initWithDriverModel:(id)arg0;
- (void)setHybridKitView:(id)arg0;
- (void)setPresendEvents:(id)arg0;
- (id)urlString;
- (id)container;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)containerID;
- (id)model;
- (id)businessID;
- (double)startTimeStamp;

@end