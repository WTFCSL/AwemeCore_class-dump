//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEAdActionMaskDetailService : HTSService <AWEGokuPluginTargetProtocol, AWEAdActionMaskDetailService> {
    NSMutableDictionary *_interactiveDic;
    NSMutableDictionary *_actionMaskInfoDict;
    NSMutableArray *_interactiveIdArrays;
    long long _maxCount;
}

@property (retain, nonatomic) NSMutableDictionary *interactiveDic;
@property (retain, nonatomic) NSMutableDictionary *actionMaskInfoDict;
@property (retain, nonatomic) NSMutableArray *interactiveIdArrays;
@property (nonatomic) long long maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)logInteractiveEvent:(unsigned long long)arg0 with:(id)arg1 from:(id)arg2;
- (id)actionMaskDetailStrParam;
- (void)logNoInteractiveEvent:(id)arg0;
- (void)setInteractiveDic:(id)arg0;
- (void)setActionMaskInfoDict:(id)arg0;
- (void)setInteractiveIdArrays:(id)arg0;
- (id)actionMaskDetailStrParamCount:(long long)arg0;
- (id)interactiveDic;
- (void)deleteOldValue;
- (id)actionMaskInfoParamCount:(long long)arg0;
- (id)actionMaskInfoDict;
- (id)interactiveIdArrays;
- (void)updateValue:(unsigned long long)arg0 awemeModel:(id)arg1;
- (void)updateActionMaskInfoWithScene:(unsigned long long)arg0 context:(id)arg1;
- (void)awemePlayerWillLoopPlayingWith:(id)arg0;
- (void)didChangePlaybackStateWithAction:(id)arg0;
- (id)actionMaskInfoParam;
- (void).cxx_destruct;
- (unsigned long long)getValue:(id)arg0;
- (void)setMaxCount:(long long)arg0;
- (unsigned long long)moduleNames;
- (long long)maxCount;

@end
