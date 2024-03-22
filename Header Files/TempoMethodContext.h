//
//     Generated by private class-dump
//

@class TempoMethodManager, NSString, TempoVariableZone, _TtC8TempoiOS11TempoEngine, NSMutableDictionary, _TtC8TempoiOS13TempoRootView, _TtC8TempoiOS10TempoLoger, _TtC8TempoiOS13TempoFullTree, TempoEventCenter, NSDictionary, TempoCardTiming;

@interface TempoMethodContext : NSObject {
    BOOL _buildingFirstFullTree;
    BOOL _onLoaded;
    BOOL _onOffloaded;
    NSString *_uniqueID;
    _TtC8TempoiOS11TempoEngine *_engine;
    NSString *_url;
    _TtC8TempoiOS10TempoLoger *_loger;
    NSString *_sfcScript;
    _TtC8TempoiOS13TempoFullTree *_fullTree;
    _TtC8TempoiOS13TempoRootView *_rootView;
    TempoCardTiming *_timingObj;
    TempoEventCenter *_eventCenter;
    TempoVariableZone *_topZone;
    TempoMethodManager *_methodManager;
    NSMutableDictionary *_mGlobalData;
    struct CGSize { double width; double height; } _constrainedSize;
}

@property (retain, nonatomic) NSMutableDictionary *mGlobalData;
@property (nonatomic) BOOL onLoaded;
@property (nonatomic) BOOL onOffloaded;
@property (copy, nonatomic) NSString *uniqueID;
@property (weak, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) _TtC8TempoiOS10TempoLoger *loger;
@property (copy, nonatomic) NSString *sfcScript;
@property (retain, nonatomic) _TtC8TempoiOS13TempoFullTree *fullTree;
@property (weak, nonatomic) _TtC8TempoiOS13TempoRootView *rootView;
@property (nonatomic) BOOL buildingFirstFullTree;
@property (retain, nonatomic) TempoCardTiming *timingObj;
@property (readonly, nonatomic) TempoEventCenter *eventCenter;
@property (nonatomic) struct CGSize { double width; double height; } constrainedSize;
@property (readonly, nonatomic) NSDictionary *globalData;
@property (readonly, nonatomic) TempoVariableZone *topZone;
@property (readonly, nonatomic) TempoMethodManager *methodManager;

- (id)globalData;
- (void)onOffload;
- (id)loger;
- (void)mergeIntoGlobalDataWithData:(id)arg0;
- (id)eventCenter;
- (void)setConstrainedSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setBuildingFirstFullTree:(BOOL)arg0;
- (id)initWithMethodManager:(id)arg0 data:(id)arg1;
- (struct CGSize { double x0; double x1; })constrainedSize;
- (void)setSfcScript:(id)arg0;
- (void)setLoger:(id)arg0;
- (id)timingObj;
- (BOOL)onLoaded;
- (void)setOnLoaded:(BOOL)arg0;
- (BOOL)onOffloaded;
- (void)setOnOffloaded:(BOOL)arg0;
- (id)mGlobalData;
- (id)topZone;
- (BOOL)assignVariable:(id)arg0 value:(id)arg1;
- (void)pushVariableZone;
- (void)popVariableZone;
- (id)sfcScript;
- (BOOL)buildingFirstFullTree;
- (void)setTimingObj:(id)arg0;
- (id)methodManager;
- (void)setMGlobalData:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)engine;
- (void)executeFunction:(id)arg0;
- (void)setEngine:(id)arg0;
- (id)url;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (id)fullTree;
- (void)setFullTree:(id)arg0;
- (void)onLoad;
- (id)variableForName:(id)arg0;

@end
