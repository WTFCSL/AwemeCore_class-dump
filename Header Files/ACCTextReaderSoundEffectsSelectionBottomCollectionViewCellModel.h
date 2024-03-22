//
//     Generated by private class-dump
//

@class NSString, NSArray, IESEffectModel;

@interface ACCTextReaderSoundEffectsSelectionBottomCollectionViewCellModel : NSObject {
    BOOL _selected;
    BOOL _playing;
    NSString *_titleString;
    NSArray *_iconDownloadURLs;
    long long _modelType;
    long long _downloadStatus;
    NSString *_audioPath;
    IESEffectModel *_effectModel;
    NSString *_audioText;
}

@property (copy, nonatomic) NSString *audioPath;
@property (copy, nonatomic) NSString *audioText;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSArray *iconDownloadURLs;
@property (nonatomic) long long modelType;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) long long downloadStatus;
@property (readonly, copy, nonatomic) NSString *soundEffect;
@property (readonly, copy, nonatomic) NSString *soundEffectID;
@property (readonly, copy, nonatomic) NSArray *challengeIds;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) IESEffectModel *effectModel;

- (void)setIconDownloadURLs:(id)arg0;
- (id)effectModel;
- (void)setEffectModel:(id)arg0;
- (id)iconDownloadURLs;
- (void)setAudioPath:(id)arg0;
- (id)audioPath;
- (id)soundEffectID;
- (void)setAudioText:(id)arg0;
- (id)soundEffect;
- (id)challengeIds;
- (void)fetchTTSAudioWithText:(id)arg0 completion:(id /* block */)arg1;
- (id)audioText;
- (BOOL)isFileExist:(id)arg0 speakerID:(id)arg1;
- (void)configWithEffectModel:(id)arg0 audioText:(id)arg1;
- (void)useDefaultSoundEffectWithAudioText:(id)arg0;
- (void)setModelType:(long long)arg0;
- (id)init;
- (long long)modelType;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg0;
- (BOOL)isPlaying;
- (void)setPlaying:(BOOL)arg0;
- (BOOL)isSelected;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (long long)downloadStatus;
- (void)setDownloadStatus:(long long)arg0;

@end
