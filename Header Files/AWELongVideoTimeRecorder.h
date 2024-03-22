//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWELongVideoTimeRecorder : NSObject <AWELongVideoTimeRecorderProtocol> {
    NSMutableDictionary *_recoderMap;
}

@property (retain, nonatomic) NSMutableDictionary *recoderMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)recoderMap;
- (void)tikPage:(id)arg0;
- (long long)durationForPage:(id)arg0;
- (void)resetPage:(id)arg0;
- (void)setRecoderMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
