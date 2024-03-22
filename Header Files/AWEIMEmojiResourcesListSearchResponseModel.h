//
//     Generated by private class-dump
//

@class NSString, AWEIMEmojiStickerSearchResponseModel, AWEIMEmojiResourceSearchResponseModel, NSNumber;

@interface AWEIMEmojiResourcesListSearchResponseModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_statusCode;
    NSString *_statusMsg;
    AWEIMEmojiResourceSearchResponseModel *_resourceSearch;
    AWEIMEmojiStickerSearchResponseModel *_stickerSearch;
}

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) AWEIMEmojiResourceSearchResponseModel *resourceSearch;
@property (retain, nonatomic) AWEIMEmojiStickerSearchResponseModel *stickerSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)resourceSearch;
- (void)setResourceSearch:(id)arg0;
- (id)stickerSearch;
- (void)setStickerSearch:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void).cxx_destruct;

@end
