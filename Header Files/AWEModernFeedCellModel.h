//
//     Generated by private class-dump
//

@class NSString, AWEModernFeedSectionMeta, AWEModernFeedCellBackgroundModel, AWEModernFeedCellSeparatorModel;

@interface AWEModernFeedCellModel : NSObject {
    NSString *_cellType;
    id _data;
    unsigned long long _themeStyle;
    AWEModernFeedCellSeparatorModel *_bottomSeparator;
    AWEModernFeedCellBackgroundModel *_cellBackgroundModel;
    AWEModernFeedSectionMeta *_meta;
    id _attachmentCellModel;
    unsigned long long _combinateCardType;
    NSString *_preRenderIdentifier;
}

@property (copy, nonatomic) NSString *preRenderIdentifier;
@property (copy, nonatomic) NSString *cellType;
@property (retain, nonatomic) id data;
@property (readonly, nonatomic) BOOL isStaticType;
@property (nonatomic) unsigned long long themeStyle;
@property (retain, nonatomic) AWEModernFeedCellSeparatorModel *bottomSeparator;
@property (retain, nonatomic) AWEModernFeedCellBackgroundModel *cellBackgroundModel;
@property (retain, nonatomic) AWEModernFeedSectionMeta *meta;
@property (retain, nonatomic) id attachmentCellModel;
@property (nonatomic) unsigned long long combinateCardType;

- (void)setThemeStyle:(unsigned long long)arg0;
- (id)preRenderIdentifier;
- (void)setPreRenderIdentifier:(id)arg0;
- (id)attachmentCellModel;
- (void)setAttachmentCellModel:(id)arg0;
- (BOOL)isStaticType;
- (id)cellBackgroundModel;
- (void)setCellBackgroundModel:(id)arg0;
- (unsigned long long)combinateCardType;
- (void)setCombinateCardType:(unsigned long long)arg0;
- (void)setMeta:(id)arg0;
- (id)data;
- (id)meta;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setCellType:(id)arg0;
- (id)initWithType:(id)arg0 data:(id)arg1;
- (id)bottomSeparator;
- (id)cellType;
- (void)setBottomSeparator:(id)arg0;
- (unsigned long long)themeStyle;

@end
