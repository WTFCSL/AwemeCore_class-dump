//
//     Generated by private class-dump
//

@class NSString, MMKV;

@interface AWEUGFreqControlsServiceImpl : HTSService <AWEUGFreqControlsService> {
    MMKV *_mmkv;
}

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (BOOL)shouldTriggerEvent:(id)arg0 withFreqControls:(id)arg1;
- (void)recordEventTriggered:(id)arg0;
- (void)clearAllEventRecord;
- (double)getCurrTime;
- (void)p_sortRecord:(id)arg0;
- (BOOL)p_checkShowFrequency:(double)arg0 current:(double)arg1 inRecord:(id)arg2 maxCount:(long long)arg3;
- (BOOL)p_checkElapsedTimeWithinRange:(double)arg0 currTime:(double)arg1 range:(long long)arg2;
- (BOOL)p_canShowAtFrequency:(id)arg0 withEventID:(id)arg1;
- (BOOL)p_canShowWithHideStrategy:(id)arg0 eventID:(id)arg1;
- (void).cxx_destruct;

@end
