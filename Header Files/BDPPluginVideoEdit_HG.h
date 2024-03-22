//
//     Generated by private class-dump
//

@class NSTimer, NSMutableArray;

@interface BDPPluginVideoEdit_HG : BDPBridgeInstancePlugin {
    NSMutableArray *_tmpMediaFilePaths;
    NSTimer *_mergeVideoTimer;
}

@property (retain, nonatomic) NSMutableArray *tmpMediaFilePaths;
@property (retain, nonatomic) NSTimer *mergeVideoTimer;

- (id)mergeVideoTimer;
- (void)setMergeVideoTimer:(id)arg0;
- (id)tmpMediaFilePaths;
- (void)addAudioTrackWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)mergeVideoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setTmpMediaFilePaths:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end