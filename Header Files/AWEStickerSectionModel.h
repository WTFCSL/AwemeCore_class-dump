//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEStickerSectionModel : NSObject {
    BOOL _supportPagingLoad;
    NSString *_name;
    NSArray *_stickers;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSupportPagingLoad) BOOL supportPagingLoad;
@property (copy, nonatomic) NSArray *stickers;

- (BOOL)isSupportPagingLoad;
- (id)initWithName:(id)arg0 stickers:(id)arg1;
- (void)setSupportPagingLoad:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (id)stickers;
- (void)setStickers:(id)arg0;

@end
