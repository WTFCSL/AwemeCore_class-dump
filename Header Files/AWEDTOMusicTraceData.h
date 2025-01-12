//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOMusicTraceData : MTLModel <MTLJSONSerializing> {
    NSString *_musicShowRank;
    long long _musicRecType;
    long long _musicRecTypeForAutoLoad;
}

@property (copy, nonatomic) NSString *musicShowRank;
@property (nonatomic) long long musicRecType;
@property (nonatomic) long long musicRecTypeForAutoLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)musicShowRank;
- (void)setMusicShowRank:(id)arg0;
- (long long)musicRecType;
- (void)setMusicRecType:(long long)arg0;
- (long long)musicRecTypeForAutoLoad;
- (void)setMusicRecTypeForAutoLoad:(long long)arg0;
- (void).cxx_destruct;

@end
