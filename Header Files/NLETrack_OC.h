//
//     Generated by private class-dump
//

@class NSString, NSArray, NLETimeEffect_OC, NSMutableArray;

@interface NLETrack_OC : NLETimeSpaceNode_OC {
    NSArray *_slots;
    NSArray *_filters;
    NLETimeEffect_OC *_timeEffect;
    NSMutableArray *_slotArray;
}

@property (nonatomic) unsigned long long dve_extraResourceType;
@property (nonatomic) BOOL acc_followMaxEnd;
@property (copy, nonatomic) NSString *business;
@property (nonatomic) BOOL isEditFilter;
@property (nonatomic) BOOL isVideoReversedTrack;
@property (nonatomic) long long videoClipResolveType;
@property (nonatomic) BOOL isSpecialEffectTrack;
@property (nonatomic) BOOL isVideoSubTrack;
@property (copy, nonatomic) NSString *audioTrackTag;
@property (nonatomic) BOOL isBeauty;
@property (nonatomic) BOOL isLensHDRTrack;
@property (nonatomic) BOOL isOneKeyHDRTrack;
@property (nonatomic) BOOL isSpecialBeautyTrack;
@property (nonatomic) BOOL isSpecialFilterTrack;
@property (nonatomic) BOOL isCutsame;
@property (nonatomic) BOOL isBGMTrack;
@property (nonatomic) BOOL isKaraokeTrack;
@property (nonatomic) BOOL isUGCMusicTrack;
@property (nonatomic) BOOL isPGCMusicTrack;
@property (nonatomic) BOOL isTextRead;
@property (nonatomic) BOOL isTimeEffectTrack;
@property (nonatomic) BOOL isUserEditAudioTrack;
@property (nonatomic) BOOL isPresetTrack;
@property (readonly, nonatomic) NSString *presetOriginalNLEModel;
@property (retain, nonatomic) NSMutableArray *slotArray;
@property (nonatomic) struct shared_ptr<cut::model::NLETrack> { struct NLETrack *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic, getter=isMainTrack) BOOL mainTrack;
@property (nonatomic) double volume;
@property (retain, nonatomic) NLETimeEffect_OC *timeEffect;
@property (readonly, copy, nonatomic) NSArray *slots;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) unsigned long long extraTrackType;
@property (copy, nonatomic) NSArray *keyframeSlots;

