//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicNewAnchorModel : AWEBaseDataModel {
    NSString *_schemaUrl;
    NSString *_title;
    NSString *_anchorId;
}

@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *anchorId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaUrl;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (void)setSchemaUrl:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end