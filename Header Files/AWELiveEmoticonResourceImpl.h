//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, NSCache;

@interface AWELiveEmoticonResourceImpl : NSObject <IESLiveEmoticonResource> {
    NSCache *_imageCache;
    NSArray *_hostEmoticonItems;
    NSArray *_quickEmoticonItems;
    NSDictionary *_emoticonTitleImageMapper;
}

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSArray *hostEmoticonItems;
@property (retain, nonatomic) NSArray *quickEmoticonItems;
@property (retain, nonatomic) NSDictionary *emoticonTitleImageMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)interactiveEmotionResourcePathWithDisplayName:(id)arg0;
- (id)customEmotionViewController;
- (id)customAddStickerNotifyName;
- (id)emoticonItems;
- (void)loadEmojiResource;
- (void)setEmoticonTitleImageMapper:(id)arg0;
- (void)setHostEmoticonItems:(id)arg0;
- (void)setQuickEmoticonItems:(id)arg0;
- (void)loadQuickEmojiResource;
- (id)emoticonTitleImageMapper;
- (id)imageWithEmojiIconName:(id)arg0 imageScale:(double)arg1;
- (id)imageWithEmojiTitle:(id)arg0 imageScale:(double)arg1;
- (id)quickReplyEmoticonItems;
- (void)startLoadFavoriteItems;
- (id)imageWithFilePath:(id)arg0;
- (void)transferToCustomPreviewWithData:(id)arg0;
- (void)collectVSCommentSelectedImage:(id)arg0;
- (id)loadFaveriteStickerResource;
- (id)getIMInteractiveEmoticons;
- (id)plainTextFromAttributedText:(id)arg0;
- (id)emoticonAttributedTextFromPlain:(id)arg0 commonAttr:(id)arg1;
- (id)hostEmoticonItems;
- (id)quickEmoticonItems;
- (id)init;
- (void).cxx_destruct;
- (void)setImageCache:(id)arg0;
- (id)imageCache;

@end