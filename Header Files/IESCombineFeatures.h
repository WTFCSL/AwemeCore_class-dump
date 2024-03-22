//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESCombineFeatures : NSObject {
    BOOL _needTrack;
    BOOL _lastUpdateCombineTrackInfoTimeMs;
    NSMutableDictionary *_groupStorageDict;
}

@property (retain, nonatomic) NSMutableDictionary *groupStorageDict;
@property (nonatomic) BOOL needTrack;
@property (nonatomic) BOOL lastUpdateCombineTrackInfoTimeMs;

- (void)updateCombineFeaturesWithScene:(id)arg0 config:(id)arg1 model:(id)arg2 isNew:(BOOL)arg3 isForce:(BOOL)arg4;
- (BOOL)fillFeatures:(id)arg0 withConfig:(id)arg1 inputData:(id)arg2;
- (BOOL)needTrack;
- (void)setNeedTrack:(BOOL)arg0;
- (id)groupStorageDict;
- (id)getGroupStorageWithScene:(id)arg0;
- (id)getLastRangeList:(id)arg0 rangeCount:(long long)arg1 excludeThis:(BOOL)arg2;
- (BOOL)lastUpdateCombineTrackInfoTimeMs;
- (void)updateStorageWithScene:(id)arg0 features:(id)arg1 isNew:(BOOL)arg2 isForce:(BOOL)arg3;
- (void)setLastUpdateCombineTrackInfoTimeMs:(BOOL)arg0;
- (void)setGroupStorageDict:(id)arg0;
- (void).cxx_destruct;

@end