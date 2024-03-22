//
//     Generated by private class-dump
//

@class IESECFeedResourceCardHeaderLinkInfoModel, IESECFeedResourceCardHeaderTitleInfoModel;

@interface IESECFeedResourceCardHeaderModel : IESECFeedResourceCardBaseNode {
    long long _headerHeight;
    unsigned long long _style;
    IESECFeedResourceCardHeaderTitleInfoModel *_title;
    IESECFeedResourceCardHeaderTitleInfoModel *_subtitle;
    IESECFeedResourceCardHeaderLinkInfoModel *_link;
}

@property (nonatomic) long long headerHeight;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) IESECFeedResourceCardHeaderTitleInfoModel *title;
@property (retain, nonatomic) IESECFeedResourceCardHeaderTitleInfoModel *subtitle;
@property (retain, nonatomic) IESECFeedResourceCardHeaderLinkInfoModel *link;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)style;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (long long)headerHeight;
- (id)link;
- (id)subtitle;
- (void)setStyle:(unsigned long long)arg0;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setHeaderHeight:(long long)arg0;

@end
