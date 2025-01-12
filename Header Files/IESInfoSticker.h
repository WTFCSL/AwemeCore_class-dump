//
//     Generated by private class-dump
//

@class NSLock, NSString, NSArray, NSData, IESInfoStickerParam, IESInfoTextTemplateStickerParams, NSDictionary, HTSGLFramebuffer, IESMMKeyFrameInfo, HTSGLContext, HTSGLPicture, NSMutableDictionary;

@interface IESInfoSticker : NSObject <KeyFrameOperationDelegate, NSCopying> {
    BOOL _needDisplayTop;
    BOOL _changeStickerDuration;
    BOOL _isNeedRemove;
    BOOL _isEffectRemoved;
    BOOL _isSrtInfoSticker;
    BOOL _isSrtFirstTime;
    BOOL _isTextSticker;
    BOOL _isTextTemplateSticker;
    BOOL _isBrushSticker;
    BOOL _isSubTextSticker;
    BOOL _isRichTextSticker;
    BOOL _isNeedForceUpdateOneFrame;
    short _layer;
    NSString *_resourcePath;
    long long _stickerId;
    void *_handle;
    double _startTime;
    double _duration;
    IESInfoStickerParam *_param;
    NSArray *_effectInfo;
    NSDictionary *_userinfo;
    NSString *_brushParam;
    IESInfoTextTemplateStickerParams *_textTemplateStickerParams;
    NSString *_textParam;
    NSArray *_animParams;
    NSString *_emojiUtf8Str;
    HTSGLFramebuffer *_sourceFrame;
    NSString *_pinResultPath;
    NSMutableDictionary *_pinTimeMappingDic;
    NSMutableDictionary *_orderlySrcPtsDic;
    NSData *_pindata;
    long long _pinStatus;
    HTSGLPicture *_picture;
    IESMMKeyFrameInfo *_infoStickerKeyframeInfo;
    NSLock *_pinLock;
    HTSGLContext *_mainContext;
    struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) unsigned long long acc_stickerType;
@property (readonly, nonatomic) unsigned long long acc_karaokeType;
@property (readonly, nonatomic) BOOL acc_isNotNormalInfoSticker;
@property (readonly, nonatomic) BOOL acc_isImageSticker;
@property (readonly, nonatomic) BOOL acc_isTextSticker;
@property (readonly, nonatomic) BOOL acc_isCustomerSticker;
@property (readonly, nonatomic) BOOL acc_isBizInfoSticker;
@property (retain, nonatomic) HTSGLPicture *picture;
@property (retain, nonatomic) IESMMKeyFrameInfo *infoStickerKeyframeInfo;
@property (retain, nonatomic) NSLock *pinLock;
@property (retain, nonatomic) HTSGLContext *mainContext;
@property (retain, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSString *absoluteResourcePath;
@property (nonatomic) long long stickerId;
@property (nonatomic) void *handle;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) IESInfoStickerParam *param;
@property (nonatomic) BOOL needDisplayTop;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSArray *effectInfo;
@property (copy, nonatomic) NSDictionary *userinfo;
@property (nonatomic) short layer;
@property (nonatomic) BOOL changeStickerDuration;
@property (nonatomic) BOOL isNeedRemove;
@property (nonatomic) BOOL isEffectRemoved;
@property (nonatomic) BOOL isSrtInfoSticker;
@property (nonatomic) BOOL isSrtFirstTime;
@property (nonatomic) BOOL isTextSticker;
@property (nonatomic) BOOL isTextTemplateSticker;
@property (nonatomic) BOOL isBrushSticker;
@property (retain, nonatomic) NSString *brushParam;
@property (retain, nonatomic) IESInfoTextTemplateStickerParams *textTemplateStickerParams;
@property (nonatomic) BOOL isSubTextSticker;
@property (nonatomic) BOOL isRichTextSticker;
@property (retain, nonatomic) NSString *textParam;
@property (retain, nonatomic) NSArray *animParams;
@property (retain, nonatomic) NSString *emojiUtf8Str;
@property (retain, nonatomic) HTSGLFramebuffer *sourceFrame;
@property (retain, nonatomic) NSString *pinResultPath;
@property (retain, nonatomic) NSMutableDictionary *pinTimeMappingDic;
@property (retain, nonatomic) NSMutableDictionary *orderlySrcPtsDic;
@property (retain, nonatomic) NSData *pindata;
@property (nonatomic) long long pinStatus;
@property (nonatomic) BOOL isNeedForceUpdateOneFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoStickerWithDic:(id)arg0;
+ (id)acc_stickerKeyMapping;
+ (BOOL)acc_isImageStickerWithStickerType:(unsigned long long)arg0 karaokeType:(unsigned long long)arg1;
+ (unsigned long long)acc_stickerTypeWithUserInfo:(id)arg0;

