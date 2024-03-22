//
//     Generated by private class-dump
//

@class HTSLiveText, NSString, NSArray, HTSLiveImage, NSMutableDictionary, NSNumber;

@interface HTSLiveMemberMessageEffectConfigModel : IESLiveDynamicModel <IESLiveEffectNodeProtocol> {
    BOOL _userNameClips;
    NSMutableDictionary *_pieceValues;
    HTSLiveText *_templateText;
    long long _assetID;
    long long _textAlignment;
    HTSLiveImage *_borderThumb;
    HTSLiveImage *_avatarThumb;
    double _width;
    double _height;
    NSString *_dressID;
    NSString *_borderDressID;
    HTSLiveImage *_dynamicImage;
    long long _mp4AnimAssetId;
    NSString *_content;
    long long _alignment;
    long long _alignmentOffset;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *dressID;
@property (copy, nonatomic) NSString *borderDressID;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long avatarPos;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *backgourndColor;
@property (copy, nonatomic) NSString *fansName;
@property (retain, nonatomic) NSNumber *fansLevel;
@property (retain, nonatomic) HTSLiveImage *textIcon;
@property (nonatomic) BOOL hasTextIcon;
@property (nonatomic) BOOL isLight;
@property (nonatomic) int stayTime;
@property (nonatomic) long long animAssetID;
@property (retain, nonatomic) HTSLiveImage *badge;
@property (retain, nonatomic) NSArray *flexSettingArray;
@property (retain, nonatomic) HTSLiveImage *textIconOverlay;
@property (retain, nonatomic) NSArray *textFlexSettingArray;
@property (readonly, nonatomic) BOOL hasTextIconOverlay;
@property (retain, nonatomic) HTSLiveImage *animatedBadge;
@property (readonly, nonatomic) BOOL hasAnimatedBadge;
@property (nonatomic) BOOL hasSweepLight;
@property (nonatomic) long long centerAnimAssetId;
@property (retain, nonatomic) HTSLiveImage *dynamicImage;
@property (nonatomic) long long mp4AnimAssetId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long alignment;
@property (nonatomic) long long alignmentOffset;
@property (retain, nonatomic) NSMutableDictionary *pieceValues;
@property (retain, nonatomic) HTSLiveText *templateText;
@property (nonatomic) long long assetID;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) HTSLiveImage *borderThumb;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL userNameClips;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarThumb;
- (void)setAvatarThumb:(id)arg0;
- (id)templateText;
- (void)setTemplateText:(id)arg0;
- (id)pieceValues;
- (void)setPieceValues:(id)arg0;
- (void)setDressID:(id)arg0;
- (id)dressID;
- (BOOL)hasTextIconOverlay;
- (BOOL)hasAnimatedBadge;
- (long long)mp4AnimAssetId;
- (id)borderThumb;
- (void)setBorderThumb:(id)arg0;
- (BOOL)userNameClips;
- (void)setUserNameClips:(BOOL)arg0;
- (id)borderDressID;
- (void)setBorderDressID:(id)arg0;
- (void)setMp4AnimAssetId:(long long)arg0;
- (void).cxx_destruct;
- (void)setAlignment:(long long)arg0;
- (double)height;
- (void)setAssetID:(long long)arg0;
- (long long)alignment;
- (id)content;
- (long long)textAlignment;
- (void)setContent:(id)arg0;
- (void)setWidth:(double)arg0;
- (void)setTextAlignment:(long long)arg0;
- (long long)assetID;
- (void)setHeight:(double)arg0;
- (double)width;
- (id)dynamicImage;
- (void)setDynamicImage:(id)arg0;
- (long long)alignmentOffset;
- (void)setAlignmentOffset:(long long)arg0;

@end