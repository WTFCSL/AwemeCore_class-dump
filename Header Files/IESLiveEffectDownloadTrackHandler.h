//
//     Generated by private class-dump
//

@class HTSEventContext;
@protocol IESLiveMonitor;

@interface IESLiveEffectDownloadTrackHandler : NSObject {
    id<IESLiveMonitor> _monitor;
    HTSEventContext *_trackContext;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)edl_monitorDownloadTaskCompleteWithEvent:(id)arg0 filePath:(id)arg1 duration:(double)arg2 error:(id)arg3 extra:(id)arg4;
- (id)p_getFileSize:(id)arg0;
- (void)edl_monitorWithEvent:(id)arg0 error:(id)arg1 extra:(id)arg2;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
