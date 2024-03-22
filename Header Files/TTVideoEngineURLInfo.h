//
//     Generated by private class-dump
//

@class TTVideoEngineMediaFitterInfo, NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface TTVideoEngineURLInfo : NSObject <NSSecureCoding> {
    BOOL _encrypt;
    unsigned long long _videoDefinitionType;
    NSString *_vType;
    NSString *_mediaType;
    NSString *_audioQuality;
    NSString *_codecType;
    NSString *_fileHash;
    NSString *_mainURLStr;
    NSString *_backupURL1;
    NSString *_backupURL2;
    NSString *_backupURL3;
    NSString *_barrageMaskUrl;
    NSString *_aiBarrageUrl;
    NSNumber *_vHeight;
    NSNumber *_vWidth;
    NSNumber *_size;
    long long _bitrate;
    NSNumber *_preloadSize;
    NSNumber *_playLoadMaxStep;
    NSNumber *_playLoadMinStep;
    NSString *_spade_a;
    NSString *_definition;
    NSString *_checkInfo;
    double _loudness;
    double _peak;
    NSString *_definitionString;
    NSString *_fieldId;
    NSString *_p2pVerifyUrl;
    NSString *_qualityDesc;
    long long _videoModelVersion;
    NSNumber *_fps;
    NSString *_kid;
    NSString *_bashInitRange;
    NSString *_bashIndexRange;
    NSString *_bashFirstMoofRange;
    NSString *_message;
    NSString *_barrageMaskOffset;
    NSMutableDictionary *_packetOffset;
    TTVideoEngineMediaFitterInfo *_fitterInfo;
    long long _languageId;
    NSString *_languageCode;
    NSString *_dubVersion;
    long long _infoId;
    NSString *_vType_ver2;
    NSString *_codecType_ver2;
    NSString *_mainURLStr_ver2;
    NSString *_backupURL1_ver2;
    NSString *_spade_a_ver2;
    NSString *_fileHash_ver2;
    NSString *_quality_ver2;
    NSString *_defination_ver2;
    NSString *_mediaType_ver2;
    NSNumber *_vHeight_ver2;
    NSNumber *_vWidth_ver2;
    NSNumber *_size_ver2;
    long long _bitrate_ver2;
    long long _qualityType;
    NSNumber *_preloadSize_ver2;
    NSNumber *_preLoadMaxStep_ver2;
    NSNumber *_preLoadMinStep_ver2;
    NSNumber *_preloadSocketBuffer_ver2;
    NSNumber *_preloadInterval_ver2;
    NSNumber *_urlExpire;
    NSString *_logoType;
    long long _apiVer;
    NSDictionary *_videoResolutionMap;
    NSDictionary *_audioResolutionMap;
    NSString *_checkInfo_ver2;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *vType_ver2;
@property (copy, nonatomic) NSString *codecType_ver2;
@property (copy, nonatomic) NSString *mainURLStr_ver2;
@property (copy, nonatomic) NSString *backupURL1_ver2;
@property (copy, nonatomic) NSString *spade_a_ver2;
@property (copy, nonatomic) NSString *fileHash_ver2;
@property (copy, nonatomic) NSString *quality_ver2;
@property (copy, nonatomic) NSString *defination_ver2;
@property (copy, nonatomic) NSString *mediaType_ver2;
@property (retain, nonatomic) NSNumber *vHeight_ver2;
@property (retain, nonatomic) NSNumber *vWidth_ver2;
@property (retain, nonatomic) NSNumber *size_ver2;
@property (nonatomic) long long bitrate_ver2;
@property (nonatomic) long long qualityType;
@property (retain, nonatomic) NSNumber *preloadSize_ver2;
@property (retain, nonatomic) NSNumber *preLoadMaxStep_ver2;
@property (retain, nonatomic) NSNumber *preLoadMinStep_ver2;
@property (retain, nonatomic) NSNumber *preloadSocketBuffer_ver2;
@property (retain, nonatomic) NSNumber *preloadInterval_ver2;
@property (retain, nonatomic) NSNumber *urlExpire;
@property (copy, nonatomic) NSString *logoType;
@property (nonatomic) long long apiVer;
@property (retain, nonatomic) NSDictionary *videoResolutionMap;
@property (retain, nonatomic) NSDictionary *audioResolutionMap;
@property (copy, nonatomic) NSString *checkInfo_ver2;
@property (nonatomic) unsigned long long videoDefinitionType;
@property (copy, nonatomic) NSString *vType;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *audioQuality;
@property (copy, nonatomic) NSString *codecType;
@property (copy, nonatomic) NSString *fileHash;
@property (copy, nonatomic) NSString *mainURLStr;
@property (copy, nonatomic) NSString *backupURL1;
@property (copy, nonatomic) NSString *backupURL2;
@property (copy, nonatomic) NSString *backupURL3;
@property (copy, nonatomic) NSString *barrageMaskUrl;
@property (copy, nonatomic) NSString *aiBarrageUrl;
@property (retain, nonatomic) NSNumber *vHeight;
@property (retain, nonatomic) NSNumber *vWidth;
@property (retain, nonatomic) NSNumber *size;
@property (nonatomic) long long bitrate;
@property (retain, nonatomic) NSNumber *preloadSize;
@property (retain, nonatomic) NSNumber *playLoadMaxStep;
@property (retain, nonatomic) NSNumber *playLoadMinStep;
@property (nonatomic) BOOL encrypt;
@property (copy, nonatomic) NSString *spade_a;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *checkInfo;
@property (nonatomic) double loudness;
@property (nonatomic) double peak;
@property (copy, nonatomic) NSString *definitionString;
@property (copy, nonatomic) NSString *fieldId;
@property (copy, nonatomic) NSString *p2pVerifyUrl;
@property (copy, nonatomic) NSString *qualityDesc;
@property (nonatomic) long long videoModelVersion;
@property (retain, nonatomic) NSNumber *fps;
@property (copy, nonatomic) NSString *kid;
@property (copy, nonatomic) NSString *bashInitRange;
@property (copy, nonatomic) NSString *bashIndexRange;
@property (copy, nonatomic) NSString *bashFirstMoofRange;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *barrageMaskOffset;
@property (retain, nonatomic) NSMutableDictionary *packetOffset;
@property (retain, nonatomic) TTVideoEngineMediaFitterInfo *fitterInfo;
@property (nonatomic) long long languageId;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *dubVersion;
@property (nonatomic) long long infoId;

+ (id)transformedFromBase64:(id)arg0 key:(id)arg1;
+ (id)decode:(id)arg0 withKey:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (long long)getValueInt:(long long)arg0;
- (id)preloadSize;
- (void)setPreloadSize:(id)arg0;
- (void)setEncrypt:(BOOL)arg0;
- (void)setVideoDefinitionTypeWithNSString:(id)arg0 mediaType:(id)arg1;
- (void)_parsePacketOffset:(id)arg0;
- (void)_initDefaultResolutionMap;
- (void)_parse:(id)arg0 mediaType:(id)arg1 key:(id)arg2;
- (id)initWithDictionary:(id)arg0 mediaType:(id)arg1 key:(id)arg2;
- (id)_getAllUrls;
- (id)mainURLStr_ver2;
- (id)backupURL1_ver2;
- (id)mainURLStr;
- (id)backupURL1;
- (id)backupURL2;
- (id)backupURL3;
- (id)fitterInfo;
- (id)getValueStr:(long long)arg0;
- (id)getValueNumber:(long long)arg0;
- (id /* block */)setFileId;
- (id /* block */)setVType;
- (id /* block */)setSize;
- (id /* block */)setBitrate;
- (id /* block */)setQualityDesc;
- (id /* block */)setVWidth;
- (id /* block */)setVHeight;
- (id /* block */)setCodecType;
- (id /* block */)setFileHash;
- (id /* block */)setDefinition;
- (id /* block */)setMainURLStr;
- (id /* block */)setBackupURL1;
- (id /* block */)setBackupURL2;
- (id /* block */)setBackupURL3;
- (id)bashInitRange;
- (id)bashIndexRange;
- (id)bashFirstMoofRange;
- (double)getValueFloat:(long long)arg0;
- (long long)infoId;
- (void)setVHeight:(id)arg0;
- (void)setVWidth:(id)arg0;
- (void)setUrlExpire:(id)arg0;
- (void)setQualityDesc:(id)arg0;
- (void)setSpade_a:(id)arg0;
- (void)setCheckInfo:(id)arg0;
- (void)setMainURLStr:(id)arg0;
- (void)setBackupURL1:(id)arg0;
- (void)setBackupURL2:(id)arg0;
- (void)setBackupURL3:(id)arg0;
- (void)setUpResolutionMap:(id)arg0;
- (id)getVideoInfo;
- (unsigned long long)getVideoDefinitionType;
- (id)allURLForVideoID:(id)arg0 transformedURL:(BOOL)arg1;
- (BOOL)getValueBool:(long long)arg0;
- (id)toMediaInfoDict;
- (void)parseMediaDict:(id)arg0;
- (id)videoEngineUrlInfoToDict;
- (id /* block */)setUrlExpire;
- (id /* block */)setSpade_a;
- (id /* block */)setCheckInfo;
- (id /* block */)setMediaType;
- (unsigned long long)videoDefinitionType;
- (void)setVideoDefinitionType:(unsigned long long)arg0;
- (id)audioQuality;
- (void)setAudioQuality:(id)arg0;
- (id)barrageMaskUrl;
- (void)setBarrageMaskUrl:(id)arg0;
- (id)aiBarrageUrl;
- (void)setAiBarrageUrl:(id)arg0;
- (id)vHeight;
- (id)vWidth;
- (id)playLoadMaxStep;
- (void)setPlayLoadMaxStep:(id)arg0;
- (id)playLoadMinStep;
- (void)setPlayLoadMinStep:(id)arg0;
- (id)spade_a;
- (id)checkInfo;
- (id)definitionString;
- (void)setDefinitionString:(id)arg0;
- (id)p2pVerifyUrl;
- (void)setP2pVerifyUrl:(id)arg0;
- (id)qualityDesc;
- (long long)videoModelVersion;
- (void)setVideoModelVersion:(long long)arg0;
- (void)setBashInitRange:(id)arg0;
- (void)setBashIndexRange:(id)arg0;
- (void)setBashFirstMoofRange:(id)arg0;
- (id)barrageMaskOffset;
- (void)setBarrageMaskOffset:(id)arg0;
- (id)packetOffset;
- (void)setPacketOffset:(id)arg0;
- (void)setFitterInfo:(id)arg0;
- (long long)languageId;
- (void)setLanguageId:(long long)arg0;
- (id)dubVersion;
- (void)setDubVersion:(id)arg0;
- (void)setInfoId:(long long)arg0;
- (id)vType_ver2;
- (void)setVType_ver2:(id)arg0;
- (id)codecType_ver2;
- (void)setCodecType_ver2:(id)arg0;
- (void)setMainURLStr_ver2:(id)arg0;
- (void)setBackupURL1_ver2:(id)arg0;
- (id)spade_a_ver2;
- (void)setSpade_a_ver2:(id)arg0;
- (id)fileHash_ver2;
- (void)setFileHash_ver2:(id)arg0;
- (id)quality_ver2;
- (void)setQuality_ver2:(id)arg0;
- (id)defination_ver2;
- (void)setDefination_ver2:(id)arg0;
- (id)mediaType_ver2;
- (void)setMediaType_ver2:(id)arg0;
- (id)vHeight_ver2;
- (void)setVHeight_ver2:(id)arg0;
- (id)vWidth_ver2;
- (void)setVWidth_ver2:(id)arg0;
- (id)size_ver2;
- (void)setSize_ver2:(id)arg0;
- (long long)bitrate_ver2;
- (void)setBitrate_ver2:(long long)arg0;
- (id)preloadSize_ver2;
- (void)setPreloadSize_ver2:(id)arg0;
- (id)preLoadMaxStep_ver2;
- (void)setPreLoadMaxStep_ver2:(id)arg0;
- (id)preLoadMinStep_ver2;
- (void)setPreLoadMinStep_ver2:(id)arg0;
- (id)preloadSocketBuffer_ver2;
- (void)setPreloadSocketBuffer_ver2:(id)arg0;
- (id)preloadInterval_ver2;
- (void)setPreloadInterval_ver2:(id)arg0;
- (id)urlExpire;
- (id)logoType;
- (void)setLogoType:(id)arg0;
- (long long)apiVer;
- (void)setApiVer:(long long)arg0;
- (id)videoResolutionMap;
- (void)setVideoResolutionMap:(id)arg0;
- (id)audioResolutionMap;
- (void)setAudioResolutionMap:(id)arg0;
- (id)checkInfo_ver2;
- (void)setCheckInfo_ver2:(id)arg0;
- (void)setMessage:(id)arg0;
- (id)init;
- (void)setMediaType:(id)arg0;
- (void).cxx_destruct;
- (id)definition;
- (id)mediaType;
- (id)message;
- (long long)bitrate;
- (id)initWithCoder:(id)arg0;
- (id)size;
- (id)languageCode;
- (void)setSize:(id)arg0;
- (id)description;
- (void)setLanguageCode:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)fps;
- (id)fieldId;
- (void)setFieldId:(id)arg0;
- (id)initWithDictionary:(id)arg0 mediaType:(id)arg1;
- (void)setBitrate:(long long)arg0;
- (long long)qualityType;
- (void)setFileHash:(id)arg0;
- (void)setFps:(id)arg0;
- (id)fileHash;
- (void)setDefinition:(id)arg0;
- (double)loudness;
- (void)setLoudness:(double)arg0;
- (id)codecType;
- (void)setCodecType:(id)arg0;
- (double)peak;
- (void)setPeak:(double)arg0;
- (void)setQualityType:(long long)arg0;
- (id)kid;
- (void)setKid:(id)arg0;
- (id)vType;
- (void)setVType:(id)arg0;
- (BOOL)encrypt;

@end
