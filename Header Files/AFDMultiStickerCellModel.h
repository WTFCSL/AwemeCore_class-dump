//
//     Generated by private class-dump
//

@class NSString, AWENewFaceStickerModel;

@interface AFDMultiStickerCellModel : NSObject <IGListDiffable> {
    AWENewFaceStickerModel *_stickerInfo;
    NSString *_btnConfigText;
}

@property (retain, nonatomic) AWENewFaceStickerModel *stickerInfo;
@property (copy, nonatomic) NSString *btnConfigText;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)stickerInfo;
- (id)btnConfigText;
- (void)setStickerInfo:(id)arg0;
- (void)setBtnConfigText:(id)arg0;
- (void).cxx_destruct;

@end