- (unsigned long long)acc_stickerType;
- (BOOL)acc_isImageSticker;
- (BOOL)acc_isBizInfoSticker;
- (BOOL)acc_isNotNormalInfoSticker;
- (unsigned long long)acc_karaokeType;
- (void)setStickerId:(long long)arg0;
- (long long)stickerId;
- (void)setEffectInfo:(id)arg0;
- (id)effectInfo;
- (void)setIsNeedRemove:(BOOL)arg0;
- (void)setUserinfo:(id)arg0;
- (void)setPinResultPath:(id)arg0;
- (void)setTextParam:(id)arg0;
- (void)setIsSrtInfoSticker:(BOOL)arg0;
- (void)setIsSrtFirstTime:(BOOL)arg0;
- (void)setPinStatus:(long long)arg0;
- (void)setkeyFrameInfo:(id)arg0 withPts:(unsigned long long)arg1;
- (void)removekeyFrameInfo:(unsigned long long)arg0;
- (id)animParams;
- (id)pinResultPath;
- (id)userinfo;
- (id)toDicInfo;
- (id)absoluteResourcePath;
- (id)initWithResource:(id)arg0 context:(id)arg1;
- (id)initWithImage:(id)arg0 context:(id)arg1;
- (BOOL)needDisplayTop;
- (void)setNeedDisplayTop:(BOOL)arg0;
- (BOOL)changeStickerDuration;
- (void)setChangeStickerDuration:(BOOL)arg0;
- (BOOL)isNeedRemove;
- (BOOL)isEffectRemoved;
- (void)setIsEffectRemoved:(BOOL)arg0;
- (BOOL)isSrtFirstTime;
- (BOOL)isSrtInfoSticker;
- (BOOL)isTextSticker;
- (void)setIsTextSticker:(BOOL)arg0;
- (BOOL)isTextTemplateSticker;
- (void)setIsTextTemplateSticker:(BOOL)arg0;
- (id)textTemplateStickerParams;
- (void)setTextTemplateStickerParams:(id)arg0;
- (BOOL)isSubTextSticker;
- (void)setIsSubTextSticker:(BOOL)arg0;
- (id)textParam;
- (void)setAnimParams:(id)arg0;
- (id)emojiUtf8Str;
- (void)setEmojiUtf8Str:(id)arg0;
- (id)pinTimeMappingDic;
- (void)setPinTimeMappingDic:(id)arg0;
- (id)orderlySrcPtsDic;
- (void)setOrderlySrcPtsDic:(id)arg0;
- (long long)pinStatus;
- (id)pindata;
- (void)setPindata:(id)arg0;
- (BOOL)isNeedForceUpdateOneFrame;
- (void)setIsNeedForceUpdateOneFrame:(BOOL)arg0;
- (id)infoStickerKeyframeInfo;
- (void)setInfoStickerKeyframeInfo:(id)arg0;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (id)pinLock;
- (void)sortAllSrcPTS_ForSegment;
- (BOOL)needRefreshKeyFrame;
- (id)toDicInfo:(id)arg0;
- (BOOL)copyPinTimeMapDataFromSegmentID:(id)arg0 toSegmentID:(id)arg1;
- (BOOL)removePinTimeMapDataForSegmentID:(id)arg0;
- (id)getStickerPinMapData;
- (void)buildStickerPinMapDicWithData:(id)arg0;
- (void)clearPinResult;
- (double)getMappedPtsWithSrcPts:(long long)arg0 segmentID:(id)arg1;
- (BOOL)isBrushSticker;
- (void)setIsBrushSticker:(BOOL)arg0;
- (id)brushParam;
- (void)setBrushParam:(id)arg0;
- (BOOL)isRichTextSticker;
- (void)setIsRichTextSticker:(BOOL)arg0;
- (void)setPinLock:(id)arg0;
- (BOOL)acc_isTextSticker;
- (BOOL)acc_isCustomerSticker;
- (void)setParam:(id)arg0;
- (void)setSourceFrame:(id)arg0;
- (id)sourceFrame;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void)setPicture:(id)arg0;
- (void)setLayer:(short)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)param;
- (long long)compare:(id)arg0;
- (double)duration;
- (void)setHandle:(void *)arg0;
- (double)startTime;
- (id)mainContext;
- (short)layer;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (id)picture;
- (void *)handle;
- (id)resourcePath;
- (void)setDuration:(double)arg0;
- (void)setResourcePath:(id)arg0;
- (void)setMainContext:(id)arg0;

@end
