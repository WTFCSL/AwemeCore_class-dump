//
//     Generated by private class-dump
//

@class NSNumber, NSString, IESECURLModel;

@interface IESECCommentTagModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_tagType;
    NSString *_tagText;
    IESECURLModel *_tagIcon;
}

@property (retain, nonatomic) NSNumber *tagType;
@property (copy, nonatomic) NSString *tagText;
@property (retain, nonatomic) IESECURLModel *tagIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setTagText:(id)arg0;
- (id)tagText;
- (id)tagIcon;
- (void)setTagIcon:(id)arg0;
- (id)tagType;
- (void).cxx_destruct;
- (void)setTagType:(id)arg0;

@end