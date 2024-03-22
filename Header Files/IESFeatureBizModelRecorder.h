//
//     Generated by private class-dump
//

@class NSLock, NSMapTable;

@interface IESFeatureBizModelRecorder : NSObject {
    long long _maxSaveCount;
    NSMapTable *_mapTable;
    NSLock *_lock;
}

@property (nonatomic) long long maxSaveCount;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSLock *lock;

- (void)setModel:(id)arg0 withAid:(id)arg1;
- (id)modelWithAid:(id)arg0;
- (long long)maxSaveCount;
- (void)setMaxSaveCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;
- (id)mapTable;
- (void)setMapTable:(id)arg0;

@end