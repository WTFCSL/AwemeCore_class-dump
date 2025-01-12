//
//     Generated by private class-dump
//

@class AWEDitoCommonToolBarItemIconModel, AWEDitoCommonToolBarItemTextModel, NSDictionary, NSString, DitoStyle, NSNumber;

@interface AWEDitoCommonToolBarItemModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _type;
    AWEDitoCommonToolBarItemIconModel *_iconModel;
    AWEDitoCommonToolBarItemTextModel *_textModel;
    NSDictionary *_style;
    NSString *_clickEvent;
    NSNumber *_width;
    NSNumber *_height;
    DitoStyle *_DitoStyleModel;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEDitoCommonToolBarItemIconModel *iconModel;
@property (retain, nonatomic) AWEDitoCommonToolBarItemTextModel *textModel;
@property (retain, nonatomic) NSDictionary *style;
@property (copy, nonatomic) NSString *clickEvent;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (retain, nonatomic) DitoStyle *DitoStyleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)textModel;
- (void)setTextModel:(id)arg0;
- (id)DitoStyleModel;
- (void)setDitoStyleModel:(id)arg0;
- (void)setClickEvent:(id)arg0;
- (id)style;
- (id)iconModel;
- (void).cxx_destruct;
- (id)height;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setWidth:(id)arg0;
- (void)setIconModel:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (id)clickEvent;
- (void)setStyle:(id)arg0;

@end
