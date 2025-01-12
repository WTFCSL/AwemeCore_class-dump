//
//     Generated by private class-dump
//

@class NSString, RxPromise, IESEffectModel;

@interface RTVStickerPanelStickerViewModel : NSObject <RTVStickerPanelStickerInterface> {
    NSString *_effectID;
    NSString *_originalEffectID;
    long long _state;
    double _downloadProgress;
    IESEffectModel *_sticker;
}

@property (retain, nonatomic) RxPromise *lastSelectPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long state;
@property (nonatomic) double downloadProgress;
@property (readonly, nonatomic) IESEffectModel *sticker;
@property (readonly, copy, nonatomic) NSString *effectID;
@property (readonly, copy, nonatomic) NSString *originalEffectID;
@property (readonly, nonatomic) BOOL hadDownloaded;

- (id)stickerID;
- (id)originalEffectID;
- (id)iconDownloadURLs;
- (id)hintIconDownloadURLs;
- (id)initWithStickerID:(id)arg0;
- (id)lastSelectPromise;
- (void)setLastSelectPromise:(id)arg0;
- (id)effectFilePath;
- (BOOL)hadDownloaded;
- (double)downloadProgress;
- (void)updateState:(long long)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)tags;
- (void)setDownloadProgress:(double)arg0;
- (id)sourceIdentifier;
- (id)effectID;
- (id)hintLabel;
- (id)stickerName;
- (id)sticker;
- (id)resourceIdentifier;
- (id)initWithSticker:(id)arg0;
- (void)updateDownloadProgress:(double)arg0;

@end
