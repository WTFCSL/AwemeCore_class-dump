//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEMusicDiversionInfo, NSNumber, AWEMusicCommentTopBarInfo;

@interface AWEMusicExtraModel : AWEBaseApiModel <ACCMusicExtraModelProtocol> {
    BOOL _hasEdited;
    BOOL _isAEDMusic;
    BOOL _fromReplacedMusicSimilar;
    BOOL _miniLuna;
    BOOL _isHighFollowUser;
    NSString *_title;
    NSNumber *_albumId;
    NSString *_album;
    NSString *_albumTitle;
    NSNumber *_songId;
    NSString *_allRate;
    NSString *_author;
    NSString *_picSmall;
    NSString *_picPremium;
    NSString *_picBig;
    NSString *_picHuge;
    NSNumber *_appleMusicID;
    NSString *_topTagURLString;
    NSString *_noStrengthBeatsURLString;
    NSString *_energyTraceURLString;
    NSString *_onsetCNNURLString;
    NSString *_veBeatsURLString;
    NSString *_downBeatsURLString;
    NSString *_imageBeatsURLStrig;
    NSNumber *_minVideoNumber;
    NSNumber *_maxVideoNumber;
    long long _algorithmType;
    NSString *_manMadeBeatsURLString;
    NSDictionary *_jumpToLunaMv;
    NSString *_jaychouUrl;
    NSNumber *_AEDMusicScore;
    NSNumber *_AEDSingingScore;
    NSString *_candidateClip;
    NSString *_feedMusicTitleString;
    AWEMusicCommentTopBarInfo *_commentTopBarInfo;
    AWEMusicDiversionInfo *_diversionInfo;
    NSDictionary *_forwardingInfoDic;
    NSString *_lunaColorGradientInfo;
    long long _dspSwitch;
    long long _isFromShootGuide;
    NSString *_loudness;
    NSString *_peak;
    NSString *_recExtra;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *albumId;
@property (retain, nonatomic) NSString *noStrengthBeatsURLString;
@property (retain, nonatomic) NSString *energyTraceURLString;
@property (retain, nonatomic) NSString *onsetCNNURLString;
@property (retain, nonatomic) NSString *veBeatsURLString;
@property (retain, nonatomic) NSString *downBeatsURLString;
@property (retain, nonatomic) NSString *imageBeatsURLStrig;
@property (nonatomic) BOOL hasEdited;
@property (retain, nonatomic) NSNumber *minVideoNumber;
@property (nonatomic) long long algorithmType;
@property (retain, nonatomic) NSString *manMadeBeatsURLString;
@property (nonatomic) BOOL fromReplacedMusicSimilar;
@property (copy, nonatomic) NSString *candidateClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *albumId;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSNumber *songId;
@property (copy, nonatomic) NSString *allRate;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *picSmall;
@property (copy, nonatomic) NSString *picPremium;
@property (copy, nonatomic) NSString *picBig;
@property (copy, nonatomic) NSString *picHuge;
@property (nonatomic) BOOL hasEdited;
@property (retain, nonatomic) NSNumber *appleMusicID;
@property (retain, nonatomic) NSString *topTagURLString;
@property (retain, nonatomic) NSString *noStrengthBeatsURLString;
@property (retain, nonatomic) NSString *energyTraceURLString;
@property (retain, nonatomic) NSString *onsetCNNURLString;
@property (retain, nonatomic) NSString *veBeatsURLString;
@property (retain, nonatomic) NSString *downBeatsURLString;
@property (retain, nonatomic) NSString *imageBeatsURLStrig;
@property (retain, nonatomic) NSNumber *minVideoNumber;
@property (retain, nonatomic) NSNumber *maxVideoNumber;
@property (nonatomic) long long algorithmType;
@property (retain, nonatomic) NSString *manMadeBeatsURLString;
@property (retain, nonatomic) NSDictionary *jumpToLunaMv;
@property (retain, nonatomic) NSString *jaychouUrl;
@property (nonatomic) BOOL isAEDMusic;
@property (retain, nonatomic) NSNumber *AEDMusicScore;
@property (retain, nonatomic) NSNumber *AEDSingingScore;
@property (copy, nonatomic) NSString *candidateClip;
@property (retain, nonatomic) NSString *feedMusicTitleString;
@property (retain, nonatomic) AWEMusicCommentTopBarInfo *commentTopBarInfo;
@property (retain, nonatomic) AWEMusicDiversionInfo *diversionInfo;
@property (retain, nonatomic) NSDictionary *forwardingInfoDic;
@property (copy, nonatomic) NSString *lunaColorGradientInfo;
@property (nonatomic) BOOL fromReplacedMusicSimilar;
@property (nonatomic) long long dspSwitch;
@property (nonatomic) long long isFromShootGuide;
@property (nonatomic) BOOL miniLuna;
@property (retain, nonatomic) NSString *loudness;
@property (retain, nonatomic) NSString *peak;
@property (copy, nonatomic) NSString *recExtra;
@property (nonatomic) BOOL isHighFollowUser;

+ (id)commentTopBarInfoJSONTransformer;
+ (id)diversionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)songId;
- (void)setAlbumId:(id)arg0;
- (id)albumId;
- (void)setSongId:(id)arg0;
- (id)allRate;
- (void)setAllRate:(id)arg0;
- (id)picSmall;
- (void)setPicSmall:(id)arg0;
- (id)picPremium;
- (void)setPicPremium:(id)arg0;
- (id)picBig;
- (void)setPicBig:(id)arg0;
- (id)picHuge;
- (void)setPicHuge:(id)arg0;
- (void)setAppleMusicID:(id)arg0;
- (id)topTagURLString;
- (void)setTopTagURLString:(id)arg0;
- (id)noStrengthBeatsURLString;
- (void)setNoStrengthBeatsURLString:(id)arg0;
- (id)energyTraceURLString;
- (void)setEnergyTraceURLString:(id)arg0;
- (id)onsetCNNURLString;
- (void)setOnsetCNNURLString:(id)arg0;
- (id)veBeatsURLString;
- (void)setVeBeatsURLString:(id)arg0;
- (id)downBeatsURLString;
- (void)setDownBeatsURLString:(id)arg0;
- (id)imageBeatsURLStrig;
- (void)setImageBeatsURLStrig:(id)arg0;
- (id)minVideoNumber;
- (void)setMinVideoNumber:(id)arg0;
- (id)maxVideoNumber;
- (void)setMaxVideoNumber:(id)arg0;
- (id)manMadeBeatsURLString;
- (void)setManMadeBeatsURLString:(id)arg0;
- (id)jumpToLunaMv;
- (void)setJumpToLunaMv:(id)arg0;
- (id)jaychouUrl;
- (void)setJaychouUrl:(id)arg0;
- (BOOL)isAEDMusic;
- (void)setIsAEDMusic:(BOOL)arg0;
- (id)AEDMusicScore;
- (void)setAEDMusicScore:(id)arg0;
- (id)AEDSingingScore;
- (void)setAEDSingingScore:(id)arg0;
- (id)candidateClip;
- (void)setCandidateClip:(id)arg0;
- (id)feedMusicTitleString;
- (void)setFeedMusicTitleString:(id)arg0;
- (id)commentTopBarInfo;
- (void)setCommentTopBarInfo:(id)arg0;
- (id)diversionInfo;
- (void)setDiversionInfo:(id)arg0;
- (id)forwardingInfoDic;
- (void)setForwardingInfoDic:(id)arg0;
- (id)lunaColorGradientInfo;
- (void)setLunaColorGradientInfo:(id)arg0;
- (BOOL)fromReplacedMusicSimilar;
- (void)setFromReplacedMusicSimilar:(BOOL)arg0;
- (long long)dspSwitch;
- (void)setDspSwitch:(long long)arg0;
- (long long)isFromShootGuide;
- (void)setIsFromShootGuide:(long long)arg0;
- (BOOL)miniLuna;
- (void)setMiniLuna:(BOOL)arg0;
- (id)recExtra;
- (void)setRecExtra:(id)arg0;
- (BOOL)isHighFollowUser;
- (void)setIsHighFollowUser:(BOOL)arg0;
- (id)album;
- (void).cxx_destruct;
- (id)title;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setAlbum:(id)arg0;
- (void)setHasEdited:(BOOL)arg0;
- (BOOL)hasEdited;
- (id)albumTitle;
- (void)setAlbumTitle:(id)arg0;
- (id)loudness;
- (void)setLoudness:(id)arg0;
- (id)peak;
- (void)setPeak:(id)arg0;
- (long long)algorithmType;
- (void)setAlgorithmType:(long long)arg0;
- (id)appleMusicID;

@end
