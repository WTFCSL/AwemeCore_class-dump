//
//     Generated by private class-dump
//

@class NSArray, AWEVideoFragmentInfo;

@interface ACCEffectTrackViewModel : ACCRecorderViewModel {
    id /* block */ _currentStickerHandler;
    AWEVideoFragmentInfo *_currentFragment;
    NSArray *_effectTrackParams;
}

@property (retain, nonatomic) AWEVideoFragmentInfo *currentFragment;
@property (copy, nonatomic) NSArray *effectTrackParams;
@property (copy, nonatomic) id /* block */ currentStickerHandler;

- (void)setCurrentStickerHandler:(id /* block */)arg0;
- (void)trackRecordWithEvent:(id)arg0 params:(id)arg1;
- (void)updateEffectTrackModelWithParams:(id)arg0 type:(unsigned long long)arg1;
- (void)clearTrackParamsCache;
- (id /* block */)currentStickerHandler;
- (id)currentFragment;
- (id)effectTrackParams;
- (void)setEffectTrackParams:(id)arg0;
- (void)setCurrentFragment:(id)arg0;
- (void).cxx_destruct;
- (void)addFragment:(id)arg0;

@end
