//
//     Generated by private class-dump
//

@class NSString, AWEMinorAlbumLabel, AWEMinorAlbumStatus, AWEMinorXiGuaExtraInfoModel, AWEURLModel;

@interface AWEMinorAlbum : MTLModel <MTLJSONSerializing, AWEMinorAlbumProtocol> {
    NSString *_albumID;
    NSString *_title;
    AWEMinorAlbumStatus *_status;
    AWEURLModel *_coverUrl;
    AWEURLModel *_coverAutoGen;
    AWEURLModel *_coverDynamic;
    AWEURLModel *_coverClip;
    AWEMinorAlbumLabel *_albumLabel;
    NSString *_desc;
    long long _orientation;
    long long _source;
    AWEMinorXiGuaExtraInfoModel *_xiguaExtraInfo;
    long long _collectStatus;
    unsigned long long _fakeAlbumType;
    NSString *_pageToken;
}

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEMinorAlbumStatus *status;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *coverAutoGen;
@property (retain, nonatomic) AWEURLModel *coverDynamic;
@property (retain, nonatomic) AWEURLModel *coverClip;
@property (retain, nonatomic) AWEMinorAlbumLabel *albumLabel;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long orientation;
@property (nonatomic) long long source;
@property (retain, nonatomic) AWEMinorXiGuaExtraInfoModel *xiguaExtraInfo;
@property (nonatomic) long long collectStatus;
@property (nonatomic) unsigned long long fakeAlbumType;
@property (copy, nonatomic) NSString *pageToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)coverClipJSONTransformer;
+ (id)coverAutoGenJSONTransformer;
+ (id)coverDynamicJSONTransformer;
+ (id)albumLabelJSONTransformer;
+ (id)xiguaExtraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (id)xiguaExtraInfo;
- (void)setXiguaExtraInfo:(id)arg0;
- (void)setAlbumID:(id)arg0;
- (long long)collectStatus;
- (void)setCollectStatus:(long long)arg0;
- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (unsigned long long)fakeAlbumType;
- (id)coverClip;
- (void)setCoverClip:(id)arg0;
- (void)setFakeAlbumType:(unsigned long long)arg0;
- (id)albumLabel;
- (void)setAlbumLabel:(id)arg0;
- (id)coverAutoGen;
- (id)coverDynamic;
- (BOOL)isFromXiguaVideo;
- (void)setCoverAutoGen:(id)arg0;
- (void)setCoverDynamic:(id)arg0;
- (id)desc;
- (long long)source;
- (void).cxx_destruct;
- (id)status;
- (long long)orientation;
- (id)title;
- (void)setStatus:(id)arg0;
- (void)setOrientation:(long long)arg0;
- (BOOL)isLandscape;
- (void)setSource:(long long)arg0;
- (void)setDesc:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)albumID;

@end