- (BOOL)isMainTrack;
- (unsigned long long)extraTrackType;
- (unsigned long long)getTrackType;
- (unsigned long long)dve_extraResourceType;
- (void)dve_rescheduleTrackForTransitionChanged;
- (void)setMainTrack:(BOOL)arg0;
- (void)dve_insertSlot:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)timeSort;
- (id)dve_slotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setExtraTrackType:(unsigned long long)arg0;
- (void)setDve_extraResourceType:(unsigned long long)arg0;
- (void)removeSlot:(id)arg0;
- (id)dve_slotOfId:(id)arg0;
- (void)addSlot:(id)arg0 atIndex:(long long)arg1;
- (void)addSlot:(id)arg0;
- (void)dve_trimTransitionsTime;
- (double)dve_maxTransitionTimeForSlot:(id)arg0;
- (long long)getSlotIndex:(id)arg0;
- (id)dve_slotsStartTimeAt:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (long long)dve_indexOfSlotId:(id)arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })dve_slotTimeRangeForTransition:(id)arg0;
- (BOOL)getRewind;
- (void)setAbsSpeed:(float)arg0;
- (id)splitFromTime:(double)arg0;
- (void)setRewind:(BOOL)arg0;
- (id)splitFromTime:(double)arg0 slot:(id)arg1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getMaxEnd;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETrack> { struct NLETrack *x0; struct __shared_weak_count *x1; })arg0;
- (float)getAbsSpeed;
- (id)slotArray;
- (void)addSlotAtEnd:(id)arg0;
- (void)sortSlotArray;
- (BOOL)slots:(id)arg0 notEqualTo:(struct vector<std::shared_ptr<cut::model::NLETrackSlot>, std::allocator<std::shared_ptr<cut::model::NLETrackSlot>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<cut::model::NLETrackSlot> *, std::allocator<std::shared_ptr<cut::model::NLETrackSlot>>> { void *x0; } x2; })arg1;
- (void)addSlot:(id)arg0 afterSlot:(id)arg1;
- (void)addSlotAtStart:(id)arg0;
- (id)getSlotByIndex:(long long)arg0;
- (id)getSortedSlots;
- (void)clearEffect;
- (id)getEffect;
- (void)setTimeEffect:(id)arg0;
- (id)timeEffect;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getMinStart;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getMaxEndExcludeDisabledNode:(BOOL)arg0;
- (id)getFilterByName:(id)arg0;
- (id)removeFilterByName:(id)arg0;
- (BOOL)isTimelineChange:(id)arg0;
- (unsigned long long)getResourceType;
- (id)keyframeSlots;
- (void)setKeyframeSlots:(id)arg0;
- (void)addKeyframe:(id)arg0;
- (void)removeKeyframe:(id)arg0;
- (void)clearKeyframes;
- (void)setSlotArray:(id)arg0;
- (void)setIsUserEditAudioTrack:(BOOL)arg0;
- (void)setIsBGMTrack:(BOOL)arg0;
- (BOOL)isBGMTrack;
- (BOOL)isTextRead;
- (BOOL)isSpecialEffectTrack;
- (BOOL)isTimeEffectTrack;
- (BOOL)isUserEditAudioTrack;
- (BOOL)isKaraokeTrack;
- (void)updateAndOrderSlots:(id)arg0;
- (id)acc_slotsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setIsCutsame:(BOOL)arg0;
- (BOOL)isCutsame;
- (void)setIsEditFilter:(BOOL)arg0;
- (BOOL)isVideoSubTrack;
- (void)setIsTextRead:(BOOL)arg0;
- (void)setIsKaraokeTrack:(BOOL)arg0;
- (void)updateAudioSubType:(unsigned long long)arg0;
- (BOOL)isPGCMusicTrack;
- (BOOL)isUGCMusicTrack;
- (void)setIsPGCMusicTrack:(BOOL)arg0;
- (void)setIsUGCMusicTrack:(BOOL)arg0;
- (BOOL)isPresetTrack;
- (void)acc_removeVolumeFilters;
- (void)setIsBeauty:(BOOL)arg0;
- (BOOL)isBeauty;
- (void)setIsSpecialBeautyTrack:(BOOL)arg0;
- (BOOL)isSpecialBeautyTrack;
- (BOOL)isEditFilter;
- (BOOL)isSpecialFilterTrack;
- (void)setIsSpecialFilterTrack:(BOOL)arg0;
- (void)setIsLensHDRTrack:(BOOL)arg0;
- (BOOL)isLensHDRTrack;
- (void)setIsOneKeyHDRTrack:(BOOL)arg0;
- (BOOL)isOneKeyHDRTrack;
- (id)slotOfName:(id)arg0;
- (id)presetOriginalNLEModel;
- (BOOL)isVideoReversedTrack;
- (void)acc_replaceSlot:(id)arg0 atIndex:(unsigned long long)arg1;
- (long long)videoClipResolveType;
- (void)setVideoClipResolveType:(long long)arg0;
- (BOOL)acc_followMaxEnd;
- (void)setAcc_followMaxEnd:(BOOL)arg0;
- (void)setIsVideoReversedTrack:(BOOL)arg0;
- (void)setIsSpecialEffectTrack:(BOOL)arg0;
- (void)setIsVideoSubTrack:(BOOL)arg0;
- (id)audioTrackTag;
- (void)setAudioTrackTag:(id)arg0;
- (void)setIsTimeEffectTrack:(BOOL)arg0;
- (void)adjustTargetStartTime;
- (void)setIsPresetTrack:(BOOL)arg0;
- (id)slotOfID:(unsigned long long)arg0;
- (id)acc_slotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)init;
- (void)setFilters:(id)arg0;
- (void)addFilter:(id)arg0;
- (void)removeFilter:(id)arg0;
- (void)setLayer:(long long)arg0;
- (void).cxx_destruct;
- (id)filters;
- (void)clearFilters;
- (double)volume;
- (long long)layer;
- (void)sort;
- (void)setVolume:(double)arg0;
- (void)addEffect:(id)arg0;
- (void)clearSlots;
- (id)business;
- (void)setBusiness:(id)arg0;
- (int)layerIndex;
- (void)setLayerIndex:(int)arg0;
- (void)removeEffect:(id)arg0;
- (id)slots;

@end
