//
//     Generated by private class-dump
//

@class NSString, MMKV;

@interface AWEPadRotateGuideAdapter : NSObject <AWEPadRotateGuideAdapter> {
    MMKV *_mmkv;
    long long _showCount;
}

@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) long long showCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (BOOL)Enable;

- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void)cachePadRotateEntryViewShowCountFromAB;
- (void)updateEntryViewShowCountForPadWithItemID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isFinishShowTimes;
- (BOOL)shouldUpdateEntryViewUIForPad;
- (id)rotateGuideABTestRawDict;
- (void).cxx_destruct;
- (id)weakTarget;
- (long long)showCount;
- (void)setShowCount:(long long)arg0;

@end