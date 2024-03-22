//
//     Generated by private class-dump
//

@class NSString, AWETeenIntroPageMinorAlbumStatusModel, AWEURLModel;

@interface AWETeenIntroPageMinorAlbumModel : MTLModel <MTLJSONSerializing, AWEMinorAlbumProtocol> {
    NSString *_albumID;
    NSString *_title;
    AWEURLModel *_coverUrl;
    AWEURLModel *_coverClip;
    AWETeenIntroPageMinorAlbumStatusModel *_status;
    long long _source;
    unsigned long long _fakeAlbumType;
    NSString *_pageToken;
}

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *coverClip;
@property (retain, nonatomic) AWETeenIntroPageMinorAlbumStatusModel *status;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long fakeAlbumType;
@property (copy, nonatomic) NSString *pageToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)coverClipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (void)setAlbumID:(id)arg0;
- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (unsigned long long)fakeAlbumType;
- (id)coverClip;
- (void)setCoverClip:(id)arg0;
- (void)setFakeAlbumType:(unsigned long long)arg0;
- (long long)source;
- (void).cxx_destruct;
- (id)status;
- (id)title;
- (void)setStatus:(id)arg0;
- (void)setSource:(long long)arg0;
- (void)setTitle:(id)arg0;
- (id)albumID;

@end