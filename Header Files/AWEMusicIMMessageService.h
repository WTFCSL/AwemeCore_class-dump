//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEMusicIMMessageService : NSObject {
    NSMutableDictionary *_dspToMiniDic;
    NSMutableDictionary *_miniToDspDic;
}

@property (retain, nonatomic) NSMutableDictionary *dspToMiniDic;
@property (retain, nonatomic) NSMutableDictionary *miniToDspDic;

+ (id)shared;

- (id)musicIdClipMappingWithOriginalId:(id)arg0;
- (void)batchGetMusicLiteInfosWithIdInfos:(id)arg0 completed:(id /* block */)arg1;
- (id)dspToMiniDic;
- (id)miniToDspDic;
- (void)setDspToMiniDic:(id)arg0;
- (void)setMiniToDspDic:(id)arg0;
- (void).cxx_destruct;

@end
